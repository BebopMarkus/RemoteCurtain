/*
 * main.cpp für RemoteCurtain
 *
 * author: Markus Wiedner
 *
 *
*/

#include "remotecurtain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RemoteCurtain w;
    w.show();

    return a.exec();
}
