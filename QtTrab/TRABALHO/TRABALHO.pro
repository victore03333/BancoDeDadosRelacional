QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    Aplicacao.cpp \
    Relacao.cpp \
    Militar.cpp \
    Coronel.cpp \
    Tenente.cpp \
    Soldado.cpp \
    Brigada.cpp \
    Batalhao.cpp \
    Armamento.cpp \
    Missao.cpp \
    operacoes.cpp \
    winbusca.cpp \
    wininsercaoarmamento.cpp \
    wininsercaobatalhao.cpp \
    wininsercaobrigada.cpp \
    wininsercaocoronel.cpp \
    wininsercaomissao.cpp \
    wininsercaosoldado.cpp \
    wininsercaotenente.cpp \
    winmodificacao.cpp \
    winremocaotupla.cpp

HEADERS += \
    mainwindow.h \
    Aplicacao.h \
    Relacao.h \
    Militar.h \
    Coronel.h \
    Tenente.h \
    Soldado.h \
    Brigada.h \
    Batalhao.h \
    Armamento.h \
    Missao.h \
    operacoes.h \
    winbusca.h \
    wininsercaoarmamento.h \
    wininsercaobatalhao.h \
    wininsercaobrigada.h \
    wininsercaocoronel.h \
    wininsercaomissao.h \
    wininsercaosoldado.h \
    wininsercaotenente.h \
    winmodificacao.h \
    winremocaotupla.h

FORMS += \
    mainwindow.ui \
    operacoes.ui \
    winbusca.ui \
    wininsercaoarmamento.ui \
    wininsercaobatalhao.ui \
    wininsercaobrigada.ui \
    wininsercaocoronel.ui \
    wininsercaomissao.ui \
    wininsercaosoldado.ui \
    wininsercaotenente.ui \
    winmodificacao.ui \
    winremocaotupla.ui

TRANSLATIONS += \
    TRABALHO_pt_BR.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
