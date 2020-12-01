QT += testlib
QT -= gui

TARGET = McdMcmTest
TEMPLATE = app

CONFIG += c++11
CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

include(../qmake-target-platform.pri)
include(../qmake-destination-path.pri)

INCLUDEPATH += source \
    ../McdMcmCore/source

SOURCES +=  source/testsuite.cpp \
    source/main.cpp \
    source/entities/mcdmcmtest.cpp

HEADERS += \
    source/testsuite.h \
    source/entities/mcdmcmtest.h

LIBS += -L$$PWD/../binaries/$$DESTINATION_PATH -lMcdMcmCore

DESTDIR = $$PWD/../binaries/$$DESTINATION_PATH
OBJECTS_DIR = $$PWD/build/$$DESTINATION_PATH/.obj
MOC_DIR = $$PWD/build/$$DESTINATION_PATH/.moc
RCC_DIR = $$PWD/build/$$DESTINATION_PATH/.qrc
UI_DIR = $$PWD/build/$$DESTINATION_PATH/.ui
