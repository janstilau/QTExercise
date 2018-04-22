QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-OuputLib-unknown-Debug/release/ -lOuputLib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-OuputLib-unknown-Debug/debug/ -lOuputLib
else:unix: LIBS += -L$$PWD/../build-OuputLib-unknown-Debug/ -lOuputLib

INCLUDEPATH += $$PWD/../build-OuputLib-unknown-Debug
DEPENDPATH += $$PWD/../build-OuputLib-unknown-Debug

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../build-OuputLib-unknown-Debug/release/libOuputLib.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../build-OuputLib-unknown-Debug/debug/libOuputLib.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../build-OuputLib-unknown-Debug/release/OuputLib.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../build-OuputLib-unknown-Debug/debug/OuputLib.lib
else:unix: PRE_TARGETDEPS += $$PWD/../build-OuputLib-unknown-Debug/libOuputLib.a
