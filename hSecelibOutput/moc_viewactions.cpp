/****************************************************************************
** Meta object code from reading C++ file 'viewactions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hScene_lib/src/action/viewactions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewactions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hoolai__ViewActions_t {
    QByteArrayData data[8];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hoolai__ViewActions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hoolai__ViewActions_t qt_meta_stringdata_hoolai__ViewActions = {
    {
QT_MOC_LITERAL(0, 0, 19), // "hoolai::ViewActions"
QT_MOC_LITERAL(1, 20, 25), // "actionViewGridShowHandler"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "check"
QT_MOC_LITERAL(4, 53, 25), // "actionViewGridSnapHandler"
QT_MOC_LITERAL(5, 79, 26), // "actionViewRulerShowHandler"
QT_MOC_LITERAL(6, 106, 26), // "actionViewWindowMaxHandler"
QT_MOC_LITERAL(7, 133, 26) // "actionViewAddAuxiliaryLine"

    },
    "hoolai::ViewActions\0actionViewGridShowHandler\0"
    "\0check\0actionViewGridSnapHandler\0"
    "actionViewRulerShowHandler\0"
    "actionViewWindowMaxHandler\0"
    "actionViewAddAuxiliaryLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hoolai__ViewActions[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       5,    1,   45,    2, 0x0a /* Public */,
       6,    1,   48,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void hoolai::ViewActions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewActions *_t = static_cast<ViewActions *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionViewGridShowHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->actionViewGridSnapHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->actionViewRulerShowHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->actionViewWindowMaxHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->actionViewAddAuxiliaryLine(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject hoolai::ViewActions::staticMetaObject = {
    { &ActionGroup::staticMetaObject, qt_meta_stringdata_hoolai__ViewActions.data,
      qt_meta_data_hoolai__ViewActions,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *hoolai::ViewActions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hoolai::ViewActions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hoolai__ViewActions.stringdata0))
        return static_cast<void*>(this);
    return ActionGroup::qt_metacast(_clname);
}

int hoolai::ViewActions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
