TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        GraphLibrary\graph.cpp \
        GraphLibrary\graphvertex.cpp \
        GraphLibrary\orgraph.cpp\
        main.cpp \

HEADERS += \
    GraphLibrary\graph.h \
    GraphLibrary\graphvertex.h\
    GraphLibrary\orgraph.h
