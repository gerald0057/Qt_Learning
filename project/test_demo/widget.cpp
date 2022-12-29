#include "widget.h"
#include <QApplication>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(300, 200);

    m_layout = new QVBoxLayout(this);
    m_label = new QLabel("Your input: ", this);

    m_edit = new QLineEdit(this);
    m_edit->setPlaceholderText("Google serach");

    m_btn = new QPushButton(this);
    m_btn->setCursor(Qt::PointingHandCursor);
    m_btn->setFixedSize(20, 20);
    m_btn->setToolTip("Search");
    m_btn->setIcon(QIcon("search.png"));
    m_btn->setIconSize(QSize(18, 18));

    QMargins margin = m_edit->textMargins();
    m_edit->setTextMargins(margin.left(), margin.top(), m_btn->width(), margin.bottom());

    QHBoxLayout *hbox = new QHBoxLayout(m_edit);
    hbox->addStretch();
    hbox->addWidget(m_btn);
    hbox->setSpacing(0);
    hbox->setContentsMargins(0, 0, 0, 0);

    m_layout->addWidget(m_edit);
    m_layout->addWidget(m_label);

    connect(m_btn, SIGNAL(clicked(bool)), this, SLOT(onSearch(bool)));
    connect(m_edit, SIGNAL(editingFinished()), this, SLOT(onSearch()));
}

Widget::~Widget()
{
}

void Widget::onSearch(bool checked)
{
    m_label->setText(QString("Your input: %1").arg(m_edit->text()));
}

void Widget::onSearch()
{
    m_label->setText(QString("Your input: %1").arg(m_edit->text()));
}
