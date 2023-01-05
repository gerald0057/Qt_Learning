#include "traymenu.h"
#include <QApplication>

TrayMenu::TrayMenu(QWidget *parent)
    : QMenu(parent)
{
    m_pShowAction = new QAction(QIcon(":/icon/open"), QString::fromLocal8Bit("display"), this);
    m_pSettingAction = new QAction(QIcon(":/icon/setting"), QString::fromLocal8Bit("setting"), this);
    m_pHomePageAction = new QAction(QIcon(":/icon/home"), QString::fromLocal8Bit("login"), this);
    m_pHelpAction= new QAction(QIcon(":/icon/help"), QString::fromLocal8Bit("help"), this);
    m_pAboutAction = new QAction(QIcon(":/icon/about"), QString::fromLocal8Bit("about"), this);
    m_pUpgradeAction = new QAction(QIcon(":/icon/upgrade"), QString::fromLocal8Bit("update"), this);
    m_pQuitAction = new QAction(QIcon(":/icon/quit"), QString::fromLocal8Bit("quit"), this);

    addAction(m_pShowAction);
    addAction(m_pSettingAction);
    addAction(m_pHomePageAction);
    addSeparator();
    addAction(m_pHelpAction);
    addAction(m_pAboutAction);
    addAction(m_pUpgradeAction);
    addSeparator();
    addAction(m_pQuitAction);

    connect(m_pShowAction, SIGNAL(triggered(bool)), this, SIGNAL(showWindow()));
    connect(m_pQuitAction, SIGNAL(triggered(bool)), QApplication::instance(), SLOT(quit()));
}
