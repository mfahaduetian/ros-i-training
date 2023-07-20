/****************************************************************************
** Meta object code from reading C++ file 'perspectives.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/Qt-Advanced-Docking-System/examples/dockindock/perspectives.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'perspectives.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtAdsUtl__PerspectivesManager_t {
    QByteArrayData data[5];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtAdsUtl__PerspectivesManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtAdsUtl__PerspectivesManager_t qt_meta_stringdata_QtAdsUtl__PerspectivesManager = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QtAdsUtl::PerspectivesManager"
QT_MOC_LITERAL(1, 30, 23), // "perspectivesListChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 18), // "openingPerspective"
QT_MOC_LITERAL(4, 74, 17) // "openedPerspective"

    },
    "QtAdsUtl::PerspectivesManager\0"
    "perspectivesListChanged\0\0openingPerspective\0"
    "openedPerspective"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAdsUtl__PerspectivesManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtAdsUtl::PerspectivesManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PerspectivesManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->perspectivesListChanged(); break;
        case 1: _t->openingPerspective(); break;
        case 2: _t->openedPerspective(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PerspectivesManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PerspectivesManager::perspectivesListChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PerspectivesManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PerspectivesManager::openingPerspective)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PerspectivesManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PerspectivesManager::openedPerspective)) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject QtAdsUtl::PerspectivesManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QtAdsUtl__PerspectivesManager.data,
    qt_meta_data_QtAdsUtl__PerspectivesManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtAdsUtl::PerspectivesManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAdsUtl::PerspectivesManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtAdsUtl__PerspectivesManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtAdsUtl::PerspectivesManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QtAdsUtl::PerspectivesManager::perspectivesListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtAdsUtl::PerspectivesManager::openingPerspective()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QtAdsUtl::PerspectivesManager::openedPerspective()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
