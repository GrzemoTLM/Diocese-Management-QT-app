QT       += core gui \
    quick
QT += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialog.cpp \
    main.cpp \
    mainwindow.cpp \
    newwindow.cpp \
    tdiocese.cpp \
    tparish.cpp \
    tpriest.cpp \
    tshop.cpp


HEADERS += \
    dialog.h \
    mainwindow.h \
    newwindow.h \
    tdiocese.h \
    tparish.h \
    tpriest.h \
    tshop.h \
    :/new/prefix1/fonts/OldLondon.ttf \

FORMS += \
    dialog.ui \
    mainwindow.ui \
    newwindow.ui

TRANSLATIONS += \
    DioceseManagement_pl_PL.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    fonts.qrc \
    music.qrc \
    textfiles.qrc

DISTFILES += \
    items.csv \
    music/chants.mp3 \
    parish1 \
    parish1Items \
    pictrues/Church1.png \
    pictrues/Church2.png \
    pictrues/Church3.png \
    pictrues/Piesel.jpg \
    pictrues/back3.jpg \
    pictrues/note.png \
    pictrues/shoplogo.png
