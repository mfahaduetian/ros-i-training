/****************************************************************************
** Meta object code from reading C++ file 'joint_trajectory_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/tesseract_qt/joint_trajectory/include/tesseract_qt/joint_trajectory/widgets/joint_trajectory_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joint_trajectory_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tesseract_gui__JointTrajectoryWidget_t {
    QByteArrayData data[18];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tesseract_gui__JointTrajectoryWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tesseract_gui__JointTrajectoryWidget_t qt_meta_stringdata_tesseract_gui__JointTrajectoryWidget = {
    {
QT_MOC_LITERAL(0, 0, 36), // "tesseract_gui::JointTrajector..."
QT_MOC_LITERAL(1, 37, 14), // "onSaveFinished"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 7), // "results"
QT_MOC_LITERAL(4, 61, 14), // "onOpenFinished"
QT_MOC_LITERAL(5, 76, 8), // "onRemove"
QT_MOC_LITERAL(6, 85, 6), // "onPlot"
QT_MOC_LITERAL(7, 92, 19), // "onCurrentRowChanged"
QT_MOC_LITERAL(8, 112, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 124, 7), // "current"
QT_MOC_LITERAL(10, 132, 8), // "previous"
QT_MOC_LITERAL(11, 141, 20), // "onPauseButtonClicked"
QT_MOC_LITERAL(12, 162, 19), // "onPlayButtonClicked"
QT_MOC_LITERAL(13, 182, 20), // "onPlayerTimerTimeout"
QT_MOC_LITERAL(14, 203, 20), // "onSliderValueChanged"
QT_MOC_LITERAL(15, 224, 5), // "value"
QT_MOC_LITERAL(16, 230, 14), // "onEnablePlayer"
QT_MOC_LITERAL(17, 245, 15) // "onDisablePlayer"

    },
    "tesseract_gui::JointTrajectoryWidget\0"
    "onSaveFinished\0\0results\0onOpenFinished\0"
    "onRemove\0onPlot\0onCurrentRowChanged\0"
    "QModelIndex\0current\0previous\0"
    "onPauseButtonClicked\0onPlayButtonClicked\0"
    "onPlayerTimerTimeout\0onSliderValueChanged\0"
    "value\0onEnablePlayer\0onDisablePlayer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tesseract_gui__JointTrajectoryWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       4,    1,   72,    2, 0x08 /* Private */,
       5,    0,   75,    2, 0x08 /* Private */,
       6,    0,   76,    2, 0x08 /* Private */,
       7,    2,   77,    2, 0x08 /* Private */,
      11,    0,   82,    2, 0x08 /* Private */,
      12,    0,   83,    2, 0x08 /* Private */,
      13,    0,   84,    2, 0x08 /* Private */,
      14,    1,   85,    2, 0x08 /* Private */,
      16,    0,   88,    2, 0x08 /* Private */,
      17,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tesseract_gui::JointTrajectoryWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JointTrajectoryWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSaveFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onOpenFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onRemove(); break;
        case 3: _t->onPlot(); break;
        case 4: _t->onCurrentRowChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->onPauseButtonClicked(); break;
        case 6: _t->onPlayButtonClicked(); break;
        case 7: _t->onPlayerTimerTimeout(); break;
        case 8: _t->onSliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onEnablePlayer(); break;
        case 10: _t->onDisablePlayer(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tesseract_gui::JointTrajectoryWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_tesseract_gui__JointTrajectoryWidget.data,
    qt_meta_data_tesseract_gui__JointTrajectoryWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tesseract_gui::JointTrajectoryWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tesseract_gui::JointTrajectoryWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tesseract_gui__JointTrajectoryWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int tesseract_gui::JointTrajectoryWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
