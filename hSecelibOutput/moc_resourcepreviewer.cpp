/****************************************************************************
** Meta object code from reading C++ file 'resourcepreviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hScene_lib/src/ui/panel/resourcepanel/resourcepreviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resourcepreviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hoolai__ResourcePreviewer_t {
    QByteArrayData data[7];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hoolai__ResourcePreviewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hoolai__ResourcePreviewer_t qt_meta_stringdata_hoolai__ResourcePreviewer = {
    {
QT_MOC_LITERAL(0, 0, 25), // "hoolai::ResourcePreviewer"
QT_MOC_LITERAL(1, 26, 22), // "currentResourceChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 8), // "filePath"
QT_MOC_LITERAL(4, 59, 27), // "previewContextMenuRequested"
QT_MOC_LITERAL(5, 87, 8), // "position"
QT_MOC_LITERAL(6, 96, 13) // "initCellRuler"

    },
    "hoolai::ResourcePreviewer\0"
    "currentResourceChanged\0\0filePath\0"
    "previewContextMenuRequested\0position\0"
    "initCellRuler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hoolai__ResourcePreviewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QPoint,    5,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void hoolai::ResourcePreviewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ResourcePreviewer *_t = static_cast<ResourcePreviewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentResourceChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->previewContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->initCellRuler(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ResourcePreviewer::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResourcePreviewer::currentResourceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ResourcePreviewer::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResourcePreviewer::previewContextMenuRequested)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject hoolai::ResourcePreviewer::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_hoolai__ResourcePreviewer.data,
      qt_meta_data_hoolai__ResourcePreviewer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *hoolai::ResourcePreviewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hoolai::ResourcePreviewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hoolai__ResourcePreviewer.stringdata0))
        return static_cast<void*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int hoolai::ResourcePreviewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
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
void hoolai::ResourcePreviewer::currentResourceChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void hoolai::ResourcePreviewer::previewContextMenuRequested(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
