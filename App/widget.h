#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    /* Just for the sake of testing testing */
    inline int multiply(int a, int b) const { return a * b; }

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
