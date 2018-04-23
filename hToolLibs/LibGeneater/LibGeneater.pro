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

LIBNAMES += \
    qtpropertybrowser \
    quazip

!exists($${_PRO_FILE_PWD_}/../libs) {
    QMAKE_POST_LINK += $${QMAKE_MKDIR} $$shell_path($${_PRO_FILE_PWD_}/../libs$$escape_expand(\n\t))
}
for (libname, LIBNAMES) {
    win32:CONFIG(release, debug|release): lib = $${OUT_PWD}/../$${libname}/release/$${libname}_r.lib
    else:win32:CONFIG(debug, debug|release): lib = $${OUT_PWD}/../$${libname}/debug/$${libname}_d.lib
    else:macx:CONFIG(release, debug|release) lib = $${OUT_PWD}/../$${libname}/lib$${libname}_r.a
    else:macx:CONFIG(debug, debug|release) lib = $${OUT_PWD}/../$${libname}/lib$${libname}_d.a
    copyDesDir = $${_PRO_FILE_PWD_}/../libs/$${libname}
    !exists(copyDesDir) {
        QMAKE_POST_LINK += $${QMAKE_MKDIR} $$shell_path($${copyDesDir}$$escape_expand(\n\t))
    }
    QMAKE_POST_LINK += $${QMAKE_COPY_FILE} $$shell_path($$lib) $$shell_path($${copyDesDir}/$$basename(lib)$$escape_expand(\n\t))
}

message($$QMAKE_POST_LINK)
