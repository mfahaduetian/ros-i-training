/****************************************************************************
** Meta object code from reading C++ file 'joint_trajectory_monitor_properties.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/tesseract_ros2/tesseract_rviz/include/tesseract_rviz/joint_trajectory_monitor_properties.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joint_trajectory_monitor_properties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tesseract_rviz__JointTrajectoryMonitorProperties_t {
    QByteArrayData data[10];
    char stringdata0[346];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tesseract_rviz__JointTrajectoryMonitorProperties_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tesseract_rviz__JointTrajectoryMonitorProperties_t qt_meta_stringdata_tesseract_rviz__JointTrajectoryMonitorProperties = {
    {
QT_MOC_LITERAL(0, 0, 48), // "tesseract_rviz::JointTrajecto..."
QT_MOC_LITERAL(1, 49, 35), // "onLegacyJointTrajectoryTopicC..."
QT_MOC_LITERAL(2, 85, 0), // ""
QT_MOC_LITERAL(3, 86, 38), // "onTesseractJointTrajectoryTop..."
QT_MOC_LITERAL(4, 125, 38), // "onLegacyJointTrajectoryTopicD..."
QT_MOC_LITERAL(5, 164, 41), // "onTesseractJointTrajectoryTop..."
QT_MOC_LITERAL(6, 206, 35), // "onLegacyJointTrajectoryTopicC..."
QT_MOC_LITERAL(7, 242, 38), // "onTesseractJointTrajectoryTop..."
QT_MOC_LITERAL(8, 281, 30), // "onLegacyJointTrajectoryChanged"
QT_MOC_LITERAL(9, 312, 33) // "onTesseractJointTrajectoryCha..."

    },
    "tesseract_rviz::JointTrajectoryMonitorProperties\0"
    "onLegacyJointTrajectoryTopicConnect\0"
    "\0onTesseractJointTrajectoryTopicConnect\0"
    "onLegacyJointTrajectoryTopicDisconnect\0"
    "onTesseractJointTrajectoryTopicDisconnect\0"
    "onLegacyJointTrajectoryTopicChanged\0"
    "onTesseractJointTrajectoryTopicChanged\0"
    "onLegacyJointTrajectoryChanged\0"
    "onTesseractJointTrajectoryChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tesseract_rviz__JointTrajectoryMonitorProperties[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tesseract_rviz::JointTrajectoryMonitorProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JointTrajectoryMonitorProperties *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onLegacyJointTrajectoryTopicConnect(); break;
        case 1: _t->onTesseractJointTrajectoryTopicConnect(); break;
        case 2: _t->onLegacyJointTrajectoryTopicDisconnect(); break;
        case 3: _t->onTesseractJointTrajectoryTopicDisconnect(); break;
        case 4: _t->onLegacyJointTrajectoryTopicChanged(); break;
        case 5: _t->onTesseractJointTrajectoryTopicChanged(); break;
        case 6: _t->onLegacyJointTrajectoryChanged(); break;
        case 7: _t->onTesseractJointTrajectoryChanged(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject tesseract_rviz::JointTrajectoryMonitorProperties::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_tesseract_rviz__JointTrajectoryMonitorProperties.data,
    qt_meta_data_tesseract_rviz__JointTrajectoryMonitorProperties,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tesseract_rviz::JointTrajectoryMonitorProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tesseract_rviz::JointTrajectoryMonitorProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tesseract_rviz__JointTrajectoryMonitorProperties.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tesseract_rviz::JointTrajectoryMonitorProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
