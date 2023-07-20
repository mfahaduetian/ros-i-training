/****************************************************************************
** Meta object code from reading C++ file 'srdf_editor_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/tesseract_qt/srdf/include/tesseract_qt/srdf/srdf_editor_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'srdf_editor_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tesseract_gui__SRDFEditorWidget_t {
    QByteArrayData data[12];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tesseract_gui__SRDFEditorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tesseract_gui__SRDFEditorWidget_t qt_meta_stringdata_tesseract_gui__SRDFEditorWidget = {
    {
QT_MOC_LITERAL(0, 0, 31), // "tesseract_gui::SRDFEditorWidget"
QT_MOC_LITERAL(1, 32, 17), // "showStatusMessage"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 7), // "message"
QT_MOC_LITERAL(4, 59, 7), // "timeout"
QT_MOC_LITERAL(5, 67, 6), // "onLoad"
QT_MOC_LITERAL(6, 74, 13), // "urdf_filepath"
QT_MOC_LITERAL(7, 88, 13), // "srdf_filepath"
QT_MOC_LITERAL(8, 102, 6), // "onSave"
QT_MOC_LITERAL(9, 109, 23), // "onBrowseURDFLoadClicked"
QT_MOC_LITERAL(10, 133, 23), // "onBrowseSRDFLoadClicked"
QT_MOC_LITERAL(11, 157, 23) // "onBrowseSRDFSaveClicked"

    },
    "tesseract_gui::SRDFEditorWidget\0"
    "showStatusMessage\0\0message\0timeout\0"
    "onLoad\0urdf_filepath\0srdf_filepath\0"
    "onSave\0onBrowseURDFLoadClicked\0"
    "onBrowseSRDFLoadClicked\0onBrowseSRDFSaveClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tesseract_gui__SRDFEditorWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   59,    2, 0x0a /* Public */,
       8,    1,   64,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x0a /* Public */,
      10,    0,   68,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x0a /* Public */,
       5,    0,   70,    2, 0x09 /* Protected */,
       8,    0,   71,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tesseract_gui::SRDFEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SRDFEditorWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showStatusMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onLoad((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->onSave((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onBrowseURDFLoadClicked(); break;
        case 4: _t->onBrowseSRDFLoadClicked(); break;
        case 5: _t->onBrowseSRDFSaveClicked(); break;
        case 6: _t->onLoad(); break;
        case 7: _t->onSave(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SRDFEditorWidget::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SRDFEditorWidget::showStatusMessage)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tesseract_gui::SRDFEditorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_tesseract_gui__SRDFEditorWidget.data,
    qt_meta_data_tesseract_gui__SRDFEditorWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tesseract_gui::SRDFEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tesseract_gui::SRDFEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tesseract_gui__SRDFEditorWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int tesseract_gui::SRDFEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void tesseract_gui::SRDFEditorWidget::showStatusMessage(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
