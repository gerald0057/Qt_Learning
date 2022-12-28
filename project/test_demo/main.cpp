#include "widget.h"

#include <QApplication>

//#include <QToolButton>
//#include <QMenu>
//#include <QIcon>
//#include <QSize>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Widget w;
    w.show();

//    QToolButton btn;
//    QMenu menu;

//    menu.addAction(QString("Setting"));
//    menu.addAction(QString("Version"));
//    menu.addAction(QString("About"));
//    menu.addAction(QString("Exit"));

//    btn.setText("Menu");
//    btn.setMenu(&menu);
//    btn.setPopupMode(QToolButton::MenuButtonPopup);

////    btn.setArrowType(Qt::DownArrow);
////    btn.setToolButtonStyle(Qt::ToolButtonIconOnly);

//    btn.setIcon(QIcon("icon.png"));
//    btn.setIconSize(QSize(40, 40));
//    btn.setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

//    btn.show();

    return a.exec();
}
