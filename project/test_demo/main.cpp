//#include "widget.h"
#include <QScrollArea>
#include <QLabel>
#include <QPixmap>

#include <QVBoxLayout>

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

//    w.setFixedSize(100, 100);

    QLabel pic(&w);
    pic.setPixmap(QPixmap("img.png"));

    QScrollArea area(&w);
    area.setBackgroundRole(QPalette::Dark);
    area.setWidget(&pic);
    area.setFixedSize(100, 100);

    w.show();

    return a.exec();
}
