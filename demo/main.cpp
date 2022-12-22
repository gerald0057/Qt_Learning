//#include "widget.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

#include <QPushButton>
#include <QFont>
#include <QIcon>

#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "demo_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
//    Widget w;
//    w.show();

    QPushButton button("Hello World!");
    button.setToolTip("this is the first button");

    QFont font("Courier");
    button.setFont(font);

    QIcon icon("icon.png");
    button.setIcon(icon);

    QPushButton button1("child button", &button);

    button.show();

    return a.exec();
}
