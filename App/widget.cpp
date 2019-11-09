#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_btn0_clicked()
{
    qDebug() << "0 clicked";
}

void Widget::on_btn1_clicked()
{
    qDebug() << "1 clicked";
}

void Widget::on_btn2_clicked()
{
    qDebug() << "2 clicked";
}

void Widget::on_btn3_clicked()
{
    qDebug() << "3 clicked";
}

void Widget::on_btn4_clicked()
{
    qDebug() << "4 clicked";
}

void Widget::on_btn5_clicked()
{
    qDebug() << "5 clicked";
}

void Widget::on_btn6_clicked()
{
    qDebug() << "6 clicked";
}

void Widget::on_btn7_clicked()
{
    qDebug() << "7 clicked";
}

void Widget::on_btn8_clicked()
{
    qDebug() << "8 clicked";
}

void Widget::on_btn9_clicked()
{
    qDebug() << "9 clicked";
}

void Widget::on_btnLeftBracket_clicked()
{
    qDebug() << "( clicked";
}

void Widget::on_btnRightBracket_clicked()
{
    qDebug() << ") clicked";
}

void Widget::on_btnEqual_clicked()
{
    qDebug() << "= clicked";
}

void Widget::on_btnAdd_clicked()
{
    qDebug() << "+ clicked";
}

void Widget::on_btnSubtract_clicked()
{
    qDebug() << "- clicked";
}

void Widget::on_btnMultiply_clicked()
{
    qDebug() << "* clicked";
}

void Widget::on_btnDivide_clicked()
{
    qDebug() << "/ clicked";
}

void Widget::on_btnDel_clicked()
{
    qDebug() << "del clicked";
}

void Widget::on_btnC_clicked()
{
    qDebug() << "C clicked";
}

void Widget::on_btnCE_clicked()
{
    qDebug() << "CE clicked";
}
