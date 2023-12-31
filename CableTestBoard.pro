QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += serialport


CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Common/SerialPortSender/serialportsender.cpp \
    Common/Thread/examplethreads.cpp \
    Common/Utils/utils.cpp \
    Model/Cable/cable.cpp \
    Presenter/MainPresenter/mainpresenter.cpp \
    View/MainView/mainview.cpp\
    main.cpp

HEADERS += \
    Common/SerialPortSender/serialportsender.h \
    Common/Thread/examplethreads.h \
    Common/Utils/CRC.h \
    Common/Utils/utils.h \
    Model/Cable/cable.h \
    Presenter/MainPresenter/mainpresenter.h \
    View/MainView/mainview.h

FORMS += \
    View/MainView/mainview.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
