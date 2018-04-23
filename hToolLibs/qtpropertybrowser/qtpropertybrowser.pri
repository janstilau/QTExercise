greaterThan(QT_MAJOR_VERSION, 4): QT *= widgets
SRCPATH = $$PWD/src
INCLUDEPATH += $$SRCPATH
DEPENDPATH += $$SRCPATH

HEADERS +=
SOURCES +=

win32 {
    contains(TEMPLATE, lib):contains(CONFIG, shared):DEFINES += QT_QTPROPERTYBROWSER_EXPORT
    else:qtpropertybrowser-uselib:DEFINES += QT_QTPROPERTYBROWSER_IMPORT
}            


