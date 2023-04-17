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
    UI/sqlmanage.cpp \
    UI/wgtserial.cpp \
    main.cpp \
    UI/about.cpp \
    UI/widget.cpp

HEADERS += \
    UI/about.h \
    UI/sqlmanage.h \
    UI/wgtserial.h \
    UI/widget.h

FORMS +=  \
    UI/about.ui \
    UI/sqlmanage.ui \
    UI/wgtserial.ui \
    UI/widget.ui


#INCLUDEPATH += $$PWD/Serial   #通过路径添加子文件内容
#include($$PWD/Serial/Serial.pri) #添加子文件夹所需pri文件



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    kenDennis.qrc
