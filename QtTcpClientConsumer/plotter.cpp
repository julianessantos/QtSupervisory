#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>


Plotter::Plotter(QWidget *parent)
    : QWidget{parent}
{

}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    int x1,y1,x2,y2;

    brush.setColor(QColor(255,255,100));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(255,0,0));
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0,width(), height());

    x1 = 0;
    y1 = height();

    x2 = 1;  // Início da reta
    y2 = 0; // Valor inicial

    // Coeficientes da reta
    double m = (double)(height() - y2) / (double)width();
    double b = y2;

    for(int i = 1; i<width(); i++){
        x2 = i; // Tempo
        y2 = m*x2 + b; // Valor gerado pela função afim

        painter.drawLine(x1, y1, x2, y2);

        x1 = x2;
        y1 = y2;
    }
}


