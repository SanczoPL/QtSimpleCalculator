/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelOperations;
    QLabel *labelOutcome;
    QGridLayout *gridLayout;
    QPushButton *btnCE;
    QPushButton *btnC;
    QPushButton *btnDel;
    QPushButton *btnDivide;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btnMultiply;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btnSubtract;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btnAdd;
    QPushButton *btnLeftBracket;
    QPushButton *btnRightBracket;
    QPushButton *btn0;
    QPushButton *btnEqual;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(353, 429);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelOperations = new QLabel(Widget);
        labelOperations->setObjectName(QString::fromUtf8("labelOperations"));
        labelOperations->setFrameShape(QFrame::Box);
        labelOperations->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(labelOperations);

        labelOutcome = new QLabel(Widget);
        labelOutcome->setObjectName(QString::fromUtf8("labelOutcome"));
        labelOutcome->setFrameShape(QFrame::Box);
        labelOutcome->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(labelOutcome);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnCE = new QPushButton(Widget);
        btnCE->setObjectName(QString::fromUtf8("btnCE"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(26);
        font.setBold(false);
        font.setWeight(50);
        btnCE->setFont(font);
        btnCE->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 222, 222);"));

        gridLayout->addWidget(btnCE, 0, 0, 1, 1);

        btnC = new QPushButton(Widget);
        btnC->setObjectName(QString::fromUtf8("btnC"));
        btnC->setFont(font);
        btnC->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 222, 222);"));

        gridLayout->addWidget(btnC, 0, 1, 1, 1);

        btnDel = new QPushButton(Widget);
        btnDel->setObjectName(QString::fromUtf8("btnDel"));
        btnDel->setFont(font);
        btnDel->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 222, 222);"));

        gridLayout->addWidget(btnDel, 0, 2, 1, 1);

        btnDivide = new QPushButton(Widget);
        btnDivide->setObjectName(QString::fromUtf8("btnDivide"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setWeight(75);
        btnDivide->setFont(font1);
        btnDivide->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 222, 222);"));

        gridLayout->addWidget(btnDivide, 0, 3, 1, 1);

        btn7 = new QPushButton(Widget);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        btn7->setFont(font1);
        btn7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 251);"));

        gridLayout->addWidget(btn7, 1, 0, 1, 1);

        btn8 = new QPushButton(Widget);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        btn8->setFont(font1);
        btn8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 251);"));

        gridLayout->addWidget(btn8, 1, 1, 1, 1);

        btn9 = new QPushButton(Widget);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        btn9->setFont(font1);
        btn9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 251);"));

        gridLayout->addWidget(btn9, 1, 2, 1, 1);

        btnMultiply = new QPushButton(Widget);
        btnMultiply->setObjectName(QString::fromUtf8("btnMultiply"));
        btnMultiply->setFont(font1);
        btnMultiply->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 222, 222);"));

        gridLayout->addWidget(btnMultiply, 1, 3, 1, 1);

        btn4 = new QPushButton(Widget);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setFont(font1);
        btn4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 251);"));

        gridLayout->addWidget(btn4, 2, 0, 1, 1);

        btn5 = new QPushButton(Widget);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setFont(font1);
        btn5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 251);"));

        gridLayout->addWidget(btn5, 2, 1, 1, 1);

        btn6 = new QPushButton(Widget);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        btn6->setFont(font1);
        btn6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 251);"));

        gridLayout->addWidget(btn6, 2, 2, 1, 1);

        btnSubtract = new QPushButton(Widget);
        btnSubtract->setObjectName(QString::fromUtf8("btnSubtract"));
        btnSubtract->setFont(font1);
        btnSubtract->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 222, 222);"));

        gridLayout->addWidget(btnSubtract, 2, 3, 1, 1);

        btn1 = new QPushButton(Widget);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setFont(font1);
        btn1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 251);"));

        gridLayout->addWidget(btn1, 3, 0, 1, 1);

        btn2 = new QPushButton(Widget);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setFont(font1);
        btn2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 251);"));

        gridLayout->addWidget(btn2, 3, 1, 1, 1);

        btn3 = new QPushButton(Widget);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setFont(font1);
        btn3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 251);"));

        gridLayout->addWidget(btn3, 3, 2, 1, 1);

        btnAdd = new QPushButton(Widget);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setFont(font1);
        btnAdd->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 222, 222);"));

        gridLayout->addWidget(btnAdd, 3, 3, 1, 1);

        btnLeftBracket = new QPushButton(Widget);
        btnLeftBracket->setObjectName(QString::fromUtf8("btnLeftBracket"));
        btnLeftBracket->setFont(font1);
        btnLeftBracket->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 222, 222);"));

        gridLayout->addWidget(btnLeftBracket, 4, 0, 1, 1);

        btnRightBracket = new QPushButton(Widget);
        btnRightBracket->setObjectName(QString::fromUtf8("btnRightBracket"));
        btnRightBracket->setFont(font1);
        btnRightBracket->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 222, 222);"));

        gridLayout->addWidget(btnRightBracket, 4, 1, 1, 1);

        btn0 = new QPushButton(Widget);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        btn0->setFont(font1);
        btn0->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 251);"));

        gridLayout->addWidget(btn0, 4, 2, 1, 1);

        btnEqual = new QPushButton(Widget);
        btnEqual->setObjectName(QString::fromUtf8("btnEqual"));
        btnEqual->setFont(font1);
        btnEqual->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 222, 222);"));

        gridLayout->addWidget(btnEqual, 4, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        labelOperations->setText(QString());
        labelOutcome->setText(QString());
        btnCE->setText(QCoreApplication::translate("Widget", "CE", nullptr));
        btnC->setText(QCoreApplication::translate("Widget", "C", nullptr));
        btnDel->setText(QCoreApplication::translate("Widget", "del", nullptr));
        btnDivide->setText(QCoreApplication::translate("Widget", "/", nullptr));
        btn7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        btn8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        btn9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        btnMultiply->setText(QCoreApplication::translate("Widget", "x", nullptr));
        btn4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        btn5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        btn6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        btnSubtract->setText(QCoreApplication::translate("Widget", "-", nullptr));
        btn1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        btn2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        btn3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        btnAdd->setText(QCoreApplication::translate("Widget", "+", nullptr));
        btnLeftBracket->setText(QCoreApplication::translate("Widget", "(", nullptr));
        btnRightBracket->setText(QCoreApplication::translate("Widget", ")", nullptr));
        btn0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        btnEqual->setText(QCoreApplication::translate("Widget", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
