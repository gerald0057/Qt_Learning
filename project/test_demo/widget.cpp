#include "widget.h"
#include <QApplication>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(300, 200);

    m_layout = new QVBoxLayout(this);

    m_edit0 = new QLineEdit(this);
    m_edit0->setInputMask("000.000.000.000;_");
    m_edit1 = new QLineEdit(this);
    m_edit1->setInputMask("HH:HH:HH:HH:HH:HH;_");
    m_edit2 = new QLineEdit(this);
    m_edit2->setInputMask("0000-00-00");
    m_edit3 = new QLineEdit(this);
    m_edit3->setInputMask(">AAAAA-AAAAA-AAAAA-AAAAA-AAAAA;#");

    m_layout->addWidget(m_edit0);
    m_layout->addWidget(m_edit1);
    m_layout->addWidget(m_edit2);
    m_layout->addWidget(m_edit3);

    setLayout(m_layout);
}

Widget::~Widget()
{
}
