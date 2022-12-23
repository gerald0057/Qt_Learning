#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(100, 50);

    m_btn = new QPushButton("Hello", this);
    m_btn->setCheckable(true);
    m_btn->setGeometry(10, 10, 80, 30);

    connect(m_btn, SIGNAL(clicked(bool)), this, SLOT(onButtonClicked(bool)));
}

Widget::~Widget()
{
    delete m_btn;
}

void Widget::onButtonClicked(bool checked)
{
    if (checked)
    {
        m_btn->setText("Checked");
    }
    else
    {
        m_btn->setText("Hello");
    }
}

