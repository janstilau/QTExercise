/****************************************************************************
** Meta object code from reading C++ file 'resouredirsview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hScene_lib/src/ui/panel/resourcepanel/resouredirsview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resouredirsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hoolai__ResourceDirsView_t {
    QByteArrayData data[6];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hoolai__ResourceDirsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hoolai__ResourceDirsView_t qt_meta_stringdata_hoolai__ResourceDirsView = {
    {
QT_MOC_LITERAL(0, 0, 24), // "hoolai::ResourceDirsView"
QT_MOC_LITERAL(1, 25, 20), // "currentFolderChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 8), // "itemPath"
QT_MOC_LITERAL(4, 56, 27), // "dirviewContextMenuRequested"
QT_MOC_LITERAL(5, 84, 8) // "position"

    },
    "hoolai::ResourceDirsView\0currentFolderChanged\0"
    "\0itemPath\0dirviewContextMenuRequested\0"
    "position"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hoolai__ResourceDirsView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QPoint,    5,

       0        // eod
};

void hoolai::ResourceDirsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ResourceDirsView *_t = static_cast<ResourceDirsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentFolderChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->dirviewContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ResourceDirsView::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResourceDirsView::currentFolderChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ResourceDirsView::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResourceDirsView::dirviewContextMenuRequested)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject hoolai::ResourceDirsView::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_hoolai__ResourceDirsView.data,
      qt_meta_data_hoolai__ResourceDirsView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *hoolai::ResourceDirsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hoolai::ResourceDirsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hoolai__ResourceDirsView.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int hoolai::ResourceDirsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void hoolai::ResourceDirsView::currentFolderChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void hoolai::ResourceDirsView::dirviewContextMenuRequested(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
