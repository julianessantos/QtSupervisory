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
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QPushButton *update;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *endIp;
    QPushButton *conectado;
    QPushButton *desconectado;
    QTextBrowser *listaIPs;
    QGridLayout *gridLayout_3;
    QSlider *barraTimer;
    QLabel *labelTimer;
    QPushButton *start;
    QPushButton *stop;
    Plotter *widget;
    QLabel *label_2;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(656, 472);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 11, 262, 366));
        gridLayout_5 = new QGridLayout(layoutWidget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName("gridLayout_2");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        update = new QPushButton(layoutWidget);
        update->setObjectName("update");

        gridLayout_2->addWidget(update, 2, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        endIp = new QLineEdit(layoutWidget);
        endIp->setObjectName("endIp");

        gridLayout->addWidget(endIp, 1, 0, 1, 2);

        conectado = new QPushButton(layoutWidget);
        conectado->setObjectName("conectado");

        gridLayout->addWidget(conectado, 2, 0, 1, 1);

        desconectado = new QPushButton(layoutWidget);
        desconectado->setObjectName("desconectado");

        gridLayout->addWidget(desconectado, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        listaIPs = new QTextBrowser(layoutWidget);
        listaIPs->setObjectName("listaIPs");

        gridLayout_2->addWidget(listaIPs, 1, 0, 1, 2);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName("gridLayout_3");
        barraTimer = new QSlider(layoutWidget);
        barraTimer->setObjectName("barraTimer");
        barraTimer->setMinimum(1);
        barraTimer->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(barraTimer, 0, 0, 1, 1);

        labelTimer = new QLabel(layoutWidget);
        labelTimer->setObjectName("labelTimer");

        gridLayout_3->addWidget(labelTimer, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 2);

        start = new QPushButton(layoutWidget);
        start->setObjectName("start");

        gridLayout_5->addWidget(start, 1, 0, 1, 1);

        stop = new QPushButton(layoutWidget);
        stop->setObjectName("stop");

        gridLayout_5->addWidget(stop, 1, 1, 1, 1);

        widget = new Plotter(centralWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(280, 10, 361, 371));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 390, 91, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(590, 390, 49, 16));
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 656, 21));
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
        label_3->setText(QCoreApplication::translate("MainWindow", "Timing", nullptr));
        update->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "IP do Servidor", nullptr));
        endIp->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        conectado->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        desconectado->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        labelTimer->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Aguardando...", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
