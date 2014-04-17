#-------------------------------------------------
#
# Project created by QtCreator 2014-04-17T15:11:41
#
#-------------------------------------------------

QT       += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = randMPlayer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    playlistdisplay.cpp

HEADERS  += mainwindow.h \
    playlistdisplay.h

FORMS    += mainwindow.ui \
    playlistdisplay.ui
