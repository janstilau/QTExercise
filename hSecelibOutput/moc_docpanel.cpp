/****************************************************************************
** Meta object code from reading C++ file 'docpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hScene_lib/src/ui/panel/docpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'docpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hoolai__DocPanel_t {
    QByteArrayData data[21];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hoolai__DocPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hoolai__DocPanel_t qt_meta_stringdata_hoolai__DocPanel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "hoolai::DocPanel"
QT_MOC_LITERAL(1, 17, 12), // "scaleChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "documentOpened"
QT_MOC_LITERAL(4, 46, 10), // "UDocument*"
QT_MOC_LITERAL(5, 57, 3), // "doc"
QT_MOC_LITERAL(6, 61, 14), // "currentChanged"
QT_MOC_LITERAL(7, 76, 5), // "index"
QT_MOC_LITERAL(8, 82, 17), // "tabCloseRequested"
QT_MOC_LITERAL(9, 100, 14), // "documentClosed"
QT_MOC_LITERAL(10, 115, 13), // "documentSaved"
QT_MOC_LITERAL(11, 129, 15), // "filePathChanged"
QT_MOC_LITERAL(12, 145, 16), // "documentModified"
QT_MOC_LITERAL(13, 162, 16), // "documentSelected"
QT_MOC_LITERAL(14, 179, 16), // "zoomIndexChanged"
QT_MOC_LITERAL(15, 196, 16), // "zoomValueChanged"
QT_MOC_LITERAL(16, 213, 17), // "zoomActionHandler"
QT_MOC_LITERAL(17, 231, 16), // "viewScaleChanged"
QT_MOC_LITERAL(18, 248, 10), // "DocWindow*"
QT_MOC_LITERAL(19, 259, 18), // "appPropertyUpdated"
QT_MOC_LITERAL(20, 278, 10) // "propertyId"

    },
    "hoolai::DocPanel\0scaleChanged\0\0"
    "documentOpened\0UDocument*\0doc\0"
    "currentChanged\0index\0tabCloseRequested\0"
    "documentClosed\0documentSaved\0"
    "filePathChanged\0documentModified\0"
    "documentSelected\0zoomIndexChanged\0"
    "zoomValueChanged\0zoomActionHandler\0"
    "viewScaleChanged\0DocWindow*\0"
    "appPropertyUpdated\0propertyId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hoolai__DocPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   82,    2, 0x0a /* Public */,
       6,    1,   85,    2, 0x0a /* Public */,
       8,    1,   88,    2, 0x0a /* Public */,
       9,    1,   91,    2, 0x0a /* Public */,
      10,    2,   94,    2, 0x0a /* Public */,
      12,    1,   99,    2, 0x0a /* Public */,
      13,    1,  102,    2, 0x0a /* Public */,
      14,    1,  105,    2, 0x08 /* Private */,
      15,    0,  108,    2, 0x08 /* Private */,
      16,    1,  109,    2, 0x08 /* Private */,
      17,    1,  112,    2, 0x08 /* Private */,
      19,    1,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool,    5,   11,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void, QMetaType::Int,   20,

       0        // eod
};

void hoolai::DocPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DocPanel *_t = static_cast<DocPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scaleChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->documentOpened((*reinterpret_cast< UDocument*(*)>(_a[1]))); break;
        case 2: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->documentClosed((*reinterpret_cast< UDocument*(*)>(_a[1]))); break;
        case 5: _t->documentSaved((*reinterpret_cast< UDocument*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->documentModified((*reinterpret_cast< UDocument*(*)>(_a[1]))); break;
        case 7: _t->documentSelected((*reinterpret_cast< UDocument*(*)>(_a[1]))); break;
        case 8: _t->zoomIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->zoomValueChanged(); break;
        case 10: _t->zoomActionHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->viewScaleChanged((*reinterpret_cast< DocWindow*(*)>(_a[1]))); break;
        case 12: _t->appPropertyUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DocPanel::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocPanel::scaleChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject hoolai::DocPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_hoolai__DocPanel.data,
      qt_meta_data_hoolai__DocPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *hoolai::DocPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hoolai::DocPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hoolai__DocPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int hoolai::DocPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void hoolai::DocPanel::scaleChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
