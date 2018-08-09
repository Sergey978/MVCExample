TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    model.cpp \
    view.cpp \
    controller.cpp

HEADERS += \
    model.h \
    view.h \
    controller.h \
    iobservable.h \
    iobserverh.h

