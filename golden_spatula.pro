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
    hero/five/braum.cpp \
    hero/five/gwen.cpp \
    hero/five/lee_sin.cpp \
    hero/five/seraphine.cpp \
    hero/five/twisted_fate.cpp \
    hero/five/varus.cpp \
    hero/five/yone.cpp \
    hero/five/zyra.cpp \
    hero/four/akali.cpp \
    hero/four/ashe.cpp \
    hero/four/jarvan_iv.cpp \
    hero/four/jinx.cpp \
    hero/four/k_sante.cpp \
    hero/four/karma.cpp \
    hero/four/leona.cpp \
    hero/four/poppy.cpp \
    hero/four/ryze.cpp \
    hero/four/samira.cpp \
    hero/four/sett.cpp \
    hero/four/volibear.cpp \
    hero/four/yuumi.cpp \
    hero/gamer/gamer.cpp \
    hero/hero_collection.cpp \
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
    hero/three/ahri.cpp \
    hero/three/caitlyn.cpp \
    hero/three/darius.cpp \
    hero/three/jayce.cpp \
    hero/three/kog_maw.cpp \
    hero/three/lulu.cpp \
    hero/three/malzahar.cpp \
    hero/three/neeko.cpp \
    hero/three/rammus.cpp \
    hero/three/senna.cpp \
    hero/three/smolder.cpp \
    hero/three/swain.cpp \
    hero/three/udyr.cpp \
    hero/three/viego.cpp \
    hero/three/yasuo.cpp \
    hero/three/ziggs.cpp \
    hero/two/dr_mundo.cpp \
    hero/two/gangplank.cpp \
    hero/two/janna.cpp \
    hero/two/jhin.cpp \
    hero/two/kai_sa.cpp \
    hero/two/katarina.cpp \
    hero/two/kobuko.cpp \
    hero/two/lux.cpp \
    hero/two/rakan.cpp \
    hero/two/shen.cpp \
    hero/two/vi.cpp \
    hero/two/xayah.cpp \
    hero/two/xin_zhao.cpp \
    main.cpp \
    golden_spatula.cpp

HEADERS += \
    element/barchartwidget.h \
    basic_attribute.h \
    golden_spatula.h \
    hero/five/braum.h \
    hero/five/gwen.h \
    hero/five/lee_sin.h \
    hero/five/seraphine.h \
    hero/five/twisted_fate.h \
    hero/five/varus.h \
    hero/five/yone.h \
    hero/five/zyra.h \
    hero/four/akali.h \
    hero/four/ashe.h \
    hero/four/jarvan_iv.h \
    hero/four/jinx.h \
    hero/four/k_sante.h \
    hero/four/karma.h \
    hero/four/leona.h \
    hero/four/poppy.h \
    hero/four/ryze.h \
    hero/four/samira.h \
    hero/four/sett.h \
    hero/four/volibear.h \
    hero/four/yuumi.h \
    hero/gamer/gamer.h \
    hero/hero.h \
    hero/hero_collection.h \
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
    hero/one/zac.h \
    hero/three/ahri.h \
    hero/three/caitlyn.h \
    hero/three/darius.h \
    hero/three/jayce.h \
    hero/three/kog_maw.h \
    hero/three/lulu.h \
    hero/three/malzahar.h \
    hero/three/neeko.h \
    hero/three/rammus.h \
    hero/three/senna.h \
    hero/three/smolder.h \
    hero/three/swain.h \
    hero/three/udyr.h \
    hero/three/viego.h \
    hero/three/yasuo.h \
    hero/three/ziggs.h \
    hero/two/dr_mundo.h \
    hero/two/gangplank.h \
    hero/two/janna.h \
    hero/two/jhin.h \
    hero/two/kai_sa.h \
    hero/two/katarina.h \
    hero/two/kobuko.h \
    hero/two/lux.h \
    hero/two/rakan.h \
    hero/two/shen.h \
    hero/two/vi.h \
    hero/two/xayah.h \
    hero/two/xin_zhao.h \
    ttt.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
