//#include "widget.h"
#include <QProgressBar>
#include <QHBoxLayout>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    Widget w;
//    w.show();

//    customSpinBox box;
//    box.setRange(2, 10);
//    box.setSingleStep(2);
//    box.setValue(4);
//    box.setWrapping(true);
//    box.show();

    QWidget w;

    QProgressBar bar(&w);
    bar.setMaximum(100);
    bar.setMinimum(0);
    bar.setValue(50);
    bar.setFormat(QString("download :%1%").arg(QString::number(bar.value() * 100 / bar.maximum(), 'f', 1)));
    bar.setStyleSheet("text-align:right");

    QHBoxLayout layout(&w);
    layout.addWidget(&bar);

//    QWidget::connect(&box, SIGNAL(valueChanged(int)), &slider, SLOT(setValue(int)));
//    QWidget::connect(&slider, SIGNAL(valueChanged(int)), &box, SLOT(setValue(int)));

    w.show();

    return a.exec();
}
