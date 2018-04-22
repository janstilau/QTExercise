/****************************************************************************
** Meta object code from reading C++ file 'objectsview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hScene_lib/src/ui/panel/objectsview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objectsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hoolai__ObjectsView_t {
    QByteArrayData data[13];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hoolai__ObjectsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hoolai__ObjectsView_t qt_meta_stringdata_hoolai__ObjectsView = {
    {
QT_MOC_LITERAL(0, 0, 19), // "hoolai::ObjectsView"
QT_MOC_LITERAL(1, 20, 15), // "elementSelected"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10), // "USelection"
QT_MOC_LITERAL(4, 48, 9), // "selection"
QT_MOC_LITERAL(5, 58, 14), // "elementCreated"
QT_MOC_LITERAL(6, 73, 15), // "createdElements"
QT_MOC_LITERAL(7, 89, 14), // "elementRemoved"
QT_MOC_LITERAL(8, 104, 12), // "elementMoved"
QT_MOC_LITERAL(9, 117, 9), // "UElement*"
QT_MOC_LITERAL(10, 127, 9), // "eleToMove"
QT_MOC_LITERAL(11, 137, 7), // "eleBase"
QT_MOC_LITERAL(12, 145, 18) // "elementNameUpdated"

    },
    "hoolai::ObjectsView\0elementSelected\0"
    "\0USelection\0selection\0elementCreated\0"
    "createdElements\0elementRemoved\0"
    "elementMoved\0UElement*\0eleToMove\0"
    "eleBase\0elementNameUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hoolai__ObjectsView[] = {

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
       1,    1,   39,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,
       8,    2,   48,    2, 0x08 /* Private */,
      12,    1,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   10,   11,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void hoolai::ObjectsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObjectsView *_t = static_cast<ObjectsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->elementSelected((*reinterpret_cast< const USelection(*)>(_a[1]))); break;
        case 1: _t->elementCreated((*reinterpret_cast< const USelection(*)>(_a[1]))); break;
        case 2: _t->elementRemoved((*reinterpret_cast< const USelection(*)>(_a[1]))); break;
        case 3: _t->elementMoved((*reinterpret_cast< UElement*(*)>(_a[1])),(*reinterpret_cast< UElement*(*)>(_a[2]))); break;
        case 4: _t->elementNameUpdated((*reinterpret_cast< const USelection(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject hoolai::ObjectsView::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_hoolai__ObjectsView.data,
      qt_meta_data_hoolai__ObjectsView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *hoolai::ObjectsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hoolai::ObjectsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hoolai__ObjectsView.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int hoolai::ObjectsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
