#include "widget.h"
#include <QApplication>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    tab = new QTableWidget(3, 4, this);

    tab->setColumnCount(3);
    tab->setRowCount(5);

    tab->setFocusPolicy(Qt::NoFocus);

    tab->setSelectionMode(QAbstractItemView::ExtendedSelection);
    tab->setAlternatingRowColors(true);

    tab->setEditTriggers(QAbstractItemView::NoEditTriggers);

//    tab->horizontalHeader()->setVisible(false);
//    tab->verticalHeader()->setVisible(false);


    for (int i = 0; i < tab->rowCount(); ++i)
    {
        QComboBox *box = new QComboBox(this);
        box->addItem("Grade1");
        box->addItem("Grade2");
        box->addItem("Grade3");
        tab->setCellWidget(i, 2, box);
    }

    tab->setSelectionBehavior(QAbstractItemView::SelectRows);
//    tab->setSelectionBehavior(QAbstractItemView::SelectColumns);
//    tab->setSelectionBehavior(QAbstractItemView::SelectItems);

    QStringList header{"Name", "Score", "Grade"};
    tab->setHorizontalHeaderLabels(header);

//    tab->setColumnWidth(1, 50);

    tab->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    tab->setContextMenuPolicy(Qt::CustomContextMenu);

    m_menu = new QMenu(this);
    m_menu->addAction(new QAction("add", m_menu));
    m_menu->addAction(new QAction("del", m_menu));

    connect(tab, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(onMenuPop(QPoint)));

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(tab);
}

void Widget::onMenuPop(QPoint pos)
{
    QPoint p;
    p.setX(pos.x());
    p.setY(pos.y() + m_menu->height() / 2);
    m_menu->exec(tab->mapToGlobal(p));
}

