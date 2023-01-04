#ifndef TRAYMENU_H
#define TRAYMENU_H

#include <QWidget>
#include <QMenu>
#include <QAction>

class TrayMenu : public QMenu
{
    Q_OBJECT

public:
    TrayMenu(QWidget *parent = nullptr);

signals:
    void showWindow();

private:
    QAction *m_pShowAction;
    QAction *m_pSettingAction;
    QAction *m_pHomePageAction;
    QAction *m_pHelpAction;
    QAction *m_pAboutAction;
    QAction *m_pUpgradeAction;
    QAction *m_pQuitAction;
};

#endif // TRAYMENU_H
