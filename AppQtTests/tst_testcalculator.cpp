#include <QtTest>
#include <QCoreApplication>
#include <widget.h>
#include <calculatorlogic.h>

class TestCalculator : public QObject
{
    Q_OBJECT

public:
    TestCalculator();
    ~TestCalculator();

private slots:
    /* Just for the sake of testing testing */
    void test_case_multiply();

};

QTEST_MAIN(TestCalculator)

TestCalculator::TestCalculator()
{

}

TestCalculator::~TestCalculator()
{

}

/* Just for the sake of testing testing */
void TestCalculator::test_case_multiply()
{
    Widget w;
    QCOMPARE(w.multiply(2,3),6);
}



#include "tst_testcalculator.moc"
