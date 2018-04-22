/****************************************************************************
** Meta object code from reading C++ file 'resourcepanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hScene_lib/src/ui/panel/resourcepanel/resourcepanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resourcepanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hoolai__ResourcePanel_t {
    QByteArrayData data[16];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hoolai__ResourcePanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hoolai__ResourcePanel_t qt_meta_stringdata_hoolai__ResourcePanel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "hoolai::ResourcePanel"
QT_MOC_LITERAL(1, 22, 12), // "stateChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "path"
QT_MOC_LITERAL(4, 41, 5), // "state"
QT_MOC_LITERAL(5, 47, 20), // "currentFolderChanged"
QT_MOC_LITERAL(6, 68, 10), // "folderPath"
QT_MOC_LITERAL(7, 79, 22), // "currentResourceChanged"
QT_MOC_LITERAL(8, 102, 12), // "resourcePath"
QT_MOC_LITERAL(9, 115, 27), // "previewContextMenuRequested"
QT_MOC_LITERAL(10, 143, 8), // "position"
QT_MOC_LITERAL(11, 152, 27), // "dirviewContextMenuRequested"
QT_MOC_LITERAL(12, 180, 7), // "timeout"
QT_MOC_LITERAL(13, 188, 10), // "refreshDir"
QT_MOC_LITERAL(14, 199, 7), // "openDir"
QT_MOC_LITERAL(15, 207, 20) // "previewActionClicked"

    },
    "hoolai::ResourcePanel\0stateChanged\0\0"
    "path\0state\0currentFolderChanged\0"
    "folderPath\0currentResourceChanged\0"
    "resourcePath\0previewContextMenuRequested\0"
    "position\0dirviewContextMenuRequested\0"
    "timeout\0refreshDir\0openDir\0"
    "previewActionClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hoolai__ResourcePanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x08 /* Private */,
       5,    1,   64,    2, 0x08 /* Private */,
       7,    1,   67,    2, 0x08 /* Private */,
       9,    1,   70,    2, 0x08 /* Private */,
      11,    1,   73,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,
      14,    0,   78,    2, 0x08 /* Private */,
      15,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QPoint,   10,
    QMetaType::Void, QMetaType::QPoint,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void hoolai::ResourcePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ResourcePanel *_t = static_cast<ResourcePanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->currentFolderChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->currentResourceChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->previewContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->dirviewContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 5: _t->timeout(); break;
        case 6: _t->refreshDir(); break;
        case 7: _t->openDir(); break;
        case 8: _t->previewActionClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject hoolai::ResourcePanel::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_hoolai__ResourcePanel.data,
      qt_meta_data_hoolai__ResourcePanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *hoolai::ResourcePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hoolai::ResourcePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hoolai__ResourcePanel.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int hoolai::ResourcePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
