#-------------------------------------------------
#
# Project created by QtCreator 2018-04-20T12:10:46
#
#-------------------------------------------------

QT       -= gui
macx { LIBS += -lz }

TARGET = quazip
TEMPLATE = lib
CONFIG += staticlib

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
DEFINES += QUAZIP_BUILD
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

unix:!symbian {
    headers.path=$$PREFIX/include/quazip
    headers.files=$$HEADERS
    target.path=$$PREFIX/lib/$${LIB_ARCH}
    INSTALLS += headers target

        OBJECTS_DIR=.obj
        MOC_DIR=.moc
}

SOURCES += \
        quazip.cpp \
    JlCompress.cpp \
    qioapi.cpp \
    quaadler32.cpp \
    quacrc32.cpp \
    quagzipfile.cpp \
    quaziodevice.cpp \
    quazip.cpp \
    quazipdir.cpp \
    quazipfile.cpp \
    quazipfileinfo.cpp \
    quazipnewinfo.cpp \
    unzip.c \
    zip.c

HEADERS += \
        quazip.h \
    crypt.h \
    ioapi.h \
    JlCompress.h \
    quaadler32.h \
    quachecksum32.h \
    quacrc32.h \
    quagzipfile.h \
    quaziodevice.h \
    quazip_global.h \
    quazip.h \
    quazipdir.h \
    quazipfile.h \
    quazipfileinfo.h \
    quazipnewinfo.h \
    unzip.h \
    zip.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}

SUBDIRS += \
    quazip.pro

DISTFILES += \
    quazip.pro.user



defineReplace(libdeclare) {

    libname = $$1
    libpath = $${_PRO_FILE_PWD_}/libs/$$1
    !exists($$libpath): error ("Not existing $$libname")

    INCLUDEPATH += $$libpath
    export(INCLUDEPATH)
    DEPENDPATH += $$libpath
    export(DEPENDPATH)

    win32:CONFIG(release, debug|release): LIBS += -L$$libpath -l$${libname}_r.lib
    else:win32:CONFIG(debug, debug|release): LIBS += -L$$libpath -l$${libname}_d.lib
    else:macx:CONFIG(release, debug|release) LIBS += -L$$libpath -llib$${libname}_r.a
    else:macx:CONFIG(debug, debug|release) LIBS += -L$$libpath -llib$${libname}_d.a
    export(LIBS)

    win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$libpath/$${libname}_r.a
    else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$libpath/$${libname}_d.a
    else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$$libpath/$${libname}_r.lib
    else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$libpath/$${libname}_d.lib
    else:macx:CONFIG(release, debug|release) PRE_TARGETDEPS += $$libpath/lib$${libname}_r.a
    else:macx:CONFIG(debug, debug|release) PRE_TARGETDEPS += $$libpath/lib$${libname}_d.a
    export(PRE_TARGETDEPS)

    return($$1)
}

$$libdeclare(quazip)


TSFILE = $$absolute_path($$TRANSLATIONS)
QMFILE = $$shell_path($$dirname(TSFILE)/$${TARGET}.qm)
QMAKE_PRE_LINK += $$[QT_INSTALL_BINS]/lupdate $$_PRO_FILE_$$escape_expand(\n\t)
QMAKE_PRE_LINK += $$[QT_INSTALL_BINS]/lrelease $$TSFILE -qm $$QMFILE
win32{
    CONFIG(release, debug|release) {
        TARGET_DIR = $${OUT_PWD}/release/Translations
    }
    else {
        TARGET_DIR = $${OUT_PWD}/debug/Translations
    }
} else:macx {
    TARGET_DIR = $${OUT_PWD}/$${TARGET}.app/Contents/Translations
}
TARGET_DIR =  $$shell_path($$TARGET_DIR)
QMAKE_POST_LINK += $${QMAKE_MKDIR} $${TARGET_DIR}$$escape_expand(\n\t)
QMAKE_POST_LINK += $${QMAKE_COPY_FILE} $$QMFILE $$shell_path($$TARGET_DIR/$${TARGET}.qm)

