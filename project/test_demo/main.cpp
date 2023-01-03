#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    Widget w;
//    w.show();

    customSpinBox box;
    box.setRange(2, 10);
    box.setSingleStep(2);
    box.setValue(4);
    box.setWrapping(true);
    box.show();

    return a.exec();
}
