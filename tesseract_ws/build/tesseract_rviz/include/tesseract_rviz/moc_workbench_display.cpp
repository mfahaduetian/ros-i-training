/****************************************************************************
** Meta object code from reading C++ file 'workbench_display.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/tesseract_ros2/tesseract_rviz/include/tesseract_rviz/workbench_display.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'workbench_display.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tesseract_rviz__WorkbenchDisplay_t {
    QByteArrayData data[6];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tesseract_rviz__WorkbenchDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tesseract_rviz__WorkbenchDisplay_t qt_meta_stringdata_tesseract_rviz__WorkbenchDisplay = {
    {
QT_MOC_LITERAL(0, 0, 32), // "tesseract_rviz::WorkbenchDisplay"
QT_MOC_LITERAL(1, 33, 15), // "onEnableChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 22), // "onComponentInfoChanged"
QT_MOC_LITERAL(4, 73, 51), // "std::shared_ptr<const tessera..."
QT_MOC_LITERAL(5, 125, 14) // "component_info"

    },
    "tesseract_rviz::WorkbenchDisplay\0"
    "onEnableChanged\0\0onComponentInfoChanged\0"
    "std::shared_ptr<const tesseract_gui::ComponentInfo>\0"
    "component_info"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tesseract_rviz__WorkbenchDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void tesseract_rviz::WorkbenchDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WorkbenchDisplay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onEnableChanged(); break;
        case 1: _t->onComponentInfoChanged((*reinterpret_cast< std::shared_ptr<const tesseract_gui::ComponentInfo>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tesseract_rviz::WorkbenchDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::Display::staticMetaObject>(),
    qt_meta_stringdata_tesseract_rviz__WorkbenchDisplay.data,
    qt_meta_data_tesseract_rviz__WorkbenchDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tesseract_rviz::WorkbenchDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tesseract_rviz::WorkbenchDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tesseract_rviz__WorkbenchDisplay.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::Display::qt_metacast(_clname);
}

int tesseract_rviz::WorkbenchDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::Display::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
