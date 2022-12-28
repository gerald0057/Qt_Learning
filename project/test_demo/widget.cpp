#include "widget.h"
#include <QApplication>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(300, 200);

    m_layout = new QHBoxLayout();
    m_group = new QButtonGroup(this);

    m_group->setExclusive(false);
    m_chkbox = new QCheckBox("Btn0");
    m_chkbox1 = new QCheckBox("Btn1");
    m_chkbox2 = new QCheckBox("Btn2");


//    m_chkbox->setText("tristate check box");
//    m_chkbox->setTristate(true);

//    m_label->setText("Unchecked");

//    m_chkbox1->setTristate(true);
//    m_chkbox1->setText("tristate");

//    m_btn = new QPushButton(this);
//    m_menu = new QMenu(this);

//    m_menu->addAction(QString("Setting"));
//    m_menu->addAction(QString("Version"));
//    m_menu->addAction(QString("About"));
//    m_menu->addAction(QString("Exit"));

//    m_btn->setText("Menu");
//    m_btn->setMenu(m_menu);

    m_group->addButton(m_chkbox);
    m_group->addButton(m_chkbox1);
    m_group->addButton(m_chkbox2);

    m_layout->addWidget(m_chkbox);
    m_layout->addWidget(m_chkbox1);
    m_layout->addWidget(m_chkbox2);
//    m_layout->addWidget(m_label);

    m_layout->setContentsMargins(10, 10, 10, 10);
    m_layout->setSpacing(10);

    setLayout(m_layout);

    connect(m_group, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(onButtonClicked(QAbstractButton*)));
}

Widget::~Widget()
{
//    delete m_btn;
    delete m_chkbox;
    delete m_layout;
}

void Widget::onButtonClicked(QAbstractButton *button)
{
    qDebug() << QString("Clicked Button : %1").arg(button->text());

    QList<QAbstractButton*> list = m_group->buttons();
    foreach (QAbstractButton *btn, list)
    {
        QString strStatus = btn->isChecked() ? "Checked" : "Unchecked";
        qDebug() << QString("Button : %1 is %2").arg(btn->text()).arg(strStatus);
    }
}
