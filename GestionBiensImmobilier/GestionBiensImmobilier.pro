QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    administrator.cpp \
    bienimmobilier.cpp \
    fenetreadmin.cpp \
    fenetregestionnaire.cpp \
    gestaffecterbi.cpp \
    gestconsulterbi.cpp \
    gestconsulterlocataire.cpp \
    gestconsulterstat.cpp \
    gestenregistrerpaye.cpp \
    gestionnaire.cpp \
    gestlibererbi.cpp \
    gestmodifierpaye.cpp \
    gestsupprimerpaye.cpp \
    locataire.cpp \
    main.cpp \
    connexion.cpp \
    utilisateur.cpp \
    winabout.cpp \
    winadminadduser.cpp \
    winadminajoutbi.cpp \
    winadmindelete.cpp \
    winadmindesactivebi.cpp \
    winadmineditbi.cpp \
    winadminreadbi.cpp \
    winadminshowuser.cpp \
    winadminupdate.cpp

HEADERS += \
    administrator.h \
    connexion.h \
    fenetreadmin.h \
    fenetregestionnaire.h \
    gestaffecterbi.h \
    gestconsulterbi.h \
    gestconsulterlocataire.h \
    gestconsulterstat.h \
    gestenregistrerpaye.h \
    gestionnaire.h \
    gestlibererbi.h \
    gestmodifierpaye.h \
    gestsupprimerpaye.h \
    utilisateur.h \
    winabout.h \
    winadminadduser.h \
    winadminajoutbi.h \
    winadmindelete.h \
    winadmindesactivebi.h \
    winadmineditbi.h \
    winadminreadbi.h \
    winadminshowuser.h \
    winadminupdate.h

FORMS += \
    connexion.ui \
    fenetreadmin.ui \
    fenetregestionnaire.ui \
    gestaffecterbi.ui \
    gestconsulterbi.ui \
    gestconsulterlocataire.ui \
    gestconsulterstat.ui \
    gestenregistrerpaye.ui \
    gestlibererbi.ui \
    gestmodifierpaye.ui \
    gestsupprimerpaye.ui \
    winabout.ui \
    winadminadduser.ui \
    winadminajoutbi.ui \
    winadmindelete.ui \
    winadmindesactivebi.ui \
    winadmineditbi.ui \
    winadminreadbi.ui \
    winadminshowuser.ui \
    winadminupdate.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ressource.qrc
