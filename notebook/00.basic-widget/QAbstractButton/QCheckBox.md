- [Qt Widget-Basic-QCheckBox](#qt-widget-basic-qcheckbox)
  - [Basic](#basic)

# Qt Widget-Basic-QCheckBox

## Basic

构造一个基础的复选框，和一个三态复选框

![](.assert/check_button.png)

> widget.cpp

```cpp
#include "widget.h"
#include <QApplication>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(300, 200);

    m_layout = new QVBoxLayout;
    m_chkbox = new QCheckBox;
    m_chkbox1 = new QCheckBox;

    m_chkbox->setText("check box");

    m_chkbox1->setTristate(true);
    m_chkbox1->setText("tristate");

    m_layout->addWidget(m_chkbox);
    m_layout->addWidget(m_chkbox1);
    setLayout(m_layout);
}

Widget::~Widget()
{
    delete m_chkbox;
    delete m_chkbox1;
    delete m_layout;
}
```

> widget.h

```cpp
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QCheckBox>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    QCheckBox *m_chkbox, *m_chkbox1, *m_chkbox2;
    QVBoxLayout *m_layout;
};
#endif // WIDGET_H
```
