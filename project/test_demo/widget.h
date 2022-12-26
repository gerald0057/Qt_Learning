#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
//#include <QLCDNumber>
//#include <QTimer>
//#include <QDateTime>
//#include <QToolButton>
//#include <QAbstractButton>
#include <QPushButton>
//#include <QButtonGroup>
//#include <QVBoxLayout>
#include <QMenu>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void onBtnClicked();

private:
    QPushButton  *m_btn;
    QMenu *m_menu;
};
#endif // WIDGET_H
