/*
 * remotecurtain.h für RemoteCurtain
 *
 * author: Markus Wiedner
 *
 *
*/

#ifndef REMOTECURTAIN_H
#define REMOTECURTAIN_H

#include <QMainWindow>
#include <QProgressDialog>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QUdpSocket>

namespace Ui {
class RemoteCurtain;
}

class RemoteCurtain : public QMainWindow
{
    Q_OBJECT

public:
    explicit RemoteCurtain(QWidget *parent = nullptr);
    ~RemoteCurtain();
    void startRequest(const QUrl &requestedUrl);
    void parseReply(QString replyBytes);
    void initSocket();
    void readPendingDatagrams();

signals:

private slots:
    void prepareRequest();
    void httpReadyRead();
    void on_horizontalSlider_valueChanged(int value);
    void on_manuell_button_toggled(bool checked);
    void on_request_button_3_clicked();
    void on_request_button_4_clicked();


private:
    Ui::RemoteCurtain *ui;
    QUrl url;
    QNetworkAccessManager qnam;
    QNetworkReply *reply;
    QByteArray request;
    QByteArray mode = "A";
    QUdpSocket * udpSocket;
    int sliderValue;
};

#endif // REMOTECURTAIN_H
