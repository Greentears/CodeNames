TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    model/card.cpp \
    model/player.cpp \
    model/team.cpp \
    model/game.cpp

HEADERS += \
    model/color.h \
    model/card.h \
    model/word.h \
    model/player.h \
    model/team.h \
    model/role.h \
    model/game.h
