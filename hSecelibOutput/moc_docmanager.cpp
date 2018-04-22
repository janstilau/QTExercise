/****************************************************************************
** Meta object code from reading C++ file 'docmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hScene_lib/src/data/docmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'docmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hoolai__DocManager_t {
    QByteArrayData data[14];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hoolai__DocManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hoolai__DocManager_t qt_meta_stringdata_hoolai__DocManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "hoolai::DocManager"
QT_MOC_LITERAL(1, 19, 14), // "documentOpened"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10), // "UDocument*"
QT_MOC_LITERAL(4, 46, 14), // "documentClosed"
QT_MOC_LITERAL(5, 61, 16), // "documentSelected"
QT_MOC_LITERAL(6, 78, 13), // "documentSaved"
QT_MOC_LITERAL(7, 92, 15), // "filePathChanged"
QT_MOC_LITERAL(8, 108, 16), // "documentModified"
QT_MOC_LITERAL(9, 125, 6), // "newDoc"
QT_MOC_LITERAL(10, 132, 4), // "open"
QT_MOC_LITERAL(11, 137, 3), // "doc"
QT_MOC_LITERAL(12, 141, 5), // "close"
QT_MOC_LITERAL(13, 147, 8) // "closeAll"

    },
    "hoolai::DocManager\0documentOpened\0\0"
    "UDocument*\0documentClosed\0documentSelected\0"
    "documentSaved\0filePathChanged\0"
    "documentModified\0newDoc\0open\0doc\0close\0"
    "closeAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hoolai__DocManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       5,    1,   70,    2, 0x06 /* Public */,
       6,    2,   73,    2, 0x06 /* Public */,
       8,    1,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   81,    2, 0x0a /* Public */,
      10,    1,   82,    2, 0x0a /* Public */,
      12,    1,   85,    2, 0x0a /* Public */,
      12,    0,   88,    2, 0x2a /* Public | MethodCloned */,
      13,    0,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,    7,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    0x80000000 | 3,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void hoolai::DocManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DocManager *_t = static_cast<DocManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->documentOpened((*reinterpret_cast< UDocument*(*)>(_a[1]))); break;
        case 1: _t->documentClosed((*reinterpret_cast< UDocument*(*)>(_a[1]))); break;
        case 2: _t->documentSelected((*reinterpret_cast< UDocument*(*)>(_a[1]))); break;
        case 3: _t->documentSaved((*reinterpret_cast< UDocument*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->documentModified((*reinterpret_cast< UDocument*(*)>(_a[1]))); break;
        case 5: { UDocument* _r = _t->newDoc();
            if (_a[0]) *reinterpret_cast< UDocument**>(_a[0]) = std::move(_r); }  break;
        case 6: _t->open((*reinterpret_cast< UDocument*(*)>(_a[1]))); break;
        case 7: _t->close((*reinterpret_cast< UDocument*(*)>(_a[1]))); break;
        case 8: _t->close(); break;
        case 9: _t->closeAll(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UDocument* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UDocument* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UDocument* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UDocument* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UDocument* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UDocument* >(); break;
            }
            break;
        case 7:
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
            typedef void (DocManager::*_t)(UDocument * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocManager::documentOpened)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DocManager::*_t)(UDocument * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocManager::documentClosed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DocManager::*_t)(UDocument * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocManager::documentSelected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DocManager::*_t)(UDocument * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocManager::documentSaved)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DocManager::*_t)(UDocument * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocManager::documentModified)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject hoolai::DocManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_hoolai__DocManager.data,
      qt_meta_data_hoolai__DocManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *hoolai::DocManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hoolai::DocManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hoolai__DocManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int hoolai::DocManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void hoolai::DocManager::documentOpened(UDocument * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void hoolai::DocManager::documentClosed(UDocument * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void hoolai::DocManager::documentSelected(UDocument * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void hoolai::DocManager::documentSaved(UDocument * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void hoolai::DocManager::documentModified(UDocument * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
