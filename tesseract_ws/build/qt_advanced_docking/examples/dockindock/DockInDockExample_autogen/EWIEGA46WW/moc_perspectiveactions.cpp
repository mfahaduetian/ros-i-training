/****************************************************************************
** Meta object code from reading C++ file 'perspectiveactions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/Qt-Advanced-Docking-System/examples/dockindock/perspectiveactions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'perspectiveactions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtAdsUtl__LoadPerspectiveAction_t {
    QByteArrayData data[3];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtAdsUtl__LoadPerspectiveAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtAdsUtl__LoadPerspectiveAction_t qt_meta_stringdata_QtAdsUtl__LoadPerspectiveAction = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QtAdsUtl::LoadPerspectiveAction"
QT_MOC_LITERAL(1, 32, 4), // "load"
QT_MOC_LITERAL(2, 37, 0) // ""

    },
    "QtAdsUtl::LoadPerspectiveAction\0load\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAdsUtl__LoadPerspectiveAction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QtAdsUtl::LoadPerspectiveAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoadPerspectiveAction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->load(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject QtAdsUtl::LoadPerspectiveAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_meta_stringdata_QtAdsUtl__LoadPerspectiveAction.data,
    qt_meta_data_QtAdsUtl__LoadPerspectiveAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtAdsUtl::LoadPerspectiveAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAdsUtl::LoadPerspectiveAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtAdsUtl__LoadPerspectiveAction.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int QtAdsUtl::LoadPerspectiveAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_QtAdsUtl__RemovePerspectiveAction_t {
    QByteArrayData data[3];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtAdsUtl__RemovePerspectiveAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtAdsUtl__RemovePerspectiveAction_t qt_meta_stringdata_QtAdsUtl__RemovePerspectiveAction = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QtAdsUtl::RemovePerspectiveAc..."
QT_MOC_LITERAL(1, 34, 6), // "remove"
QT_MOC_LITERAL(2, 41, 0) // ""

    },
    "QtAdsUtl::RemovePerspectiveAction\0"
    "remove\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAdsUtl__RemovePerspectiveAction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QtAdsUtl::RemovePerspectiveAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RemovePerspectiveAction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->remove(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject QtAdsUtl::RemovePerspectiveAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_meta_stringdata_QtAdsUtl__RemovePerspectiveAction.data,
    qt_meta_data_QtAdsUtl__RemovePerspectiveAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtAdsUtl::RemovePerspectiveAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAdsUtl::RemovePerspectiveAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtAdsUtl__RemovePerspectiveAction.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int QtAdsUtl::RemovePerspectiveAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
