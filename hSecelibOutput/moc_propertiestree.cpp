/****************************************************************************
** Meta object code from reading C++ file 'propertiestree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hScene_lib/src/ui/control/propertiestree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propertiestree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hoolai__PropertiesTree_t {
    QByteArrayData data[25];
    char stringdata0[352];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hoolai__PropertiesTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hoolai__PropertiesTree_t qt_meta_stringdata_hoolai__PropertiesTree = {
    {
QT_MOC_LITERAL(0, 0, 22), // "hoolai::PropertiesTree"
QT_MOC_LITERAL(1, 23, 12), // "valueChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "QtProperty*"
QT_MOC_LITERAL(4, 49, 8), // "property"
QT_MOC_LITERAL(5, 58, 3), // "val"
QT_MOC_LITERAL(6, 62, 15), // "elementSelected"
QT_MOC_LITERAL(7, 78, 10), // "USelection"
QT_MOC_LITERAL(8, 89, 9), // "selection"
QT_MOC_LITERAL(9, 99, 22), // "elementPropertyUpdated"
QT_MOC_LITERAL(10, 122, 11), // "elementList"
QT_MOC_LITERAL(11, 134, 2), // "id"
QT_MOC_LITERAL(12, 137, 24), // "elementPropertiesUpdated"
QT_MOC_LITERAL(13, 162, 22), // "elementPositionChanged"
QT_MOC_LITERAL(14, 185, 23), // "elementLockStateUpdated"
QT_MOC_LITERAL(15, 209, 12), // "stateChanged"
QT_MOC_LITERAL(16, 222, 4), // "path"
QT_MOC_LITERAL(17, 227, 5), // "state"
QT_MOC_LITERAL(18, 233, 18), // "appPropertyUpdated"
QT_MOC_LITERAL(19, 252, 10), // "propertyId"
QT_MOC_LITERAL(20, 263, 11), // "appReloaded"
QT_MOC_LITERAL(21, 275, 23), // "documentPropertyUpdated"
QT_MOC_LITERAL(22, 299, 24), // "attributedObjectSelected"
QT_MOC_LITERAL(23, 324, 19), // "QList<IAttributed*>"
QT_MOC_LITERAL(24, 344, 7) // "objects"

    },
    "hoolai::PropertiesTree\0valueChanged\0"
    "\0QtProperty*\0property\0val\0elementSelected\0"
    "USelection\0selection\0elementPropertyUpdated\0"
    "elementList\0id\0elementPropertiesUpdated\0"
    "elementPositionChanged\0elementLockStateUpdated\0"
    "stateChanged\0path\0state\0appPropertyUpdated\0"
    "propertyId\0appReloaded\0documentPropertyUpdated\0"
    "attributedObjectSelected\0QList<IAttributed*>\0"
    "objects"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hoolai__PropertiesTree[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x08 /* Private */,
       6,    1,   74,    2, 0x08 /* Private */,
       9,    2,   77,    2, 0x08 /* Private */,
      12,    1,   82,    2, 0x08 /* Private */,
      13,    1,   85,    2, 0x08 /* Private */,
      14,    1,   88,    2, 0x08 /* Private */,
      15,    2,   91,    2, 0x08 /* Private */,
      18,    1,   96,    2, 0x08 /* Private */,
      20,    0,   99,    2, 0x08 /* Private */,
      21,    1,  100,    2, 0x08 /* Private */,
      22,    1,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,   10,   11,
    QMetaType::Void, 0x80000000 | 7,   10,
    QMetaType::Void, 0x80000000 | 7,   10,
    QMetaType::Void, 0x80000000 | 7,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   16,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, 0x80000000 | 23,   24,

       0        // eod
};

void hoolai::PropertiesTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropertiesTree *_t = static_cast<PropertiesTree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->elementSelected((*reinterpret_cast< const USelection(*)>(_a[1]))); break;
        case 2: _t->elementPropertyUpdated((*reinterpret_cast< const USelection(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->elementPropertiesUpdated((*reinterpret_cast< const USelection(*)>(_a[1]))); break;
        case 4: _t->elementPositionChanged((*reinterpret_cast< const USelection(*)>(_a[1]))); break;
        case 5: _t->elementLockStateUpdated((*reinterpret_cast< const USelection(*)>(_a[1]))); break;
        case 6: _t->stateChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->appPropertyUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->appReloaded(); break;
        case 9: _t->documentPropertyUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->attributedObjectSelected((*reinterpret_cast< const QList<IAttributed*>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject hoolai::PropertiesTree::staticMetaObject = {
    { &QtTreePropertyBrowser::staticMetaObject, qt_meta_stringdata_hoolai__PropertiesTree.data,
      qt_meta_data_hoolai__PropertiesTree,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *hoolai::PropertiesTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hoolai::PropertiesTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hoolai__PropertiesTree.stringdata0))
        return static_cast<void*>(this);
    return QtTreePropertyBrowser::qt_metacast(_clname);
}

int hoolai::PropertiesTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtTreePropertyBrowser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
