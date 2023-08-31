#-------------------------------------------------
#
# Project created by QtCreator 2023-08-24T16:20:37
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Tic-Tac-Toe
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
    ClientMainWindow.cpp \
    Game.cpp \
    AI.cpp \
    GameController.cpp \
    TcpClient.cpp \
    TcpServer.cpp \
    Utils.cpp \
    Message.cpp \
    Player.cpp \
    BoardModel.cpp \
    BoardWidget.cpp \
    GamePlayWidget.cpp \
    WelcomeWidget.cpp \
    SelectSinglePlayerWidget.cpp


HEADERS  += \
    ClientMainWindow.h \
    Game.h \
    AI.h \
    GameController.h \
    TcpClient.h \
    TcpServer.h \
    Utils.h \
    data.h \
    config.h \
    Message.h \
    Player.h \
    BoardModel.h \
    BoardWidget.h \
    GamePlayWidget.h \
    WelcomeWidget.h \
    SelectSinglePlayerWidget.h


FORMS    += \
    ClientMainWindow.ui \
    BoardWidget.ui \
    GamePlayWidget.ui \
    WelcomeWidget.ui \
    SelectSinglePlayerWidget.ui


RESOURCES += \
    images.qrc
