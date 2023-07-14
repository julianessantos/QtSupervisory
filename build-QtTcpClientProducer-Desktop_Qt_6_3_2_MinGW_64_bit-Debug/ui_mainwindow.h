/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *endIp;
    QPushButton *connect;
    QPushButton *disconnect;
    QSlider *barraMin;
    QLCDNumber *min;
    QLabel *label;
    QSlider *barraMax;
    QLCDNumber *max;
    QLabel *label_2;
    QLabel *label_3;
    QSlider *barraTimer;
    QLabel *contTimer;
    QLabel *onoff;
    QPushButton *start;
    QPushButton *stop;
    QTextBrowser *tabela;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(537, 344);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        endIp = new QLineEdit(centralWidget);
        endIp->setObjectName(QString::fromUtf8("endIp"));
        endIp->setGeometry(QRect(10, 10, 251, 21));
        connect = new QPushButton(centralWidget);
        connect->setObjectName(QString::fromUtf8("connect"));
        connect->setGeometry(QRect(10, 40, 121, 24));
        disconnect = new QPushButton(centralWidget);
        disconnect->setObjectName(QString::fromUtf8("disconnect"));
        disconnect->setGeometry(QRect(149, 40, 111, 24));
        barraMin = new QSlider(centralWidget);
        barraMin->setObjectName(QString::fromUtf8("barraMin"));
        barraMin->setGeometry(QRect(10, 90, 160, 16));
        barraMin->setOrientation(Qt::Horizontal);
        min = new QLCDNumber(centralWidget);
        min->setObjectName(QString::fromUtf8("min"));
        min->setGeometry(QRect(190, 90, 64, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 70, 49, 16));
        barraMax = new QSlider(centralWidget);
        barraMax->setObjectName(QString::fromUtf8("barraMax"));
        barraMax->setGeometry(QRect(10, 140, 160, 16));
        barraMax->setOrientation(Qt::Horizontal);
        max = new QLCDNumber(centralWidget);
        max->setObjectName(QString::fromUtf8("max"));
        max->setGeometry(QRect(190, 140, 64, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 120, 49, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 190, 51, 16));
        barraTimer = new QSlider(centralWidget);
        barraTimer->setObjectName(QString::fromUtf8("barraTimer"));
        barraTimer->setGeometry(QRect(70, 190, 160, 16));
        barraTimer->setOrientation(Qt::Horizontal);
        contTimer = new QLabel(centralWidget);
        contTimer->setObjectName(QString::fromUtf8("contTimer"));
        contTimer->setGeometry(QRect(240, 190, 21, 16));
        onoff = new QLabel(centralWidget);
        onoff->setObjectName(QString::fromUtf8("onoff"));
        onoff->setGeometry(QRect(10, 260, 101, 16));
        start = new QPushButton(centralWidget);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(20, 230, 111, 24));
        stop = new QPushButton(centralWidget);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setGeometry(QRect(150, 230, 101, 24));
        tabela = new QTextBrowser(centralWidget);
        tabela->setObjectName(QString::fromUtf8("tabela"));
        tabela->setGeometry(QRect(270, 10, 256, 251));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 537, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        disconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        contTimer->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        onoff->setText(QCoreApplication::translate("MainWindow", "Aguardando...", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "start", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
