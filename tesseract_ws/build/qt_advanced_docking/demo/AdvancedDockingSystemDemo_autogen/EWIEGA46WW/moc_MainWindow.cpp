/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Qt-Advanced-Docking-System/demo/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CMainWindow_t {
    QByteArrayData data[14];
    char stringdata0[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CMainWindow_t qt_meta_stringdata_CMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CMainWindow"
QT_MOC_LITERAL(1, 12, 28), // "on_actionSaveState_triggered"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 31), // "on_actionRestoreState_triggered"
QT_MOC_LITERAL(4, 74, 15), // "savePerspective"
QT_MOC_LITERAL(5, 90, 13), // "onViewToggled"
QT_MOC_LITERAL(6, 104, 4), // "Open"
QT_MOC_LITERAL(7, 109, 23), // "onViewVisibilityChanged"
QT_MOC_LITERAL(8, 133, 7), // "Visible"
QT_MOC_LITERAL(9, 141, 12), // "createEditor"
QT_MOC_LITERAL(10, 154, 11), // "createTable"
QT_MOC_LITERAL(11, 166, 22), // "onEditorCloseRequested"
QT_MOC_LITERAL(12, 189, 16), // "showStatusDialog"
QT_MOC_LITERAL(13, 206, 27) // "toggleDockWidgetWindowTitle"

    },
    "CMainWindow\0on_actionSaveState_triggered\0"
    "\0on_actionRestoreState_triggered\0"
    "savePerspective\0onViewToggled\0Open\0"
    "onViewVisibilityChanged\0Visible\0"
    "createEditor\0createTable\0"
    "onEditorCloseRequested\0showStatusDialog\0"
    "toggleDockWidgetWindowTitle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       3,    1,   67,    2, 0x08 /* Private */,
       4,    0,   70,    2, 0x08 /* Private */,
       5,    1,   71,    2, 0x08 /* Private */,
       7,    1,   74,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CMainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionSaveState_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_actionRestoreState_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->savePerspective(); break;
        case 3: _t->onViewToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onViewVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->createEditor(); break;
        case 6: _t->createTable(); break;
        case 7: _t->onEditorCloseRequested(); break;
        case 8: _t->showStatusDialog(); break;
        case 9: _t->toggleDockWidgetWindowTitle(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CMainWindow.data,
    qt_meta_data_CMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
