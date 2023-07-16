#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
    Q_OBJECT
private:
    //float velocidade, update;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
signals:

public slots:
   // void update(int update);
    //void velocidade(int velocidade);

};

#endif // PLOTTER_H
