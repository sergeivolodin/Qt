TEMPLATE = app

TARGET = tst_qmousedevice

QT += 3dcore 3dcore-private 3dinput 3dinput-private testlib

CONFIG += testcase

SOURCES += tst_qmousedevice.cpp

include(../commons/commons.pri)
