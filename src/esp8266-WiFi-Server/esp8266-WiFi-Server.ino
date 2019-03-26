/* WiFi-Server für RemoteCurtain
 *  
 * Author: Markus Wiedner 
 * 
 * Der WiFi-Server soll Nachrichten über die serielle Schnittstelle vom Arduino-Uno empfangen können 
 * und diese als Antwort auf einen Request eines Clients über das Netzwerk/Internet publizieren.
 * Die Nachricht, die vom Client via Request übermittelt wurde, soll wiederum über serielle Schnittstelle
 * an den Arduino übermittelt werden. Auf diese Weise soll eine beidseitige Kommunikation 
 * zwischen GUI und Arduino über lokales Netzwerk und Internet ermögliht werden.
 */


#include <ESP8266WiFi.h>

const char* ssid = "WLAN_ssid"; // WLAN_ssid
const char* password = "WLAN_Passwort"; // WLAN_Passwort

WiFiServer server(80);

String message = "Platzhalter"; // Nachricht die an den client übermittelt werden soll.
String line = "Platzhalter2"; // Nachricht die vom client via Request an den Server übermittelt wird
void setup()
{
  Serial.begin(9600);
  Serial.println();

  Serial.printf("Connecting to %s ", ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println(" connected");

  server.begin();
  Serial.printf("Web server started, open %s in a web browser\n", WiFi.localIP().toString().c_str());
}



// erstellen einer Webpage, die die zu übermittelnde Nachricht enthält und diese an den Client sendet.
String prepareHtmlPage(String message)
{
  String htmlPage =
     String("HTTP/1.1 200 OK\r\n") +
            "Content-Type: text/html\r\n" +
            "Connection: close\r\n" +  // Verbindung wird nach Antwort geschlossen
            "Refresh: 5\r\n" +  // Webpage wird alle 5 Sekunden aktualisiert
            "\r\n" +
            message +
            "\r\n";
  return htmlPage;
}


void loop()
{
  
  // Nachricht für client wird über serielle Schnittstelle eingelesen und als String "message" gespeichert.
  if (Serial.available() > 0) {
    
    message = Serial.readString();
    //Serial.print(message);
    }
    
  WiFiClient client = server.available();
  // Warten auf client der sich mit Server verbindet
  if (client)
  {
    line = "";
    Serial.println("\n[Client connected]");
    while (client.connected())
    {
      // liest den Request des clients ein und speichert diesen als String "line"
      if (client.available())
      {
        line = client.readStringUntil('\r');
        Serial.print(line); // Request wird über serielle Schnittstelle ausgegeben
        // sicherstellen, dass Request beendet ist. Ende mit leerer Zeile im Request markiert.
        if (line.length() == 1 && line[0] == '\n')
        {
          // Aufrufen der Antwortfunktion mit ausgehender Nachricht als Parameter
          client.println(prepareHtmlPage(message));
          break;
        }
      }
    }

    
    
    delay(1); // Gibt potenziellem Webbrowser Zeit zum empfangen

    // Verbindung wird geschlossen:
    client.stop();
    Serial.println("[Client disonnected]");
  }
}
