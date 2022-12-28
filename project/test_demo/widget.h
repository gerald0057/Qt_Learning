#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
//#include <QLCDNumber>
//#include <QTimer>
//#include <QDateTime>
//#include <QToolButton>
//#include <QAbstractButton>
//#include <QPushButton>
#include <QButtonGroup>
//#include <QVBoxLayout>
#include <QHBoxLayout>
//#include <QMenu>
#include <QCheckBox>
//#include <QLabel>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void onButtonClicked(QAbstractButton *button);

private:
//    QPushButton  *m_btn;
//    QMenu *m_menu;
    QButtonGroup *m_group;
    QCheckBox *m_chkbox, *m_chkbox1, *m_chkbox2;
//    QLabel *m_label;

    QHBoxLayout *m_layout;
};
#endif // WIDGET_H
