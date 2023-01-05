//#include "widget.h"
#include <QApplication>
#include <QTableWidget>
#include <QHeaderView>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    Widget w;
//    w.show();
    QWidget w;

    QTableWidget tab(3, 4, &w);

    tab.horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    tab.setContextMenuPolicy(Qt::CustomContextMenu);

    QVBoxLayout layout(&w);
    layout.addWidget(&tab);

    w.show();


    return a.exec();
}
