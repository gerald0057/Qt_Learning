#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QBoxLayout>
#include <QLineEdit>
#include <QIntValidator>
#include <QDoubleValidator>
#include <QRegExpValidator>
#include <QRegExp>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

private:
    QLineEdit *m_edit0, *m_edit1, *m_edit2, *m_edit3;
    QVBoxLayout *m_layout;
};
#endif // WIDGET_H
