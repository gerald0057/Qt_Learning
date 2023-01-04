#include "widget.h"
#include "traymenu.h"
#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include <QCloseEvent>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(300, 200);
    QSystemTrayIcon *pSystemTray = new QSystemTrayIcon(this);
    TrayMenu *pTrayMenu = new TrayMenu(this);

    pSystemTray->setContextMenu(pTrayMenu);

    pSystemTray->setToolTip(QString::fromLocal8Bit("im a systray icon"));
    pSystemTray->setIcon(QIcon("icon.png"));

    connect(pTrayMenu, SIGNAL(showWindow()), this, SLOT(showWindow()));
    connect(pSystemTray , SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(onActivated(QSystemTrayIcon::ActivationReason)));

    pSystemTray->show();
    pSystemTray->showMessage(QString::fromLocal8Bit("title"), QString::fromLocal8Bit("this is a message"));
}

void Widget::closeEvent(QCloseEvent *event)
{
    QMessageBox::information(this, tr("Systray"),
                             tr("The program will keep running in the "
                                "system tray. To terminate the program, "
                                "choose <b>Quit</b> in the context menu "
                                "of the system tray entry."));
    hide();
    event->ignore();
}

void Widget::showWindow()
{
    showNormal();
    raise();
    activateWindow();
}

void Widget::onActivated(QSystemTrayIcon::ActivationReason reason)
{
    switch(reason)
    {
        case QSystemTrayIcon::Trigger:
        {
            showWindow();
            break;
        }
        // 双击
        case QSystemTrayIcon::DoubleClick:
        {
            qDebug() << "DoubleClick";
            break;
        }
        default:
            break;
    }
}
