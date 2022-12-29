#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSize>
#include <QIcon>
#include <QMargins>
#include <QAction>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void onSearch(bool);
    void onSearch();

private:
    QLineEdit *m_edit;
    QLabel *m_label;
    QVBoxLayout *m_layout;
    QAction *m_action;
    QPushButton *m_btn;
};
#endif // WIDGET_H
