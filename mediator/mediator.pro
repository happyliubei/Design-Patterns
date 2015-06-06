TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    mediator.cpp \
    widget.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    mediator.h \
    widget.h

