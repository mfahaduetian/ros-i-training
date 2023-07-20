/****************************************************************************
** Meta object code from reading C++ file 'environment_monitor_properties.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/tesseract_ros2/tesseract_rviz/include/tesseract_rviz/environment_monitor_properties.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'environment_monitor_properties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tesseract_rviz__EnvironmentMonitorProperties_t {
    QByteArrayData data[10];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tesseract_rviz__EnvironmentMonitorProperties_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tesseract_rviz__EnvironmentMonitorProperties_t qt_meta_stringdata_tesseract_rviz__EnvironmentMonitorProperties = {
    {
QT_MOC_LITERAL(0, 0, 44), // "tesseract_rviz::EnvironmentMo..."
QT_MOC_LITERAL(1, 45, 20), // "componentInfoChanged"
QT_MOC_LITERAL(2, 66, 0), // ""
QT_MOC_LITERAL(3, 67, 51), // "std::shared_ptr<const tessera..."
QT_MOC_LITERAL(4, 119, 14), // "component_info"
QT_MOC_LITERAL(5, 134, 20), // "onDisplayModeChanged"
QT_MOC_LITERAL(6, 155, 24), // "onURDFDescriptionChanged"
QT_MOC_LITERAL(7, 180, 25), // "onEnvironmentTopicChanged"
QT_MOC_LITERAL(8, 206, 33), // "onEnvironmentSnapshotTopicCha..."
QT_MOC_LITERAL(9, 240, 24) // "onJointStateTopicChanged"

    },
    "tesseract_rviz::EnvironmentMonitorProperties\0"
    "componentInfoChanged\0\0"
    "std::shared_ptr<const tesseract_gui::ComponentInfo>\0"
    "component_info\0onDisplayModeChanged\0"
    "onURDFDescriptionChanged\0"
    "onEnvironmentTopicChanged\0"
    "onEnvironmentSnapshotTopicChanged\0"
    "onJointStateTopicChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tesseract_rviz__EnvironmentMonitorProperties[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,
       8,    0,   50,    2, 0x0a /* Public */,
       9,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tesseract_rviz::EnvironmentMonitorProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EnvironmentMonitorProperties *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->componentInfoChanged((*reinterpret_cast< std::shared_ptr<const tesseract_gui::ComponentInfo>(*)>(_a[1]))); break;
        case 1: _t->onDisplayModeChanged(); break;
        case 2: _t->onURDFDescriptionChanged(); break;
        case 3: _t->onEnvironmentTopicChanged(); break;
        case 4: _t->onEnvironmentSnapshotTopicChanged(); break;
        case 5: _t->onJointStateTopicChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EnvironmentMonitorProperties::*)(std::shared_ptr<const tesseract_gui::ComponentInfo> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EnvironmentMonitorProperties::componentInfoChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tesseract_rviz::EnvironmentMonitorProperties::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_tesseract_rviz__EnvironmentMonitorProperties.data,
    qt_meta_data_tesseract_rviz__EnvironmentMonitorProperties,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tesseract_rviz::EnvironmentMonitorProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tesseract_rviz::EnvironmentMonitorProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tesseract_rviz__EnvironmentMonitorProperties.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tesseract_rviz::EnvironmentMonitorProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void tesseract_rviz::EnvironmentMonitorProperties::componentInfoChanged(std::shared_ptr<const tesseract_gui::ComponentInfo> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
