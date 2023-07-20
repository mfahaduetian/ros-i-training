/****************************************************************************
** Meta object code from reading C++ file 'joint_state_slider_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/tesseract_qt/joint_state_slider/include/tesseract_qt/joint_state_slider/joint_state_slider_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joint_state_slider_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tesseract_gui__JointStateSliderWidget_t {
    QByteArrayData data[9];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tesseract_gui__JointStateSliderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tesseract_gui__JointStateSliderWidget_t qt_meta_stringdata_tesseract_gui__JointStateSliderWidget = {
    {
QT_MOC_LITERAL(0, 0, 37), // "tesseract_gui::JointStateSlid..."
QT_MOC_LITERAL(1, 38, 17), // "jointValueChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 4), // "name"
QT_MOC_LITERAL(4, 62, 5), // "value"
QT_MOC_LITERAL(5, 68, 17), // "jointStateChanged"
QT_MOC_LITERAL(6, 86, 38), // "std::unordered_map<std::strin..."
QT_MOC_LITERAL(7, 125, 5), // "state"
QT_MOC_LITERAL(8, 131, 13) // "setJointState"

    },
    "tesseract_gui::JointStateSliderWidget\0"
    "jointValueChanged\0\0name\0value\0"
    "jointStateChanged\0"
    "std::unordered_map<std::string,double>\0"
    "state\0setJointState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tesseract_gui__JointStateSliderWidget[] = {

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
       1,    2,   29,    2, 0x06 /* Public */,
       5,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void tesseract_gui::JointStateSliderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JointStateSliderWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->jointValueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->jointStateChanged((*reinterpret_cast< std::unordered_map<std::string,double>(*)>(_a[1]))); break;
        case 2: _t->setJointState((*reinterpret_cast< const std::unordered_map<std::string,double>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JointStateSliderWidget::*)(QString , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JointStateSliderWidget::jointValueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JointStateSliderWidget::*)(std::unordered_map<std::string,double> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JointStateSliderWidget::jointStateChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tesseract_gui::JointStateSliderWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_tesseract_gui__JointStateSliderWidget.data,
    qt_meta_data_tesseract_gui__JointStateSliderWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tesseract_gui::JointStateSliderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tesseract_gui::JointStateSliderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tesseract_gui__JointStateSliderWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int tesseract_gui::JointStateSliderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void tesseract_gui::JointStateSliderWidget::jointValueChanged(QString _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tesseract_gui::JointStateSliderWidget::jointStateChanged(std::unordered_map<std::string,double> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
