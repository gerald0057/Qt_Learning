#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTableWidget>
#include <QHeaderView>
#include <QVBoxLayout>
#include <QComboBox>
#include <QMenu>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);

protected:

private slots:
    void onMenuPop(QPoint pos);

private:
    QMenu *m_menu;
    QTableWidget *tab;
};

#endif
