/****************************************************************************
** Meta object code from reading C++ file 'udocument.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hScene_lib/src/data/element/udocument.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udocument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hoolai__UDocument_t {
    QByteArrayData data[25];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hoolai__UDocument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hoolai__UDocument_t qt_meta_stringdata_hoolai__UDocument = {
    {
QT_MOC_LITERAL(0, 0, 17), // "hoolai::UDocument"
QT_MOC_LITERAL(1, 18, 14), // "elementCreated"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 10), // "USelection"
QT_MOC_LITERAL(4, 45, 8), // "elements"
QT_MOC_LITERAL(5, 54, 14), // "elementRemoved"
QT_MOC_LITERAL(6, 69, 15), // "elementSelected"
QT_MOC_LITERAL(7, 85, 9), // "selection"
QT_MOC_LITERAL(8, 95, 12), // "elementMoved"
QT_MOC_LITERAL(9, 108, 9), // "UElement*"
QT_MOC_LITERAL(10, 118, 8), // "eleMoved"
QT_MOC_LITERAL(11, 127, 9), // "eleParent"
QT_MOC_LITERAL(12, 137, 22), // "elementPropertyUpdated"
QT_MOC_LITERAL(13, 160, 2), // "id"
QT_MOC_LITERAL(14, 163, 22), // "elementPositionChanged"
QT_MOC_LITERAL(15, 186, 7), // "element"
QT_MOC_LITERAL(16, 194, 24), // "elementPropertiesUpdated"
QT_MOC_LITERAL(17, 219, 18), // "elementNameUpdated"
QT_MOC_LITERAL(18, 238, 23), // "elementLockStateUpdated"
QT_MOC_LITERAL(19, 262, 16), // "documentModified"
QT_MOC_LITERAL(20, 279, 10), // "UDocument*"
QT_MOC_LITERAL(21, 290, 23), // "documentPropertyUpdated"
QT_MOC_LITERAL(22, 314, 10), // "propertyId"
QT_MOC_LITERAL(23, 325, 21), // "undoStackIndexChanged"
QT_MOC_LITERAL(24, 347, 5) // "index"

    },
    "hoolai::UDocument\0elementCreated\0\0"
    "USelection\0elements\0elementRemoved\0"
    "elementSelected\0selection\0elementMoved\0"
    "UElement*\0eleMoved\0eleParent\0"
    "elementPropertyUpdated\0id\0"
    "elementPositionChanged\0element\0"
    "elementPropertiesUpdated\0elementNameUpdated\0"
    "elementLockStateUpdated\0documentModified\0"
    "UDocument*\0documentPropertyUpdated\0"
    "propertyId\0undoStackIndexChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hoolai__UDocument[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       8,    2,   83,    2, 0x06 /* Public */,
      12,    2,   88,    2, 0x06 /* Public */,
      14,    1,   93,    2, 0x06 /* Public */,
      16,    1,   96,    2, 0x06 /* Public */,
      17,    1,   99,    2, 0x06 /* Public */,
      18,    1,  102,    2, 0x06 /* Public */,
      19,    1,  105,    2, 0x06 /* Public */,
      21,    1,  108,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      23,    1,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   10,   11,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,   13,
    QMetaType::Void, 0x80000000 | 3,   15,
    QMetaType::Void, 0x80000000 | 3,   15,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, QMetaType::Int,   22,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   24,

       0        // eod
};

void hoolai::UDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UDocument *_t = static_cast<UDocument *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->elementCreated((*reinterpret_cast< const USelection(*)>(_a[1]))); break;
        case 1: _t->elementRemoved((*reinterpret_cast< const USelection(*)>(_a[1]))); break;
        case 2: _t->elementSelected((*reinterpret_cast< const USelection(*)>(_a[1]))); break;
        case 3: _t->elementMoved((*reinterpret_cast< UElement*(*)>(_a[1])),(*reinterpret_cast< UElement*(*)>(_a[2]))); break;
        case 4: _t->elementPropertyUpdated((*reinterpret_cast< const USelection(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->elementPositionChanged((*reinterpret_cast< const USelection(*)>(_a[1]))); break;
        case 6: _t->elementPropertiesUpdated((*reinterpret_cast< const USelection(*)>(_a[1]))); break;
        case 7: _t->elementNameUpdated((*reinterpret_cast< const USelection(*)>(_a[1]))); break;
        case 8: _t->elementLockStateUpdated((*reinterpret_cast< const USelection(*)>(_a[1]))); break;
        case 9: _t->documentModified((*reinterpret_cast< UDocument*(*)>(_a[1]))); break;
        case 10: _t->documentPropertyUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->undoStackIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UDocument* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (UDocument::*_t)(const USelection & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDocument::elementCreated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UDocument::*_t)(const USelection & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDocument::elementRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (UDocument::*_t)(const USelection & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDocument::elementSelected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (UDocument::*_t)(UElement * , UElement * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDocument::elementMoved)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (UDocument::*_t)(const USelection & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDocument::elementPropertyUpdated)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (UDocument::*_t)(const USelection & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDocument::elementPositionChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (UDocument::*_t)(const USelection & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDocument::elementPropertiesUpdated)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (UDocument::*_t)(const USelection & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDocument::elementNameUpdated)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (UDocument::*_t)(const USelection & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDocument::elementLockStateUpdated)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (UDocument::*_t)(UDocument * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDocument::documentModified)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (UDocument::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDocument::documentPropertyUpdated)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject hoolai::UDocument::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_hoolai__UDocument.data,
      qt_meta_data_hoolai__UDocument,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *hoolai::UDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hoolai::UDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hoolai__UDocument.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IAttributed"))
        return static_cast< IAttributed*>(this);
    return QObject::qt_metacast(_clname);
}

int hoolai::UDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void hoolai::UDocument::elementCreated(const USelection & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void hoolai::UDocument::elementRemoved(const USelection & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void hoolai::UDocument::elementSelected(const USelection & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void hoolai::UDocument::elementMoved(UElement * _t1, UElement * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void hoolai::UDocument::elementPropertyUpdated(const USelection & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void hoolai::UDocument::elementPositionChanged(const USelection & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void hoolai::UDocument::elementPropertiesUpdated(const USelection & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void hoolai::UDocument::elementNameUpdated(const USelection & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void hoolai::UDocument::elementLockStateUpdated(const USelection & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void hoolai::UDocument::documentModified(UDocument * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void hoolai::UDocument::documentPropertyUpdated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
