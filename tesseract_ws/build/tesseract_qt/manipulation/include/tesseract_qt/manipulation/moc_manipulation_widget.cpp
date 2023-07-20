/****************************************************************************
** Meta object code from reading C++ file 'manipulation_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/tesseract_qt/manipulation/include/tesseract_qt/manipulation/manipulation_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manipulation_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tesseract_gui__ManipulationWidget_t {
    QByteArrayData data[29];
    char stringdata0[512];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tesseract_gui__ManipulationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tesseract_gui__ManipulationWidget_t qt_meta_stringdata_tesseract_gui__ManipulationWidget = {
    {
QT_MOC_LITERAL(0, 0, 33), // "tesseract_gui::ManipulationWi..."
QT_MOC_LITERAL(1, 34, 24), // "manipulationStateChanged"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 33), // "tesseract_scene_graph::SceneS..."
QT_MOC_LITERAL(4, 94, 5), // "state"
QT_MOC_LITERAL(5, 100, 11), // "std::string"
QT_MOC_LITERAL(6, 112, 11), // "state_index"
QT_MOC_LITERAL(7, 124, 16), // "groupNameChanged"
QT_MOC_LITERAL(8, 141, 10), // "group_name"
QT_MOC_LITERAL(9, 152, 11), // "modeChanged"
QT_MOC_LITERAL(10, 164, 4), // "mode"
QT_MOC_LITERAL(11, 169, 19), // "workingFrameChanged"
QT_MOC_LITERAL(12, 189, 18), // "working_frame_name"
QT_MOC_LITERAL(13, 208, 14), // "tcpNameChanged"
QT_MOC_LITERAL(14, 223, 8), // "tcp_name"
QT_MOC_LITERAL(15, 232, 20), // "tcpOffsetNameChanged"
QT_MOC_LITERAL(16, 253, 15), // "tcp_offset_name"
QT_MOC_LITERAL(17, 269, 18), // "onGroupNameChanged"
QT_MOC_LITERAL(18, 288, 13), // "onModeChanged"
QT_MOC_LITERAL(19, 302, 21), // "onWorkingFrameChanged"
QT_MOC_LITERAL(20, 324, 16), // "onTCPNameChanged"
QT_MOC_LITERAL(21, 341, 22), // "onTCPOffsetNameChanged"
QT_MOC_LITERAL(22, 364, 18), // "onStateNameChanged"
QT_MOC_LITERAL(23, 383, 25), // "onJointStateSliderChanged"
QT_MOC_LITERAL(24, 409, 38), // "std::unordered_map<std::strin..."
QT_MOC_LITERAL(25, 448, 27), // "onCartesianTransformChanged"
QT_MOC_LITERAL(26, 476, 17), // "Eigen::Isometry3d"
QT_MOC_LITERAL(27, 494, 9), // "transform"
QT_MOC_LITERAL(28, 504, 7) // "onReset"

    },
    "tesseract_gui::ManipulationWidget\0"
    "manipulationStateChanged\0\0"
    "tesseract_scene_graph::SceneState\0"
    "state\0std::string\0state_index\0"
    "groupNameChanged\0group_name\0modeChanged\0"
    "mode\0workingFrameChanged\0working_frame_name\0"
    "tcpNameChanged\0tcp_name\0tcpOffsetNameChanged\0"
    "tcp_offset_name\0onGroupNameChanged\0"
    "onModeChanged\0onWorkingFrameChanged\0"
    "onTCPNameChanged\0onTCPOffsetNameChanged\0"
    "onStateNameChanged\0onJointStateSliderChanged\0"
    "std::unordered_map<std::string,double>\0"
    "onCartesianTransformChanged\0"
    "Eigen::Isometry3d\0transform\0onReset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tesseract_gui__ManipulationWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06 /* Public */,
       7,    1,   94,    2, 0x06 /* Public */,
       9,    1,   97,    2, 0x06 /* Public */,
      11,    1,  100,    2, 0x06 /* Public */,
      13,    1,  103,    2, 0x06 /* Public */,
      15,    1,  106,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  109,    2, 0x08 /* Private */,
      18,    0,  110,    2, 0x08 /* Private */,
      19,    0,  111,    2, 0x08 /* Private */,
      20,    0,  112,    2, 0x08 /* Private */,
      21,    0,  113,    2, 0x08 /* Private */,
      22,    0,  114,    2, 0x08 /* Private */,
      23,    1,  115,    2, 0x08 /* Private */,
      25,    1,  118,    2, 0x08 /* Private */,
      28,    0,  121,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,    4,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void,

       0        // eod
};

void tesseract_gui::ManipulationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ManipulationWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->manipulationStateChanged((*reinterpret_cast< const tesseract_scene_graph::SceneState(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 1: _t->groupNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->modeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->workingFrameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->tcpNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->tcpOffsetNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onGroupNameChanged(); break;
        case 7: _t->onModeChanged(); break;
        case 8: _t->onWorkingFrameChanged(); break;
        case 9: _t->onTCPNameChanged(); break;
        case 10: _t->onTCPOffsetNameChanged(); break;
        case 11: _t->onStateNameChanged(); break;
        case 12: _t->onJointStateSliderChanged((*reinterpret_cast< std::unordered_map<std::string,double>(*)>(_a[1]))); break;
        case 13: _t->onCartesianTransformChanged((*reinterpret_cast< const Eigen::Isometry3d(*)>(_a[1]))); break;
        case 14: _t->onReset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ManipulationWidget::*)(const tesseract_scene_graph::SceneState & , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManipulationWidget::manipulationStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ManipulationWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManipulationWidget::groupNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ManipulationWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManipulationWidget::modeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ManipulationWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManipulationWidget::workingFrameChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ManipulationWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManipulationWidget::tcpNameChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ManipulationWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManipulationWidget::tcpOffsetNameChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tesseract_gui::ManipulationWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_tesseract_gui__ManipulationWidget.data,
    qt_meta_data_tesseract_gui__ManipulationWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tesseract_gui::ManipulationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tesseract_gui::ManipulationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tesseract_gui__ManipulationWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int tesseract_gui::ManipulationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void tesseract_gui::ManipulationWidget::manipulationStateChanged(const tesseract_scene_graph::SceneState & _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tesseract_gui::ManipulationWidget::groupNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void tesseract_gui::ManipulationWidget::modeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void tesseract_gui::ManipulationWidget::workingFrameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void tesseract_gui::ManipulationWidget::tcpNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void tesseract_gui::ManipulationWidget::tcpOffsetNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
