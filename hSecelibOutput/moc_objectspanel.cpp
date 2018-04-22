/****************************************************************************
** Meta object code from reading C++ file 'objectspanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hScene_lib/src/ui/panel/objectspanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objectspanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hoolai__ObjectsPanel_t {
    QByteArrayData data[7];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hoolai__ObjectsPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hoolai__ObjectsPanel_t qt_meta_stringdata_hoolai__ObjectsPanel = {
    {
QT_MOC_LITERAL(0, 0, 20), // "hoolai::ObjectsPanel"
QT_MOC_LITERAL(1, 21, 16), // "documentSelected"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 10), // "UDocument*"
QT_MOC_LITERAL(4, 50, 3), // "doc"
QT_MOC_LITERAL(5, 54, 9), // "expandAll"
QT_MOC_LITERAL(6, 64, 11) // "collapseAll"

    },
    "hoolai::ObjectsPanel\0documentSelected\0"
    "\0UDocument*\0doc\0expandAll\0collapseAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hoolai__ObjectsPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       5,    0,   32,    2, 0x08 /* Private */,
       6,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void hoolai::ObjectsPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObjectsPanel *_t = static_cast<ObjectsPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->documentSelected((*reinterpret_cast< UDocument*(*)>(_a[1]))); break;
        case 1: _t->expandAll(); break;
        case 2: _t->collapseAll(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject hoolai::ObjectsPanel::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_hoolai__ObjectsPanel.data,
      qt_meta_data_hoolai__ObjectsPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *hoolai::ObjectsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hoolai::ObjectsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hoolai__ObjectsPanel.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int hoolai::ObjectsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
