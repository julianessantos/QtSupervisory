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
#include <QtWidgets/QGridLayout>
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
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *endIp;
    QTextBrowser *tabela;
    QPushButton *connect;
    QPushButton *disconnect;
    QLabel *label;
    QSlider *barraMin;
    QLCDNumber *min;
    QLabel *label_2;
    QSlider *barraMax;
    QLCDNumber *max;
    QLabel *label_3;
    QSlider *barraTimer;
    QLabel *contTimer;
    QPushButton *start;
    QPushButton *stop;
    QLabel *onoff;
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
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 521, 271));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        endIp = new QLineEdit(widget);
        endIp->setObjectName(QString::fromUtf8("endIp"));

        gridLayout->addWidget(endIp, 0, 0, 1, 5);

        tabela = new QTextBrowser(widget);
        tabela->setObjectName(QString::fromUtf8("tabela"));

        gridLayout->addWidget(tabela, 0, 5, 8, 1);

        connect = new QPushButton(widget);
        connect->setObjectName(QString::fromUtf8("connect"));

        gridLayout->addWidget(connect, 1, 0, 1, 2);

        disconnect = new QPushButton(widget);
        disconnect->setObjectName(QString::fromUtf8("disconnect"));

        gridLayout->addWidget(disconnect, 1, 2, 1, 3);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 3, 1, 1);

        barraMin = new QSlider(widget);
        barraMin->setObjectName(QString::fromUtf8("barraMin"));
        barraMin->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(barraMin, 3, 0, 1, 3);

        min = new QLCDNumber(widget);
        min->setObjectName(QString::fromUtf8("min"));

        gridLayout->addWidget(min, 3, 3, 1, 2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 3, 1, 1);

        barraMax = new QSlider(widget);
        barraMax->setObjectName(QString::fromUtf8("barraMax"));
        barraMax->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(barraMax, 5, 0, 1, 3);

        max = new QLCDNumber(widget);
        max->setObjectName(QString::fromUtf8("max"));

        gridLayout->addWidget(max, 5, 3, 1, 2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        barraTimer = new QSlider(widget);
        barraTimer->setObjectName(QString::fromUtf8("barraTimer"));
        barraTimer->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(barraTimer, 6, 1, 1, 3);

        contTimer = new QLabel(widget);
        contTimer->setObjectName(QString::fromUtf8("contTimer"));

        gridLayout->addWidget(contTimer, 6, 4, 1, 1);

        start = new QPushButton(widget);
        start->setObjectName(QString::fromUtf8("start"));

        gridLayout->addWidget(start, 7, 0, 1, 2);

        stop = new QPushButton(widget);
        stop->setObjectName(QString::fromUtf8("stop"));

        gridLayout->addWidget(stop, 7, 2, 1, 3);

        onoff = new QLabel(widget);
        onoff->setObjectName(QString::fromUtf8("onoff"));

        gridLayout->addWidget(onoff, 8, 0, 1, 2);

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
        start->setText(QCoreApplication::translate("MainWindow", "start", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "stop", nullptr));
        onoff->setText(QCoreApplication::translate("MainWindow", "Aguardando...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
