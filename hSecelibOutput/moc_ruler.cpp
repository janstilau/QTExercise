/****************************************************************************
** Meta object code from reading C++ file 'ruler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hScene_lib/src/ui/control/ruler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ruler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hoolai__Ruler_t {
    QByteArrayData data[9];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hoolai__Ruler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hoolai__Ruler_t qt_meta_stringdata_hoolai__Ruler = {
    {
QT_MOC_LITERAL(0, 0, 13), // "hoolai::Ruler"
QT_MOC_LITERAL(1, 14, 25), // "currentAuxiliaryLineMoved"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 13), // "AuxiliaryLine"
QT_MOC_LITERAL(4, 55, 4), // "line"
QT_MOC_LITERAL(5, 60, 13), // "cursorUpdated"
QT_MOC_LITERAL(6, 74, 12), // "QMouseEvent*"
QT_MOC_LITERAL(7, 87, 5), // "event"
QT_MOC_LITERAL(8, 93, 10) // "loadConfig"

    },
    "hoolai::Ruler\0currentAuxiliaryLineMoved\0"
    "\0AuxiliaryLine\0line\0cursorUpdated\0"
    "QMouseEvent*\0event\0loadConfig"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hoolai__Ruler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   32,    2, 0x0a /* Public */,
       8,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void hoolai::Ruler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Ruler *_t = static_cast<Ruler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentAuxiliaryLineMoved((*reinterpret_cast< const AuxiliaryLine(*)>(_a[1]))); break;
        case 1: _t->cursorUpdated((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->loadConfig(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Ruler::*_t)(const AuxiliaryLine & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ruler::currentAuxiliaryLineMoved)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject hoolai::Ruler::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_hoolai__Ruler.data,
      qt_meta_data_hoolai__Ruler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *hoolai::Ruler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hoolai::Ruler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hoolai__Ruler.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int hoolai::Ruler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void hoolai::Ruler::currentAuxiliaryLineMoved(const AuxiliaryLine & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
