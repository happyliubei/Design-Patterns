TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Stooge.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Stooge.h

