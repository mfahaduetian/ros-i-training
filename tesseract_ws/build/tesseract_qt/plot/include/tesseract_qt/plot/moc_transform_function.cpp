/****************************************************************************
** Meta object code from reading C++ file 'transform_function.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/tesseract_qt/plot/include/tesseract_qt/plot/transform_function.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transform_function.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tesseract_gui__TransformFunction_t {
    QByteArrayData data[3];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tesseract_gui__TransformFunction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tesseract_gui__TransformFunction_t qt_meta_stringdata_tesseract_gui__TransformFunction = {
    {
QT_MOC_LITERAL(0, 0, 32), // "tesseract_gui::TransformFunction"
QT_MOC_LITERAL(1, 33, 17), // "parametersChanged"
QT_MOC_LITERAL(2, 51, 0) // ""

    },
    "tesseract_gui::TransformFunction\0"
    "parametersChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tesseract_gui__TransformFunction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void tesseract_gui::TransformFunction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TransformFunction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->parametersChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TransformFunction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransformFunction::parametersChanged)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject tesseract_gui::TransformFunction::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_tesseract_gui__TransformFunction.data,
    qt_meta_data_tesseract_gui__TransformFunction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tesseract_gui::TransformFunction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tesseract_gui::TransformFunction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tesseract_gui__TransformFunction.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tesseract_gui::TransformFunction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void tesseract_gui::TransformFunction::parametersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_tesseract_gui__TransformFunction_SISO_t {
    QByteArrayData data[1];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tesseract_gui__TransformFunction_SISO_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tesseract_gui__TransformFunction_SISO_t qt_meta_stringdata_tesseract_gui__TransformFunction_SISO = {
    {
QT_MOC_LITERAL(0, 0, 37) // "tesseract_gui::TransformFunct..."

    },
    "tesseract_gui::TransformFunction_SISO"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tesseract_gui__TransformFunction_SISO[] = {

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

void tesseract_gui::TransformFunction_SISO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject tesseract_gui::TransformFunction_SISO::staticMetaObject = { {
    QMetaObject::SuperData::link<TransformFunction::staticMetaObject>(),
    qt_meta_stringdata_tesseract_gui__TransformFunction_SISO.data,
    qt_meta_data_tesseract_gui__TransformFunction_SISO,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tesseract_gui::TransformFunction_SISO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tesseract_gui::TransformFunction_SISO::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tesseract_gui__TransformFunction_SISO.stringdata0))
        return static_cast<void*>(this);
    return TransformFunction::qt_metacast(_clname);
}

int tesseract_gui::TransformFunction_SISO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TransformFunction::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
