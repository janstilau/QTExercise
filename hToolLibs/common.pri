defineReplace(getLibPri) {
    libname = $$1
    libProject = $$2
    result = $${_PRO_FILE_PWD_}/../$${libProject}/$${libname}/$${libname}.pri
    !exists($$result): error ("Not existing $$result")
    return($$result)
}



defineReplace(libDeclare) {
    libname = $$1
    libProject = $$2
    libpath = $${_PRO_FILE_PWD_}/../$${libProject}/libs/$${libname}
    !exists($$libpath): error ("Not existing $$libname")

    win32:CONFIG(release, debug|release): LIBS += $${libpath}$${libname}_r.lib
    else:win32:CONFIG(debug, debug|release): LIBS += $${libpath}/$${libname}_d.lib
    else:macx:CONFIG(release, debug|release) LIBS += $${libpath}/lib$${libname}_r.a
    else:macx:CONFIG(debug, debug|release) LIBS += $${libpath}/lib$${libname}_d.a
    export(LIBS)

    win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $${libpath}/$${libname}_r.a
    else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $${libpath}/$${libname}_d.a
    else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $${libpath}/$${libname}_r.lib
    else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $${libpath}/$${libname}_d.lib
    else:macx:CONFIG(release, debug|release) PRE_TARGETDEPS += $${libpath}/lib$${libname}_r.a
    else:macx:CONFIG(debug, debug|release) PRE_TARGETDEPS += $${libpath}/lib$${libname}_d.a
    export(PRE_TARGETDEPS)

    return($$1)
}

defineReplace(getResourceDesDir) {
    dirName = $$1
    !exists($${_PRO_FILE_PWD_$dirName}): error ("Not existing $${_PRO_FILE_PWD_}/$${dirName}")

    win32{
    CONFIG(release, debug|release) {
        result = $${OUT_PWD}/release/$${dirName}
    }
    else {
        result = $${OUT_PWD}/debug/$${dirName}
    }
    } else:macx {
        result = $${OUT_PWD}/$${TARGET}.app/Contents/$${dirName}
    }

    return($$result)
}
