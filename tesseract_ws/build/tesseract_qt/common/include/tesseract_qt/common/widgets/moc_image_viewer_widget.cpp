/****************************************************************************
** Meta object code from reading C++ file 'image_viewer_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/tesseract_qt/common/include/tesseract_qt/common/widgets/image_viewer_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'image_viewer_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tesseract_gui__ImageViewerWidget_t {
    QByteArrayData data[8];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tesseract_gui__ImageViewerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tesseract_gui__ImageViewerWidget_t qt_meta_stringdata_tesseract_gui__ImageViewerWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "tesseract_gui::ImageViewerWidget"
QT_MOC_LITERAL(1, 33, 6), // "onOpen"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6), // "onSave"
QT_MOC_LITERAL(4, 48, 8), // "onZoomIn"
QT_MOC_LITERAL(5, 57, 9), // "onZoomOut"
QT_MOC_LITERAL(6, 67, 12), // "onNormalSize"
QT_MOC_LITERAL(7, 80, 13) // "onFitToWindow"

    },
    "tesseract_gui::ImageViewerWidget\0"
    "onOpen\0\0onSave\0onZoomIn\0onZoomOut\0"
    "onNormalSize\0onFitToWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tesseract_gui__ImageViewerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tesseract_gui::ImageViewerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageViewerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onOpen(); break;
        case 1: _t->onSave(); break;
        case 2: _t->onZoomIn(); break;
        case 3: _t->onZoomOut(); break;
        case 4: _t->onNormalSize(); break;
        case 5: _t->onFitToWindow(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject tesseract_gui::ImageViewerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_tesseract_gui__ImageViewerWidget.data,
    qt_meta_data_tesseract_gui__ImageViewerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tesseract_gui::ImageViewerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tesseract_gui::ImageViewerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tesseract_gui__ImageViewerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int tesseract_gui::ImageViewerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
