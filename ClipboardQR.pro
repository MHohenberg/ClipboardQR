#-------------------------------------------------
#
# Project created by QtCreator 2015-01-29T09:22:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ClipboardQR
TEMPLATE = app

LIBS += -lqrencode

SOURCES += main.cpp\
        qrclipboard.cpp \
    QRWidget.cpp

HEADERS  += qrclipboard.h \
    QRWidget.hpp

FORMS    += qrclipboard.ui
