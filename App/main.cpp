#include "widget.h"
#include <calculatorlogic.h>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    CalculatorLogic cl;

    Widget w;
    w.show();
    return a.exec();
}
