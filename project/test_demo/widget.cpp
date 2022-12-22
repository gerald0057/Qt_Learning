#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(800, 600);

    m_btn = new QPushButton("button of widget", this);
    m_btn->setGeometry(10, 10, 200, 30);
}

Widget::~Widget()
{
    delete m_btn;
}

