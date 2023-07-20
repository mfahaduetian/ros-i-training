/****************************************************************************
** Meta object code from reading C++ file 'studio_plugin_loader_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/tesseract_qt/studio/include/tesseract_qt/studio/studio_plugin_loader_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'studio_plugin_loader_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tesseract_gui__StudioPluginLoaderDialog_t {
    QByteArrayData data[8];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tesseract_gui__StudioPluginLoaderDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tesseract_gui__StudioPluginLoaderDialog_t qt_meta_stringdata_tesseract_gui__StudioPluginLoaderDialog = {
    {
QT_MOC_LITERAL(0, 0, 39), // "tesseract_gui::StudioPluginLo..."
QT_MOC_LITERAL(1, 40, 25), // "showSearchPathContextMenu"
QT_MOC_LITERAL(2, 66, 0), // ""
QT_MOC_LITERAL(3, 67, 3), // "pos"
QT_MOC_LITERAL(4, 71, 28), // "showSearchLibraryContextMenu"
QT_MOC_LITERAL(5, 100, 15), // "addPluginWidget"
QT_MOC_LITERAL(6, 116, 30), // "refreshSearchPathsAndLibraries"
QT_MOC_LITERAL(7, 147, 18) // "generateUniqueName"

    },
    "tesseract_gui::StudioPluginLoaderDialog\0"
    "showSearchPathContextMenu\0\0pos\0"
    "showSearchLibraryContextMenu\0"
    "addPluginWidget\0refreshSearchPathsAndLibraries\0"
    "generateUniqueName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tesseract_gui__StudioPluginLoaderDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       5,    0,   45,    2, 0x08 /* Private */,
       6,    0,   46,    2, 0x08 /* Private */,
       7,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tesseract_gui::StudioPluginLoaderDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StudioPluginLoaderDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showSearchPathContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->showSearchLibraryContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->addPluginWidget(); break;
        case 3: _t->refreshSearchPathsAndLibraries(); break;
        case 4: _t->generateUniqueName(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tesseract_gui::StudioPluginLoaderDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_tesseract_gui__StudioPluginLoaderDialog.data,
    qt_meta_data_tesseract_gui__StudioPluginLoaderDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tesseract_gui::StudioPluginLoaderDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tesseract_gui::StudioPluginLoaderDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tesseract_gui__StudioPluginLoaderDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int tesseract_gui::StudioPluginLoaderDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
