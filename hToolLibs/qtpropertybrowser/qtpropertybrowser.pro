#-------------------------------------------------
#
# Project created by QtCreator 2018-04-22T17:02:16
#
#-------------------------------------------------

QT       += widgets
TARGET = qtpropertybrowser
TEMPLATE = lib
CONFIG += staticlib
DESTDIR = $${_PRO_FILE_PWD_}/../libs/$${TARGET}

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

RESOURCES += \
    src/qtpropertybrowser.qrc

HEADERS += \
    src/QtAbstractEditorFactoryBase \
    src/QtAbstractPropertyBrowser \
    src/QtAbstractPropertyManager \
    src/QtBoolPropertyManager \
    src/QtBrowserItem \
    src/QtButtonPropertyBrowser \
    src/qtbuttonpropertybrowser.h \
    src/QtCharEditorFactory \
    src/QtCharPropertyManager \
    src/QtCheckBoxFactory \
    src/QtColorEditorFactory \
    src/QtColorPropertyManager \
    src/QtCursorEditorFactory \
    src/QtCursorPropertyManager \
    src/QtDateEditFactory \
    src/QtDatePropertyManager \
    src/QtDateTimeEditFactory \
    src/QtDateTimePropertyManager \
    src/QtDoublePropertyManager \
    src/QtDoubleSpinBoxFactory \
    src/qteditorfactory.h \
    src/QtEnumEditorFactory \
    src/QtEnumPropertyManager \
    src/QtFlagPropertyManager \
    src/QtFontEditorFactory \
    src/QtFontPropertyManager \
    src/QtGroupBoxPropertyBrowser \
    src/qtgroupboxpropertybrowser.h \
    src/QtGroupPropertyManager \
    src/QtIntPropertyManager \
    src/QtKeySequenceEditorFactory \
    src/QtKeySequencePropertyManager \
    src/QtLineEditFactory \
    src/QtLocalePropertyManager \
    src/QtPointFPropertyManager \
    src/QtPointPropertyManager \
    src/QtProperty \
    src/qtpropertybrowser.h \
    src/qtpropertybrowserutils_p.h \
    src/qtpropertymanager.h \
    src/QtRectFPropertyManager \
    src/QtRectPropertyManager \
    src/QtScrollBarFactory \
    src/QtSizeFPropertyManager \
    src/QtSizePolicyPropertyManager \
    src/QtSizePropertyManager \
    src/QtSliderFactory \
    src/QtSpinBoxFactory \
    src/QtStringPropertyManager \
    src/QtTimeEditFactory \
    src/QtTimePropertyManager \
    src/QtTreePropertyBrowser \
    src/qttreepropertybrowser.h \
    src/QtVariantEditorFactory \
    src/QtVariantProperty \
    src/qtvariantproperty.h \
    src/QtVariantPropertyManager

SOURCES += \
    src/qtbuttonpropertybrowser.cpp \
    src/qteditorfactory.cpp \
    src/qtgroupboxpropertybrowser.cpp \
    src/qtpropertybrowser.cpp \
    src/qtpropertybrowserutils.cpp \
    src/qtpropertymanager.cpp \
    src/qttreepropertybrowser.cpp \
    src/qtvariantproperty.cpp

CONFIG(release, debug|release){
    TARGET = qtpropertybrowser_r
} else :{
    TARGET = qtpropertybrowser_d
}

