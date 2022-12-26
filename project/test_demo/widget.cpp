#include "widget.h"
#include <QApplication>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(300, 200);

    m_btn = new QPushButton(this);
    m_menu = new QMenu(this);

    m_menu->addAction(QString("Setting"));
    m_menu->addAction(QString("Version"));
    m_menu->addAction(QString("About"));
    m_menu->addAction(QString("Exit"));

    m_btn->setText("Menu");
    m_btn->setMenu(m_menu);
}

Widget::~Widget()
{
    delete m_btn;
}

void Widget::onBtnClicked()
{
}
