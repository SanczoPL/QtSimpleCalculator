#include <QtTest>
#include <QCoreApplication>

// add necessary includes here

class TestCalculator : public QObject
{
    Q_OBJECT

public:
    TestCalculator();
    ~TestCalculator();

private slots:
    void test_case1();

};

TestCalculator::TestCalculator()
{

}

TestCalculator::~TestCalculator()
{

}

void TestCalculator::test_case1()
{

}

QTEST_MAIN(TestCalculator)

#include "tst_testcalculator.moc"
