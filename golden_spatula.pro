QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

QMAKE_CXXFLAGS += -Wa,-mbig-obj

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    element/barchartwidget.cpp \
    basic_attribute.cpp \
    hero/gamer/gamer.cpp \
    hero/one/aatrox.cpp \
    hero/one/ezreal.cpp \
    hero/one/garen.cpp \
    hero/one/gnar.cpp \
    hero/one/kalista.cpp \
    hero/one/kayle.cpp \
    hero/one/kennen.cpp \
    hero/one/lucian.cpp \
    hero/one/malphite.cpp \
    hero/one/naafiri.cpp \
    hero/one/rell.cpp \
    hero/one/sivir.cpp \
    hero/one/syndra.cpp \
    hero/one/zac.cpp \
    main.cpp \
    golden_spatula.cpp

HEADERS += \
    element/barchartwidget.h \
    basic_attribute.h \
    golden_spatula.h \
    hero/gamer/gamer.h \
    hero/hero.h \
    hero/one/aatrox.h \
    hero/one/ezreal.h \
    hero/one/garen.h \
    hero/one/gnar.h \
    hero/one/kalista.h \
    hero/one/kayle.h \
    hero/one/kennen.h \
    hero/one/lucian.h \
    hero/one/malphite.h \
    hero/one/naafiri.h \
    hero/one/rell.h \
    hero/one/sivir.h \
    hero/one/syndra.h \
    hero/one/zac.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
