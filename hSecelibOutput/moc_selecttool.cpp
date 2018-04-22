/****************************************************************************
** Meta object code from reading C++ file 'selecttool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hScene_lib/src/ui/tool/selecttool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selecttool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hoolai__SelectTool_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hoolai__SelectTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hoolai__SelectTool_t qt_meta_stringdata_hoolai__SelectTool = {
    {
QT_MOC_LITERAL(0, 0, 18), // "hoolai::SelectTool"
QT_MOC_LITERAL(1, 19, 10), // "loadConfig"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "hoolai::SelectTool\0loadConfig\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hoolai__SelectTool[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void hoolai::SelectTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SelectTool *_t = static_cast<SelectTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadConfig(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject hoolai::SelectTool::staticMetaObject = {
    { &MouseTool::staticMetaObject, qt_meta_stringdata_hoolai__SelectTool.data,
      qt_meta_data_hoolai__SelectTool,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *hoolai::SelectTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hoolai::SelectTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hoolai__SelectTool.stringdata0))
        return static_cast<void*>(this);
    return MouseTool::qt_metacast(_clname);
}

int hoolai::SelectTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MouseTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
