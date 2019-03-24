/********************************************************************************
** Form generated from reading UI file 'remotecurtain.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTECURTAIN_H
#define UI_REMOTECURTAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoteCurtain
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *temp_label;
    QSpacerItem *horizontalSpacer;
    QLabel *temp_display;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *feucht_label;
    QSpacerItem *horizontalSpacer_2;
    QLabel *feucht_display;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *sonne_label;
    QSpacerItem *horizontalSpacer_3;
    QLabel *sonne_display;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *oeffnung_label;
    QSpacerItem *horizontalSpacer_6;
    QLabel *oeffnung_display;
    QSplitter *splitter;
    QLabel *host_label;
    QLineEdit *url_edit;
    QPushButton *request_button;
    QFrame *frame_2;
    QSlider *horizontalSlider;
    QRadioButton *manuell_button;
    QRadioButton *auto_button;
    QLabel *sonne_label_2;
    QPushButton *request_button_3;
    QPushButton *request_button_4;

    void setupUi(QMainWindow *RemoteCurtain)
    {
        if (RemoteCurtain->objectName().isEmpty())
            RemoteCurtain->setObjectName(QString::fromUtf8("RemoteCurtain"));
        RemoteCurtain->resize(475, 660);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush4(QColor(238, 238, 236, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush5(QColor(255, 255, 220, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush6(QColor(0, 0, 0, 128));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        RemoteCurtain->setPalette(palette);
        centralWidget = new QWidget(RemoteCurtain);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 120, 411, 201));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(60, 20, 291, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        temp_label = new QLabel(horizontalLayoutWidget);
        temp_label->setObjectName(QString::fromUtf8("temp_label"));

        horizontalLayout_2->addWidget(temp_label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        temp_display = new QLabel(horizontalLayoutWidget);
        temp_display->setObjectName(QString::fromUtf8("temp_display"));
        temp_display->setFrameShape(QFrame::NoFrame);

        horizontalLayout_2->addWidget(temp_display);

        horizontalLayoutWidget_2 = new QWidget(frame);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(60, 60, 291, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        feucht_label = new QLabel(horizontalLayoutWidget_2);
        feucht_label->setObjectName(QString::fromUtf8("feucht_label"));

        horizontalLayout_3->addWidget(feucht_label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        feucht_display = new QLabel(horizontalLayoutWidget_2);
        feucht_display->setObjectName(QString::fromUtf8("feucht_display"));
        feucht_display->setFrameShape(QFrame::NoFrame);

        horizontalLayout_3->addWidget(feucht_display);

        horizontalLayoutWidget_3 = new QWidget(frame);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(60, 100, 291, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        sonne_label = new QLabel(horizontalLayoutWidget_3);
        sonne_label->setObjectName(QString::fromUtf8("sonne_label"));

        horizontalLayout_4->addWidget(sonne_label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        sonne_display = new QLabel(horizontalLayoutWidget_3);
        sonne_display->setObjectName(QString::fromUtf8("sonne_display"));
        sonne_display->setFrameShape(QFrame::NoFrame);

        horizontalLayout_4->addWidget(sonne_display);

        horizontalLayoutWidget_4 = new QWidget(frame);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(60, 140, 291, 41));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        oeffnung_label = new QLabel(horizontalLayoutWidget_4);
        oeffnung_label->setObjectName(QString::fromUtf8("oeffnung_label"));

        horizontalLayout_7->addWidget(oeffnung_label);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        oeffnung_display = new QLabel(horizontalLayoutWidget_4);
        oeffnung_display->setObjectName(QString::fromUtf8("oeffnung_display"));
        oeffnung_display->setFrameShape(QFrame::NoFrame);

        horizontalLayout_7->addWidget(oeffnung_display);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(30, 60, 411, 41));
        splitter->setOrientation(Qt::Horizontal);
        host_label = new QLabel(splitter);
        host_label->setObjectName(QString::fromUtf8("host_label"));
        host_label->setAlignment(Qt::AlignCenter);
        splitter->addWidget(host_label);
        url_edit = new QLineEdit(splitter);
        url_edit->setObjectName(QString::fromUtf8("url_edit"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush7(QColor(211, 215, 207, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush8(QColor(233, 235, 231, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush8);
        QBrush brush9(QColor(105, 107, 103, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush9);
        QBrush brush10(QColor(141, 143, 138, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        url_edit->setPalette(palette1);
        splitter->addWidget(url_edit);
        request_button = new QPushButton(splitter);
        request_button->setObjectName(QString::fromUtf8("request_button"));
        QPalette palette2;
        QBrush brush11(QColor(114, 159, 207, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        request_button->setPalette(palette2);
        splitter->addWidget(request_button);
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(30, 340, 411, 291));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalSlider = new QSlider(frame_2);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(20, 170, 371, 171));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        horizontalSlider->setPalette(palette3);
        horizontalSlider->setCursor(QCursor(Qt::ArrowCursor));
        horizontalSlider->setAutoFillBackground(false);
        horizontalSlider->setOrientation(Qt::Horizontal);
        manuell_button = new QRadioButton(frame_2);
        manuell_button->setObjectName(QString::fromUtf8("manuell_button"));
        manuell_button->setGeometry(QRect(30, 100, 112, 23));
        auto_button = new QRadioButton(frame_2);
        auto_button->setObjectName(QString::fromUtf8("auto_button"));
        auto_button->setGeometry(QRect(30, 70, 112, 23));
        sonne_label_2 = new QLabel(frame_2);
        sonne_label_2->setObjectName(QString::fromUtf8("sonne_label_2"));
        sonne_label_2->setGeometry(QRect(100, 20, 221, 39));
        request_button_3 = new QPushButton(frame_2);
        request_button_3->setObjectName(QString::fromUtf8("request_button_3"));
        request_button_3->setGeometry(QRect(20, 160, 126, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        request_button_3->setPalette(palette4);
        request_button_4 = new QPushButton(frame_2);
        request_button_4->setObjectName(QString::fromUtf8("request_button_4"));
        request_button_4->setGeometry(QRect(260, 160, 126, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        request_button_4->setPalette(palette5);
        RemoteCurtain->setCentralWidget(centralWidget);

        retranslateUi(RemoteCurtain);

        QMetaObject::connectSlotsByName(RemoteCurtain);
    } // setupUi

    void retranslateUi(QMainWindow *RemoteCurtain)
    {
        RemoteCurtain->setWindowTitle(QApplication::translate("RemoteCurtain", "RemoteCurtain", nullptr));
        temp_label->setText(QApplication::translate("RemoteCurtain", "Temperatur:", nullptr));
        temp_display->setText(QApplication::translate("RemoteCurtain", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        feucht_label->setText(QApplication::translate("RemoteCurtain", "Feuchtigkeit:", nullptr));
        feucht_display->setText(QApplication::translate("RemoteCurtain", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        sonne_label->setText(QApplication::translate("RemoteCurtain", "Sonne:", nullptr));
        sonne_display->setText(QApplication::translate("RemoteCurtain", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        oeffnung_label->setText(QApplication::translate("RemoteCurtain", "\303\226ffnung:", nullptr));
        oeffnung_display->setText(QApplication::translate("RemoteCurtain", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        host_label->setText(QApplication::translate("RemoteCurtain", "Host", nullptr));
        request_button->setText(QApplication::translate("RemoteCurtain", "Request", nullptr));
        manuell_button->setText(QApplication::translate("RemoteCurtain", "Manuell", nullptr));
        auto_button->setText(QApplication::translate("RemoteCurtain", "Auto", nullptr));
        sonne_label_2->setText(QApplication::translate("RemoteCurtain", "<html><head/><body><p align=\"center\">Vorhangsteuerung</p></body></html>", nullptr));
        request_button_3->setText(QApplication::translate("RemoteCurtain", "Auf", nullptr));
        request_button_4->setText(QApplication::translate("RemoteCurtain", "Zu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoteCurtain: public Ui_RemoteCurtain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTECURTAIN_H
