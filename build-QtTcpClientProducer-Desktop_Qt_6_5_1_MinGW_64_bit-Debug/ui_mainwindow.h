/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
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
    QWidget *layoutWidget;
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
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(543, 334);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 521, 271));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        endIp = new QLineEdit(layoutWidget);
        endIp->setObjectName("endIp");

        gridLayout->addWidget(endIp, 0, 0, 1, 5);

        tabela = new QTextBrowser(layoutWidget);
        tabela->setObjectName("tabela");

        gridLayout->addWidget(tabela, 0, 5, 8, 1);

        connect = new QPushButton(layoutWidget);
        connect->setObjectName("connect");

        gridLayout->addWidget(connect, 1, 0, 1, 2);

        disconnect = new QPushButton(layoutWidget);
        disconnect->setObjectName("disconnect");

        gridLayout->addWidget(disconnect, 1, 2, 1, 3);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 2, 3, 1, 1);

        barraMin = new QSlider(layoutWidget);
        barraMin->setObjectName("barraMin");
        barraMin->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(barraMin, 3, 0, 1, 3);

        min = new QLCDNumber(layoutWidget);
        min->setObjectName("min");
        min->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(min, 3, 3, 1, 2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 4, 3, 1, 1);

        barraMax = new QSlider(layoutWidget);
        barraMax->setObjectName("barraMax");
        barraMax->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(barraMax, 5, 0, 1, 3);

        max = new QLCDNumber(layoutWidget);
        max->setObjectName("max");
        max->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(max, 5, 3, 1, 2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        barraTimer = new QSlider(layoutWidget);
        barraTimer->setObjectName("barraTimer");
        barraTimer->setMinimum(1);
        barraTimer->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(barraTimer, 6, 1, 1, 3);

        contTimer = new QLabel(layoutWidget);
        contTimer->setObjectName("contTimer");

        gridLayout->addWidget(contTimer, 6, 4, 1, 1);

        start = new QPushButton(layoutWidget);
        start->setObjectName("start");

        gridLayout->addWidget(start, 7, 0, 1, 2);

        stop = new QPushButton(layoutWidget);
        stop->setObjectName("stop");

        gridLayout->addWidget(stop, 7, 2, 1, 3);

        onoff = new QLabel(layoutWidget);
        onoff->setObjectName("onoff");

        gridLayout->addWidget(onoff, 8, 0, 1, 2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 8, 5, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 543, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        endIp->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        disconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        contTimer->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "start", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "stop", nullptr));
        onoff->setText(QCoreApplication::translate("MainWindow", "Aguardando...", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
