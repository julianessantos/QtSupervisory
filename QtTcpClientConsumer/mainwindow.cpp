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
  connect(ui->start,
          SIGNAL(clicked(bool)),
          this,
          SLOT(getData()));
  connect(ui->stop,
          SIGNAL(clicked(bool)),
          this,
          SLOT(timerStop()));
  connect(ui->barraTimer,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(valorInterv(int)));

  Temp = new QTimer(this);
  Temp->setInterval(interv);

  //intervalo start
  connect(Temp,
          SIGNAL(timeout()),
          this,
          SLOT(timerEvent()));

  connect(ui->start,
          SIGNAL(clicked()),
          this,
          SLOT(on_start_clicked()));
  connect(ui->update,
          SIGNAL(clicked()),
          this,
          SLOT(updateIp()));

  connect(Temp,
          SIGNAL(timeout()),
          this,
          SLOT(on_start_clicked()));
}

void MainWindow::tcpConnect(){
  socket->connectToHost(ui->endIp->text(),1234);
  if(socket->waitForConnected(3000)){
    qDebug() << "Connected";
    ui->label_2->setText("Conectado");
    ui->listaIPs->setText(ui->endIp->text());
  }
  else{
    qDebug() << "Disconnected";
    ui->label_2->setText("Desconectado");
    ui->listaIPs->setText("Endereço de Ip inválido.");
  }
}

void MainWindow::valorInterv(int inteiro){
  interv = inteiro*1000;
  Temp->setInterval(interv);
}

void MainWindow::getData(){
  Temp->start();
  QString str;
  QByteArray array;
  QStringList list;
  qint64 thetime;

  qDebug() << "to get data...";

  QHostAddress ipAddress = socket->peerAddress();
  QString ipString = ipAddress.toString();

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
        valores = list.at(1).toInt();
        qDebug() << valores << "\n";
      }
    }
  }
}

void MainWindow::copiatexto(){
  QString end_ip ="127.0.0.1";

  if(ui->endIp->text() == end_ip){
  tcpConnect();
  ui->listaIPs->setText(ui->endIp->text());
  } else{
  ui->listaIPs->setText("Endereço de Ip inválido.");
  socket->disconnectFromHost();
  ui->label_2->setText("Desconectado");
  }
}

MainWindow::~MainWindow(){
  delete socket;
  delete ui;
}

void MainWindow::timerEvent(){
  getData();
}

void MainWindow::timerStop(){
  Temp->stop();
  ui->label_4->setText("Stop");
}

void MainWindow::on_conectado_clicked(){
  QString end_ip ="127.0.0.1";
  if(ui->endIp->text() == end_ip){
    tcpConnect();
  }
  else{
    ui->listaIPs->setText("Endereço de Ip inválido.");
    socket->disconnectFromHost();
    ui->label_2->setText("Desconectado");
  }
}

void MainWindow::on_desconectado_clicked(){
  socket->disconnectFromHost();
  ui->label_2->setText("Desconectado");
}

void MainWindow::on_barraTimer_valueChanged(int value){
  ui->labelTimer->setText(QString::number(value));
}

void MainWindow::on_start_clicked(){
    getData();
    ui->widget->setValor(valores);
    ui->label_4->setText("Start");
}



