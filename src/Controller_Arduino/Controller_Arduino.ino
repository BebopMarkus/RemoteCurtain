/*
 * Controller_Arduino für RemoteCurtain
 * 
 * author: Markus Wiedner
 * 
 * 
 */


#include <SoftwareSerial.h>
#include <dht_nonblocking.h>
#include "SR04.h"
#include <Stepper.h>

const int STEPS_PER_REVOLUTION = 2048;  // notwendige Schritte für eine volle Umdrehung
const int ROLE_PER_MINUTE = 10;         // stepper-Geschwindigkeit in rpm

#define DHT_SENSOR_TYPE DHT_TYPE_11
#define TRIG_PIN 8
#define ECHO_PIN 9

int lightPin = 0;


SoftwareSerial wifiSerial(3, 2); 

static const int DHT_SENSOR_PIN = 12;
DHT_nonblocking dht_sensor( DHT_SENSOR_PIN, DHT_SENSOR_TYPE );

SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;

String message = "Start";
String request;
int bytesSend = 0;

float temperature;
float humidity;
float light;
int distance;

int leds = 0;

String mode = "A";
int command;
int simStepperStatus = 0;

Stepper stepper(STEPS_PER_REVOLUTION, 7, 5, 6, 4);


void setup() {
   stepper.setSpeed(ROLE_PER_MINUTE);
   Serial.begin(9600);
   wifiSerial.begin(9600);
}



// Misst Temperatur und Luftfeuchtigkeit am Sensor aus.
static bool measure_environment( float *temperature, float *humidity )
{
  static unsigned long measurement_timestamp = millis( );

  /* Misst alle 5 Sekunden. */
  if( millis( ) - measurement_timestamp > 5000ul )
  {
    if( dht_sensor.measure( temperature, humidity ) == true )
    {
      measurement_timestamp = millis( );
      return( true );
    }

    light  = analogRead(lightPin); // liest Photowiderstand am analogen Pin A0 ein.
    distance =sr04.Distance(); // US-Sensor misst Entfernung
    
  }

  return( false );
}

String prepareMessage()
{
  String message = String(  "<T>" + String(temperature, 1) + "</T>" + 
                            "<H>" + String(humidity, 1) + "</H>" + 
                            "<L>" + String(light/1032*100, 1) + "</L>" +
                            "<U>" + String(simStepperStatus) + "</U>" );

  //Serial.println(message);
  return message;
}

/*  Dreht den Steppermotor um die Differenz von Soll- und Ist-Wert.
 *  Rückführung des Ist-Wertes wird bisher nur simuliert, und muss unter Realbedingungen vom Ultraschallsensor abgenommen werden. 
 *  Hierfür ist eine Abstimmung des Sensors und der Schrittweite des Motors auf Fenstergröße und Zugverhalten des Motors notwendig.
 *  Unter derzeitiger Konfiguration bedeutet vollständiges Öffnen/Schließen eine komplette Umdrehung des Steppers in positive/negative Richtung.
 */
void commandStepper()
{
  if(mode == "M"){
    float tempStep = (command - simStepperStatus)*20.56;
    Serial.println(tempStep);
    stepper.step( (int) tempStep);
    simStepperStatus = command;
  }
}

// parsed Request und extrahiert Steuerdaten. Startet Steppermotor-Regelung.
String parseRequest()
{
  String parsedRequest = "";
  if(request.indexOf("<s>") != -1 && request.indexOf("</s>") != -1)
  {
    mode = request[request.lastIndexOf("<s>") + 3];
    parsedRequest = String(request.substring(request.lastIndexOf("<s>") + 4, request.lastIndexOf("</s>")));
    command = parsedRequest.toInt();
    commandStepper();
  }

  else Serial.println("nothing found");

  return parsedRequest;
}

void loop() {
  

  
  if(Serial.available()>0){
   String message = Serial.readString();
   Serial.println(message);
   
  }
    
  // Aufruf aller Messungen
  if( measure_environment( &temperature, &humidity ) == true )
  {
    /*
    Serial.print( "T = " );
    Serial.print( temperature, 1 );
    Serial.print( " deg. C, H = " );
    Serial.print( humidity, 1 );
    Serial.print( " % Ph = " );
    
    Serial.print(light, 1); // Ausgabe der Lichtstärke über ser. Schnittstelle
    Serial.print( " Entfernung = " );
    
    Serial.print(distance); // Ausgabe der Entfernung in cm über ser. Schnittstelle
    Serial.println(" cm");
    */

    wifiSerial.print(prepareMessage());
    wifiSerial.flush();
  }

  
  
  

  
  if(wifiSerial.available()>0){
    //Serial.println("Wifi serial data available");
    request = wifiSerial.readString();
    request.trim();
    
    
    Serial.println(request);
        Serial.println("break");
        Serial.println(request.length());

    
    Serial.println("Parsed request: " + parseRequest());
    Serial.println(mode);
    Serial.println(command);
    
  }

  
}
