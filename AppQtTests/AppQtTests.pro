QT += testlib
QT += gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += qt warn_on depend_includepath testcase

TEMPLATE = app

SOURCES +=  tst_testcalculator.cpp

INCLUDEPATH += ../App/
include(../App/App.pri)
