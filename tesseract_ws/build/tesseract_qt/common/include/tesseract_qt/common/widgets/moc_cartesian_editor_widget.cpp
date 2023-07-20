/****************************************************************************
** Meta object code from reading C++ file 'cartesian_editor_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/tesseract_qt/common/include/tesseract_qt/common/widgets/cartesian_editor_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cartesian_editor_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tesseract_gui__CartesianEditorWidget_t {
    QByteArrayData data[17];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tesseract_gui__CartesianEditorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tesseract_gui__CartesianEditorWidget_t qt_meta_stringdata_tesseract_gui__CartesianEditorWidget = {
    {
QT_MOC_LITERAL(0, 0, 36), // "tesseract_gui::CartesianEdito..."
QT_MOC_LITERAL(1, 37, 15), // "positionChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 15), // "Eigen::Vector3d"
QT_MOC_LITERAL(4, 70, 3), // "xyz"
QT_MOC_LITERAL(5, 74, 18), // "orientationChanged"
QT_MOC_LITERAL(6, 93, 18), // "Eigen::Quaterniond"
QT_MOC_LITERAL(7, 112, 4), // "xyzw"
QT_MOC_LITERAL(8, 117, 16), // "transformChanged"
QT_MOC_LITERAL(9, 134, 17), // "Eigen::Isometry3d"
QT_MOC_LITERAL(10, 152, 9), // "transform"
QT_MOC_LITERAL(11, 162, 11), // "setPosition"
QT_MOC_LITERAL(12, 174, 14), // "setOrientation"
QT_MOC_LITERAL(13, 189, 12), // "setTransform"
QT_MOC_LITERAL(14, 202, 17), // "onPositionChanged"
QT_MOC_LITERAL(15, 220, 12), // "onRPYChanged"
QT_MOC_LITERAL(16, 233, 19) // "onQuaternionChanged"

    },
    "tesseract_gui::CartesianEditorWidget\0"
    "positionChanged\0\0Eigen::Vector3d\0xyz\0"
    "orientationChanged\0Eigen::Quaterniond\0"
    "xyzw\0transformChanged\0Eigen::Isometry3d\0"
    "transform\0setPosition\0setOrientation\0"
    "setTransform\0onPositionChanged\0"
    "onRPYChanged\0onQuaternionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tesseract_gui__CartesianEditorWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       8,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   68,    2, 0x0a /* Public */,
      12,    1,   71,    2, 0x0a /* Public */,
      13,    1,   74,    2, 0x0a /* Public */,
      14,    0,   77,    2, 0x08 /* Private */,
      15,    0,   78,    2, 0x08 /* Private */,
      16,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tesseract_gui::CartesianEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CartesianEditorWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->positionChanged((*reinterpret_cast< const Eigen::Vector3d(*)>(_a[1]))); break;
        case 1: _t->orientationChanged((*reinterpret_cast< const Eigen::Quaterniond(*)>(_a[1]))); break;
        case 2: _t->transformChanged((*reinterpret_cast< const Eigen::Isometry3d(*)>(_a[1]))); break;
        case 3: _t->setPosition((*reinterpret_cast< const Eigen::Vector3d(*)>(_a[1]))); break;
        case 4: _t->setOrientation((*reinterpret_cast< const Eigen::Quaterniond(*)>(_a[1]))); break;
        case 5: _t->setTransform((*reinterpret_cast< const Eigen::Isometry3d(*)>(_a[1]))); break;
        case 6: _t->onPositionChanged(); break;
        case 7: _t->onRPYChanged(); break;
        case 8: _t->onQuaternionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CartesianEditorWidget::*)(const Eigen::Vector3d & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CartesianEditorWidget::positionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CartesianEditorWidget::*)(const Eigen::Quaterniond & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CartesianEditorWidget::orientationChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CartesianEditorWidget::*)(const Eigen::Isometry3d & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CartesianEditorWidget::transformChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tesseract_gui::CartesianEditorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_tesseract_gui__CartesianEditorWidget.data,
    qt_meta_data_tesseract_gui__CartesianEditorWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tesseract_gui::CartesianEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tesseract_gui::CartesianEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tesseract_gui__CartesianEditorWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int tesseract_gui::CartesianEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void tesseract_gui::CartesianEditorWidget::positionChanged(const Eigen::Vector3d & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tesseract_gui::CartesianEditorWidget::orientationChanged(const Eigen::Quaterniond & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void tesseract_gui::CartesianEditorWidget::transformChanged(const Eigen::Isometry3d & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
