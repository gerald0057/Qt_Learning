#include "widget.h"
#include <QApplication>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(300, 200);

    m_layout = new QVBoxLayout;

    m_chkbox = new QCheckBox;
    m_chkbox1 = new QCheckBox;
//    m_chkbox2 = new QCheckBox;

    m_chkbox->setText("check box");

    m_chkbox1->setTristate(true);
    m_chkbox1->setText("tristate");

//    m_btn = new QPushButton(this);
//    m_menu = new QMenu(this);

//    m_menu->addAction(QString("Setting"));
//    m_menu->addAction(QString("Version"));
//    m_menu->addAction(QString("About"));
//    m_menu->addAction(QString("Exit"));

//    m_btn->setText("Menu");
//    m_btn->setMenu(m_menu);

    m_layout->addWidget(m_chkbox);
    m_layout->addWidget(m_chkbox1);
//    m_layout->addWidget(m_chkbox2);
    setLayout(m_layout);
}

Widget::~Widget()
{
//    delete m_btn;
    delete m_chkbox;
    delete m_layout;
}

void Widget::onBtnClicked()
{
}
