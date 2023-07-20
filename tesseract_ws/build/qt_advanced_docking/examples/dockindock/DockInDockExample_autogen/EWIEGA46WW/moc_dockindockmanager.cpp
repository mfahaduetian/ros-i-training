/****************************************************************************
** Meta object code from reading C++ file 'dockindockmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/Qt-Advanced-Docking-System/examples/dockindock/dockindockmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockindockmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtAdsUtl__DockInDockManager_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtAdsUtl__DockInDockManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtAdsUtl__DockInDockManager_t qt_meta_stringdata_QtAdsUtl__DockInDockManager = {
    {
QT_MOC_LITERAL(0, 0, 27) // "QtAdsUtl::DockInDockManager"

    },
    "QtAdsUtl::DockInDockManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAdsUtl__DockInDockManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QtAdsUtl::DockInDockManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject QtAdsUtl::DockInDockManager::staticMetaObject = { {
    QMetaObject::SuperData::link<ads::CDockManager::staticMetaObject>(),
    qt_meta_stringdata_QtAdsUtl__DockInDockManager.data,
    qt_meta_data_QtAdsUtl__DockInDockManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtAdsUtl::DockInDockManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAdsUtl::DockInDockManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtAdsUtl__DockInDockManager.stringdata0))
        return static_cast<void*>(this);
    return ads::CDockManager::qt_metacast(_clname);
}

int QtAdsUtl::DockInDockManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ads::CDockManager::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QtAdsUtl__CreateChildDockAction_t {
    QByteArrayData data[3];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtAdsUtl__CreateChildDockAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtAdsUtl__CreateChildDockAction_t qt_meta_stringdata_QtAdsUtl__CreateChildDockAction = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QtAdsUtl::CreateChildDockAction"
QT_MOC_LITERAL(1, 32, 11), // "createGroup"
QT_MOC_LITERAL(2, 44, 0) // ""

    },
    "QtAdsUtl::CreateChildDockAction\0"
    "createGroup\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAdsUtl__CreateChildDockAction[] = {

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

void QtAdsUtl::CreateChildDockAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreateChildDockAction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createGroup(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject QtAdsUtl::CreateChildDockAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_meta_stringdata_QtAdsUtl__CreateChildDockAction.data,
    qt_meta_data_QtAdsUtl__CreateChildDockAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtAdsUtl::CreateChildDockAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAdsUtl::CreateChildDockAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtAdsUtl__CreateChildDockAction.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int QtAdsUtl::CreateChildDockAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_QtAdsUtl__DestroyGroupAction_t {
    QByteArrayData data[3];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtAdsUtl__DestroyGroupAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtAdsUtl__DestroyGroupAction_t qt_meta_stringdata_QtAdsUtl__DestroyGroupAction = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QtAdsUtl::DestroyGroupAction"
QT_MOC_LITERAL(1, 29, 12), // "destroyGroup"
QT_MOC_LITERAL(2, 42, 0) // ""

    },
    "QtAdsUtl::DestroyGroupAction\0destroyGroup\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAdsUtl__DestroyGroupAction[] = {

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

void QtAdsUtl::DestroyGroupAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DestroyGroupAction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->destroyGroup(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject QtAdsUtl::DestroyGroupAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_meta_stringdata_QtAdsUtl__DestroyGroupAction.data,
    qt_meta_data_QtAdsUtl__DestroyGroupAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtAdsUtl::DestroyGroupAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAdsUtl::DestroyGroupAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtAdsUtl__DestroyGroupAction.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int QtAdsUtl::DestroyGroupAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_QtAdsUtl__MoveDockWidgetAction_t {
    QByteArrayData data[3];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtAdsUtl__MoveDockWidgetAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtAdsUtl__MoveDockWidgetAction_t qt_meta_stringdata_QtAdsUtl__MoveDockWidgetAction = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QtAdsUtl::MoveDockWidgetAction"
QT_MOC_LITERAL(1, 31, 4), // "move"
QT_MOC_LITERAL(2, 36, 0) // ""

    },
    "QtAdsUtl::MoveDockWidgetAction\0move\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAdsUtl__MoveDockWidgetAction[] = {

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

void QtAdsUtl::MoveDockWidgetAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MoveDockWidgetAction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->move(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject QtAdsUtl::MoveDockWidgetAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_meta_stringdata_QtAdsUtl__MoveDockWidgetAction.data,
    qt_meta_data_QtAdsUtl__MoveDockWidgetAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtAdsUtl::MoveDockWidgetAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAdsUtl::MoveDockWidgetAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtAdsUtl__MoveDockWidgetAction.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int QtAdsUtl::MoveDockWidgetAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
