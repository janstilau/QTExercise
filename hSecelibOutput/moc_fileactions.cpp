/****************************************************************************
** Meta object code from reading C++ file 'fileactions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hScene_lib/src/action/fileactions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileactions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hoolai__FileActions_t {
    QByteArrayData data[21];
    char stringdata0[429];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hoolai__FileActions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hoolai__FileActions_t qt_meta_stringdata_hoolai__FileActions = {
    {
QT_MOC_LITERAL(0, 0, 19), // "hoolai::FileActions"
QT_MOC_LITERAL(1, 20, 20), // "actionFileNewHandler"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 21), // "actionFileOpenHandler"
QT_MOC_LITERAL(4, 64, 21), // "actionFileSaveHandler"
QT_MOC_LITERAL(5, 86, 23), // "actionFileSaveAsHandler"
QT_MOC_LITERAL(6, 110, 24), // "actionFileSaveAllHandler"
QT_MOC_LITERAL(7, 135, 23), // "actionFileExportHandler"
QT_MOC_LITERAL(8, 159, 22), // "actionFileCloseHandler"
QT_MOC_LITERAL(9, 182, 25), // "actionFileCloseAllHandler"
QT_MOC_LITERAL(10, 208, 21), // "actionFileExitHandler"
QT_MOC_LITERAL(11, 230, 28), // "actionFileClearRecentHandler"
QT_MOC_LITERAL(12, 259, 24), // "actionFileSettingHandler"
QT_MOC_LITERAL(13, 284, 24), // "actionPreferencesHandler"
QT_MOC_LITERAL(14, 309, 17), // "actionPackHandler"
QT_MOC_LITERAL(15, 327, 24), // "actionShowFileDirHandler"
QT_MOC_LITERAL(16, 352, 16), // "documentSelected"
QT_MOC_LITERAL(17, 369, 10), // "UDocument*"
QT_MOC_LITERAL(18, 380, 3), // "doc"
QT_MOC_LITERAL(19, 384, 27), // "actionFileOpenRecentHandler"
QT_MOC_LITERAL(20, 412, 16) // "appconfigChanged"

    },
    "hoolai::FileActions\0actionFileNewHandler\0"
    "\0actionFileOpenHandler\0actionFileSaveHandler\0"
    "actionFileSaveAsHandler\0"
    "actionFileSaveAllHandler\0"
    "actionFileExportHandler\0actionFileCloseHandler\0"
    "actionFileCloseAllHandler\0"
    "actionFileExitHandler\0"
    "actionFileClearRecentHandler\0"
    "actionFileSettingHandler\0"
    "actionPreferencesHandler\0actionPackHandler\0"
    "actionShowFileDirHandler\0documentSelected\0"
    "UDocument*\0doc\0actionFileOpenRecentHandler\0"
    "appconfigChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hoolai__FileActions[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    1,  113,    2, 0x08 /* Private */,
      19,    0,  116,    2, 0x08 /* Private */,
      20,    0,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void hoolai::FileActions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileActions *_t = static_cast<FileActions *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionFileNewHandler(); break;
        case 1: _t->actionFileOpenHandler(); break;
        case 2: _t->actionFileSaveHandler(); break;
        case 3: _t->actionFileSaveAsHandler(); break;
        case 4: _t->actionFileSaveAllHandler(); break;
        case 5: _t->actionFileExportHandler(); break;
        case 6: _t->actionFileCloseHandler(); break;
        case 7: _t->actionFileCloseAllHandler(); break;
        case 8: _t->actionFileExitHandler(); break;
        case 9: _t->actionFileClearRecentHandler(); break;
        case 10: _t->actionFileSettingHandler(); break;
        case 11: _t->actionPreferencesHandler(); break;
        case 12: _t->actionPackHandler(); break;
        case 13: _t->actionShowFileDirHandler(); break;
        case 14: _t->documentSelected((*reinterpret_cast< UDocument*(*)>(_a[1]))); break;
        case 15: _t->actionFileOpenRecentHandler(); break;
        case 16: _t->appconfigChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject hoolai::FileActions::staticMetaObject = {
    { &ActionGroup::staticMetaObject, qt_meta_stringdata_hoolai__FileActions.data,
      qt_meta_data_hoolai__FileActions,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *hoolai::FileActions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hoolai::FileActions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hoolai__FileActions.stringdata0))
        return static_cast<void*>(this);
    return ActionGroup::qt_metacast(_clname);
}

int hoolai::FileActions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
