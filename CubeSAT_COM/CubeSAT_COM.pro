QT       += core gui \
    quick
QT       += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
#    ../../USRP_Software_defined_radar/waveform.cpp \
    COMSettings.cpp \
#    console.cpp \
    main.cpp \
    mainwindow.cpp \
 \#    uhd.cpp
    waveform.cpp

HEADERS += \
#    ../../USRP_Software_defined_radar/waveform.h \
    COMSettings.h \
#    console.h \
    mainwindow.h \
 \#    uhd.h
    waveform.h

FORMS += \
    COMSettings.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    qrc_images.qrc


LIBS += -L/usr/local/lib -luhd -lboost_filesystem -lboost_system -lboost_thread -lboost_chrono -lgomp

INCLUDEPATH = /usr/local/include

DEFINES += QWT_DLL

CONFIG += qwt

QMAKE_CXXFLAGS += -std=c++11 -fopenmp -Wno-sign-compare
