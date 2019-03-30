/*
 * remotecurtain.cpp für RemoteCurtain
 *
 * author: Markus Wiedner
 *
 *
*/

#include "remotecurtain.h"
#include "ui_remotecurtain.h"
#include <QtWidgets>
#include <QtNetwork>
#include <QUrl>
#include <QDebug>
#include <QDateTime>
#include <QNetworkDatagram>

const char DEFAULT_URL[] = "192.168.1.13";

// Konstruktor
RemoteCurtain::RemoteCurtain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RemoteCurtain)
{
    ui->setupUi(this);
    ui->url_edit->setText(DEFAULT_URL);
    ui->horizontalSlider->setMinimum(0);
    ui->horizontalSlider->setMaximum(100);
    ui->auto_button->toggle();
    ui->horizontalSlider->setEnabled(false);
    ui->request_button_3->setEnabled(false);
    ui->request_button_4->setEnabled(false);

    connect(ui->request_button, SIGNAL(clicked()), this ,SLOT(prepareRequest()));
    connect(ui->horizontalSlider, SIGNAL(sliderReleased()), this, SLOT(prepareRequest()));
    //connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(prepareRequest()));



}

// Destruktor
RemoteCurtain::~RemoteCurtain()
{
    delete ui;
}

/* prepareRequest() liest Server-URL ein.
   generiert request-Nachricht mit Steuerkommandos
   Ruft startRequest() auf mit neuer URL als Parameter
*/
void RemoteCurtain::prepareRequest()
{
    const QString urlSpec = ui->url_edit->text().trimmed();
    const QUrl newUrl = QUrl::fromUserInput(urlSpec);
    QByteArray requestContent;
    requestContent = "<s>" + mode;
    requestContent.append(QString::number(sliderValue) + "</s>");
    this->request = requestContent.repeated(1);
    qDebug() << request;
    startRequest(newUrl);
}

// sendet Custom-Request an WiFi-Server und speichert die Antwort
void RemoteCurtain::startRequest(const QUrl &requestedUrl)
{
    url = requestedUrl;

    reply = qnam.sendCustomRequest(QNetworkRequest(url),this->request);
    connect(reply, &QIODevice::readyRead, this, &RemoteCurtain::httpReadyRead);
}

// Auslesen der Server-Antwort
void RemoteCurtain::httpReadyRead()
{
    QByteArray replyBytes = reply->readAll();

    //qDebug() << replyBytes;
    if (replyBytes.trimmed().isEmpty() == false)
    {
        parseReply(replyBytes.trimmed());
        qDebug() << replyBytes.trimmed();

    }
}

// parsed die Server-Antwort und stellt die geparsten Messwerte in UI dar
void RemoteCurtain::parseReply(QString replyBytes)
{
    QString temperature = replyBytes.mid(replyBytes.indexOf("<T>") + 3, replyBytes.indexOf("</T>") - replyBytes.indexOf("<T>") - 3) + " °C";
    ui->temp_display->setText(temperature); // stellt empfangene Server-Antwort im Temperaturfeld dar
    QString humidity = replyBytes.mid(replyBytes.indexOf("<H>") + 3, replyBytes.indexOf("</H>") - replyBytes.indexOf("<H>") - 3) + " %";
    ui->feucht_display->setText(humidity);
    QString light = replyBytes.mid(replyBytes.indexOf("<L>") + 3, replyBytes.indexOf("</L>") - replyBytes.indexOf("<L>") - 3 ) + " %";
    ui->sonne_display->setText(light);
    QString distance = replyBytes.mid(replyBytes.indexOf("<U>") + 3, replyBytes.indexOf("</U>") - replyBytes.indexOf("<U>") - 3 ) + " cm";
    ui->oeffnung_display->setText(distance);
}

void RemoteCurtain::on_horizontalSlider_valueChanged(int value)
{
    if ((this->sliderValue - value) == -10 || (this->sliderValue - value) == 10 || value == 0 || value == 100 ){
        this->sliderValue = value;
        prepareRequest();
    }

    else this->sliderValue = value;

    qDebug() << value;
}

void RemoteCurtain::on_manuell_button_toggled(bool checked)
{
     if (checked){
         this->mode = "M";
         ui->horizontalSlider->setEnabled(true);
         ui->request_button_3->setEnabled(true);
         ui->request_button_4->setEnabled(true);
     }
     else {
         this->mode = "A";
         ui->horizontalSlider->setEnabled(false);
         ui->request_button_3->setEnabled(false);
         ui->request_button_4->setEnabled(false);
     }
}


void RemoteCurtain::on_request_button_3_clicked()
{
    ui->horizontalSlider->setValue(0);
}

void RemoteCurtain::on_request_button_4_clicked()
{
    ui->horizontalSlider->setValue(100);
}

void RemoteCurtain::initSocket()
{
    udpSocket = new QUdpSocket(this);
    udpSocket->bind(QHostAddress(DEFAULT_URL), 7755);

    connect(udpSocket, SIGNAL(readyRead()),
            this, SLOT(readPendingDatagrams()));
}

void RemoteCurtain::readPendingDatagrams()
{
    while (udpSocket->hasPendingDatagrams()) {
        QNetworkDatagram datagram = udpSocket->receiveDatagram();
        qDebug() << "UDP payload: " + datagram.data();
        //processTheDatagram(datagram);
    }
}
