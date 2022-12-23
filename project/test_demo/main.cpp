#include "widget.h"

#include <QApplication>
#include <QProgressBar>
#include <QSlider>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Widget w;
//    w.setFixedSize(320, 80);

//    QProgressBar progressbar(&w);
//    progressbar.setRange(0, 100);
//    progressbar.setValue(0);
//    progressbar.setGeometry(10, 10, 300, 30);

//    QSlider slider(&w);
//    slider.setOrientation(Qt::Horizontal);
//    slider.setRange(0, 100);
//    slider.setValue(0);
//    slider.setGeometry(10, 40, 300, 30);

//    QObject::connect(&slider, SIGNAL(valueChanged(int)), &progressbar, SLOT(setValue(int)));

    w.show();

    return a.exec();
}
