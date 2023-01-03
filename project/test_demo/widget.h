#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QRegExp>>
//#include <QVBoxLayout>
//#include <QHBoxLayout>
//#include <QSize>
//#include <QIcon>
//#include <QMargins>
//#include <QAction>
//#include <QLabel>
//#include <QLineEdit>
//#include <QPushButton>

#include <QSpinBox>

//class Widget : public QWidget
//{
//    Q_OBJECT

//public:
//    Widget(QWidget *parent = nullptr);
//    ~Widget();

//private slots:
////    void onSearch(bool);
////    void onSearch();

//private:
////    QLineEdit *m_edit;
////    QLabel *m_label;
////    QVBoxLayout *m_layout;
////    QAction *m_action;
////    QPushButton *m_btn;
//};


class customSpinBox : public QSpinBox
{
    Q_OBJECT

public:
    customSpinBox(QWidget *parent = nullptr);

protected:
    virtual int valueFromText(const QString &text) const Q_DECL_OVERRIDE
    {
        QRegExp regExp(tr("(\\d+)(\\s*[xx]\\s*\\d+)?"));

        if (regExp.exactMatch(text))
        {
            return regExp.cap(1).toInt();
        }
        else
        {
            return 0;
        }
    }

    virtual QString textFromValue(int value) const Q_DECL_OVERRIDE
    {
        return tr("%1 x %1").arg(value);
    }
};

#endif // WIDGET_H
