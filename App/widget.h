#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtDebug>

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

private slots:
    /* Numeric buttons */
    void on_btn0_clicked();
    void on_btn1_clicked();
    void on_btn2_clicked();
    void on_btn3_clicked();
    void on_btn4_clicked();
    void on_btn5_clicked();
    void on_btn6_clicked();
    void on_btn7_clicked();
    void on_btn8_clicked();
    void on_btn9_clicked();

    /* Arithmetic operations */
    void on_btnLeftBracket_clicked();
    void on_btnRightBracket_clicked();
    void on_btnEqual_clicked();
    void on_btnAdd_clicked();
    void on_btnSubtract_clicked();
    void on_btnMultiply_clicked();
    void on_btnDivide_clicked();

    /* Remove, delete operations */
    void on_btnDel_clicked();
    void on_btnC_clicked();
    void on_btnCE_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
