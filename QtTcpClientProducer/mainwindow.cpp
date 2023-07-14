#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTimerEvent>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow){
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  tcpConnect();

  connect(ui->start,
          SIGNAL(clicked(bool)),
          this,
          SLOT(IniciarTemp())
          );
  connect(ui->connect,
          SIGNAL(clicked()),
          this,
          SLOT(on_connect_clicked())
          );
  connect(ui->disconnect,
          SIGNAL(clicked()),
          this,
          SLOT(on_disconnect_clicked())
          );
  connect(ui->stop,
          SIGNAL(clicked()),
          this,
          SLOT(ParaTimer())
        );
}

void MainWindow::tcpConnect(){
  socket->connectToHost(ui->endIp->text(),1234);
  if(socket->waitForConnected(3000)){
      qDebug() << "Connected";
      ui->onoff->setText("Conectado");
  }
  else{
    qDebug() << "Disconnected";
      ui->onoff->setText("Desconectado");
  }
}

void MainWindow::putData(){
  QDateTime datetime;
  QString str;
  qint64 msecdate;

  int valor_min = ui->min->value();
  int valor_max = ui->max->value();

  if(socket->state()== QAbstractSocket::ConnectedState){

    msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
    str = "set "+ QString::number(msecdate) + " " +
          QString::number(valor_min + rand()% (valor_max - valor_min))+"\r\n";

      qDebug() << str;
      qDebug() << socket->write(str.toStdString().c_str())
               << " bytes written";
      if(socket->waitForBytesWritten(3000)){
        qDebug() << "wrote";
      }
      ui->tabela->append(str);
  }
}

void MainWindow::timerEvent(QTimerEvent *event){
  putData();
}

void MainWindow::IniciarTemp(){
  int temp_seg = 1000*ui->barraTimer->value();
  temporizador = startTimer(temp_seg);
}

void MainWindow::ParaTemp(){
  killTimer(temporizador);
}

void MainWindow::on_connect_clicked()
{
    tcpConnect();
    ui->onoff->setText("Conectado");
}


void MainWindow::on_disconnect_clicked()
{
    socket->disconnectFromHost();
    ui->onoff->setText("Desconectado");
}


void MainWindow::on_barraMin_valueChanged(int value)
{
    ui->min->display(value);
}


void MainWindow::on_barraMax_valueChanged(int value)
{
    ui->max->display(value);
}

void MainWindow::on_barraTimer_valueChanged(int value)
{
    ui->contTimer->setText(QString::number(value));
}

MainWindow::~MainWindow(){
    delete socket;
    delete ui;
}
