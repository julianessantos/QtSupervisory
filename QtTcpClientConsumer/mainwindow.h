#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QWidget>
#include <QTimer>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  
  void tcpConnect();
public slots:
  void getData();
  void copiatexto();
  void valorInterv(int);

private slots:
    void on_desconectado_clicked();
    void on_conectado_clicked();
    void on_barraTimer_valueChanged(int value);
    void on_start_clicked();
    //void on_stop_clicked();
    void timerStop();
    void timerEvent();
    //void updateIp();

private:
  int interv;
  int valores;
  QTimer *Temp;
  Ui::MainWindow *ui;
  QTcpSocket *socket;
};

#endif // MAINWINDOW_H
