/****************************************************************************
** Meta object code from reading C++ file 'interactive_marker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/tesseract_ros2/tesseract_rviz/include/tesseract_rviz/interactive_marker/interactive_marker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interactive_marker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tesseract_rviz__InteractiveMarker_t {
    QByteArrayData data[17];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tesseract_rviz__InteractiveMarker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tesseract_rviz__InteractiveMarker_t qt_meta_stringdata_tesseract_rviz__InteractiveMarker = {
    {
QT_MOC_LITERAL(0, 0, 33), // "tesseract_rviz::InteractiveMa..."
QT_MOC_LITERAL(1, 34, 12), // "userFeedback"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 11), // "std::string"
QT_MOC_LITERAL(4, 60, 15), // "reference_frame"
QT_MOC_LITERAL(5, 76, 17), // "Eigen::Isometry3d"
QT_MOC_LITERAL(6, 94, 9), // "transform"
QT_MOC_LITERAL(7, 104, 15), // "Eigen::Vector3d"
QT_MOC_LITERAL(8, 120, 11), // "mouse_point"
QT_MOC_LITERAL(9, 132, 17), // "mouse_point_valid"
QT_MOC_LITERAL(10, 150, 12), // "statusUpdate"
QT_MOC_LITERAL(11, 163, 46), // "rviz_common::properties::Stat..."
QT_MOC_LITERAL(12, 210, 5), // "level"
QT_MOC_LITERAL(13, 216, 4), // "name"
QT_MOC_LITERAL(14, 221, 4), // "text"
QT_MOC_LITERAL(15, 226, 16), // "handleMenuSelect"
QT_MOC_LITERAL(16, 243, 12) // "menu_item_id"

    },
    "tesseract_rviz::InteractiveMarker\0"
    "userFeedback\0\0std::string\0reference_frame\0"
    "Eigen::Isometry3d\0transform\0Eigen::Vector3d\0"
    "mouse_point\0mouse_point_valid\0"
    "statusUpdate\0"
    "rviz_common::properties::StatusProperty::Level\0"
    "level\0name\0text\0handleMenuSelect\0"
    "menu_item_id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tesseract_rviz__InteractiveMarker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   29,    2, 0x06 /* Public */,
      10,    3,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   45,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7, QMetaType::Bool,    4,    6,    8,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 3, 0x80000000 | 3,   12,   13,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   16,

       0        // eod
};

void tesseract_rviz::InteractiveMarker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InteractiveMarker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->userFeedback((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< const Eigen::Isometry3d(*)>(_a[2])),(*reinterpret_cast< const Eigen::Vector3d(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 1: _t->statusUpdate((*reinterpret_cast< rviz_common::properties::StatusProperty::Level(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3]))); break;
        case 2: _t->handleMenuSelect((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InteractiveMarker::*)(std::string , const Eigen::Isometry3d & , const Eigen::Vector3d & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InteractiveMarker::userFeedback)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InteractiveMarker::*)(rviz_common::properties::StatusProperty::Level , const std::string & , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InteractiveMarker::statusUpdate)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tesseract_rviz::InteractiveMarker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_tesseract_rviz__InteractiveMarker.data,
    qt_meta_data_tesseract_rviz__InteractiveMarker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tesseract_rviz::InteractiveMarker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tesseract_rviz::InteractiveMarker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tesseract_rviz__InteractiveMarker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tesseract_rviz::InteractiveMarker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void tesseract_rviz::InteractiveMarker::userFeedback(std::string _t1, const Eigen::Isometry3d & _t2, const Eigen::Vector3d & _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tesseract_rviz::InteractiveMarker::statusUpdate(rviz_common::properties::StatusProperty::Level _t1, const std::string & _t2, const std::string & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
