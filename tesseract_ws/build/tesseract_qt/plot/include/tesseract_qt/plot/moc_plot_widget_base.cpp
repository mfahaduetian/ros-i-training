/****************************************************************************
** Meta object code from reading C++ file 'plot_widget_base.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/tesseract_qt/plot/include/tesseract_qt/plot/plot_widget_base.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plot_widget_base.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tesseract_gui__PlotWidgetBase_t {
    QByteArrayData data[13];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tesseract_gui__PlotWidgetBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tesseract_gui__PlotWidgetBase_t qt_meta_stringdata_tesseract_gui__PlotWidgetBase = {
    {
QT_MOC_LITERAL(0, 0, 29), // "tesseract_gui::PlotWidgetBase"
QT_MOC_LITERAL(1, 30, 16), // "curveListChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 11), // "viewResized"
QT_MOC_LITERAL(4, 60, 15), // "dragEnterSignal"
QT_MOC_LITERAL(5, 76, 16), // "QDragEnterEvent*"
QT_MOC_LITERAL(6, 93, 5), // "event"
QT_MOC_LITERAL(7, 99, 10), // "dropSignal"
QT_MOC_LITERAL(8, 110, 11), // "QDropEvent*"
QT_MOC_LITERAL(9, 122, 17), // "legendSizeChanged"
QT_MOC_LITERAL(10, 140, 8), // "new_size"
QT_MOC_LITERAL(11, 149, 6), // "replot"
QT_MOC_LITERAL(12, 156, 15) // "removeAllCurves"

    },
    "tesseract_gui::PlotWidgetBase\0"
    "curveListChanged\0\0viewResized\0"
    "dragEnterSignal\0QDragEnterEvent*\0event\0"
    "dropSignal\0QDropEvent*\0legendSizeChanged\0"
    "new_size\0replot\0removeAllCurves"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tesseract_gui__PlotWidgetBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       4,    1,   53,    2, 0x06 /* Public */,
       7,    1,   56,    2, 0x06 /* Public */,
       9,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   62,    2, 0x0a /* Public */,
      12,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRectF,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    6,
    QMetaType::Void, QMetaType::Int,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tesseract_gui::PlotWidgetBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlotWidgetBase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->curveListChanged(); break;
        case 1: _t->viewResized((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 2: _t->dragEnterSignal((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 3: _t->dropSignal((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 4: _t->legendSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->replot(); break;
        case 6: _t->removeAllCurves(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlotWidgetBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidgetBase::curveListChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlotWidgetBase::*)(const QRectF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidgetBase::viewResized)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlotWidgetBase::*)(QDragEnterEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidgetBase::dragEnterSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlotWidgetBase::*)(QDropEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidgetBase::dropSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PlotWidgetBase::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidgetBase::legendSizeChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tesseract_gui::PlotWidgetBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_tesseract_gui__PlotWidgetBase.data,
    qt_meta_data_tesseract_gui__PlotWidgetBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tesseract_gui::PlotWidgetBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tesseract_gui::PlotWidgetBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tesseract_gui__PlotWidgetBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tesseract_gui::PlotWidgetBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void tesseract_gui::PlotWidgetBase::curveListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void tesseract_gui::PlotWidgetBase::viewResized(const QRectF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void tesseract_gui::PlotWidgetBase::dragEnterSignal(QDragEnterEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void tesseract_gui::PlotWidgetBase::dropSignal(QDropEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void tesseract_gui::PlotWidgetBase::legendSizeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
