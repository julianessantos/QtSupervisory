#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTextStream>
#include <QTimerEvent>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  socket = new QTcpSocket(this);

  connect(ui->conectado,
          SIGNAL(clicked(bool)),
          this,
          SLOT(on_conectado_clicked()));
  connect(ui->desconectado,
          SIGNAL(clicked(bool)),
          this,
          SLOT(on_desconectado_clicked()));
}


void MainWindow::tcpConnect(){
  socket->connectToHost(ui->textEdit->toPlainText(),1234);
  if(socket->waitForConnected(3000)){
    qDebug() << "Connected";
    ui->label_2->setText("Conectado");
    ui->textBrowser->setText(ui->textEdit->toPlainText());
  }
  else{
    qDebug() << "Disconnected";
    ui->label_2->setText("Desconectado");
    ui->textBrowser->setText("Endereço de Ip inválido.");
  }
}

void MainWindow::getData(){
  QString str;
  QByteArray array;
  QStringList list;
  qint64 thetime;
  qDebug() << "to get data...";
  if(socket->state() == QAbstractSocket::ConnectedState){
    if(socket->isOpen()){
      qDebug() << "reading...";
      socket->write("get 127.0.0.1 5\r\n");
      socket->waitForBytesWritten();
      socket->waitForReadyRead();
      qDebug() << socket->bytesAvailable();
      while(socket->bytesAvailable()){
        str = socket->readLine().replace("\n","").replace("\r","");
        list = str.split(" ");
        if(list.size() == 2){
          bool ok;
          str = list.at(0);
          thetime = str.toLongLong(&ok);
          str = list.at(1);
          qDebug() << thetime << ": " << str;
        }
      }
    }
  }
}

void MainWindow::copiatexto()
{
  QString end_ip ="127.0.0.1";

  if(ui->textEdit->toPlainText() == end_ip){
  tcpConnect();
  ui->textBrowser->setText(ui->textEdit->toPlainText());
  } else{
  ui->textBrowser->setText("Endereço de Ip inválido.");
  socket->disconnectFromHost();
  ui->label_2->setText("Desconectado");
  }
}


MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
}

void MainWindow::on_conectado_clicked()
{
  QString end_ip ="127.0.0.1";
  if(ui->textEdit->toPlainText() == end_ip){
  tcpConnect();
  }
  else{
  ui->textBrowser->setText("Endereço de Ip inválido.");
  socket->disconnectFromHost();
  ui->label_2->setText("Desconectado");
  }
}

void MainWindow::on_desconectado_clicked(){
  socket->disconnectFromHost();
  ui->label_2->setText("Desconectado");
}

void MainWindow::on_barraTempo_valueChanged(int value)
{
  ui->labelTemp->setText(QString::number(value));
}

