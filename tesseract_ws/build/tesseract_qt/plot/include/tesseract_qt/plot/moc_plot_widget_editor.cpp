/****************************************************************************
** Meta object code from reading C++ file 'plot_widget_editor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/tesseract_qt/plot/include/tesseract_qt/plot/plot_widget_editor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plot_widget_editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tesseract_gui__EditorRowWidget_t {
    QByteArrayData data[5];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tesseract_gui__EditorRowWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tesseract_gui__EditorRowWidget_t qt_meta_stringdata_tesseract_gui__EditorRowWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "tesseract_gui::EditorRowWidget"
QT_MOC_LITERAL(1, 31, 9), // "deleteRow"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 8), // "QWidget*"
QT_MOC_LITERAL(4, 51, 5) // "_this"

    },
    "tesseract_gui::EditorRowWidget\0deleteRow\0"
    "\0QWidget*\0_this"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tesseract_gui__EditorRowWidget[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void tesseract_gui::EditorRowWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditorRowWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deleteRow((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EditorRowWidget::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditorRowWidget::deleteRow)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tesseract_gui::EditorRowWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_tesseract_gui__EditorRowWidget.data,
    qt_meta_data_tesseract_gui__EditorRowWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tesseract_gui::EditorRowWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tesseract_gui::EditorRowWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tesseract_gui__EditorRowWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int tesseract_gui::EditorRowWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void tesseract_gui::EditorRowWidget::deleteRow(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_tesseract_gui__PlotWidgetEditor_t {
    QByteArrayData data[21];
    char stringdata0[431];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tesseract_gui__PlotWidgetEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tesseract_gui__PlotWidgetEditor_t qt_meta_stringdata_tesseract_gui__PlotWidgetEditor = {
    {
QT_MOC_LITERAL(0, 0, 31), // "tesseract_gui::PlotWidgetEditor"
QT_MOC_LITERAL(1, 32, 14), // "onColorChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 1), // "c"
QT_MOC_LITERAL(4, 50, 26), // "on_editColorButton_clicked"
QT_MOC_LITERAL(5, 77, 28), // "on_editColorText_textChanged"
QT_MOC_LITERAL(6, 106, 4), // "arg1"
QT_MOC_LITERAL(7, 111, 21), // "on_radioLines_toggled"
QT_MOC_LITERAL(8, 133, 7), // "checked"
QT_MOC_LITERAL(9, 141, 22), // "on_radioPoints_toggled"
QT_MOC_LITERAL(10, 164, 20), // "on_radioBoth_toggled"
QT_MOC_LITERAL(11, 185, 22), // "on_checkBoxMax_toggled"
QT_MOC_LITERAL(12, 208, 22), // "on_checkBoxMin_toggled"
QT_MOC_LITERAL(13, 231, 26), // "on_pushButtonReset_clicked"
QT_MOC_LITERAL(14, 258, 27), // "on_pushButtonCancel_pressed"
QT_MOC_LITERAL(15, 286, 25), // "on_pushButtonSave_pressed"
QT_MOC_LITERAL(16, 312, 34), // "on_listWidget_itemSelectionCh..."
QT_MOC_LITERAL(17, 347, 27), // "on_lineLimitMin_textChanged"
QT_MOC_LITERAL(18, 375, 4), // "text"
QT_MOC_LITERAL(19, 380, 27), // "on_lineLimitMax_textChanged"
QT_MOC_LITERAL(20, 408, 22) // "on_radioSticks_toggled"

    },
    "tesseract_gui::PlotWidgetEditor\0"
    "onColorChanged\0\0c\0on_editColorButton_clicked\0"
    "on_editColorText_textChanged\0arg1\0"
    "on_radioLines_toggled\0checked\0"
    "on_radioPoints_toggled\0on_radioBoth_toggled\0"
    "on_checkBoxMax_toggled\0on_checkBoxMin_toggled\0"
    "on_pushButtonReset_clicked\0"
    "on_pushButtonCancel_pressed\0"
    "on_pushButtonSave_pressed\0"
    "on_listWidget_itemSelectionChanged\0"
    "on_lineLimitMin_textChanged\0text\0"
    "on_lineLimitMax_textChanged\0"
    "on_radioSticks_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tesseract_gui__PlotWidgetEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x0a /* Public */,
       4,    0,   92,    2, 0x08 /* Private */,
       5,    1,   93,    2, 0x08 /* Private */,
       7,    1,   96,    2, 0x08 /* Private */,
       9,    1,   99,    2, 0x08 /* Private */,
      10,    1,  102,    2, 0x08 /* Private */,
      11,    1,  105,    2, 0x08 /* Private */,
      12,    1,  108,    2, 0x08 /* Private */,
      13,    0,  111,    2, 0x08 /* Private */,
      14,    0,  112,    2, 0x08 /* Private */,
      15,    0,  113,    2, 0x08 /* Private */,
      16,    0,  114,    2, 0x08 /* Private */,
      17,    1,  115,    2, 0x08 /* Private */,
      19,    1,  118,    2, 0x08 /* Private */,
      20,    1,  121,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void tesseract_gui::PlotWidgetEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlotWidgetEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->on_editColorButton_clicked(); break;
        case 2: _t->on_editColorText_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_radioLines_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_radioPoints_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_radioBoth_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_checkBoxMax_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_checkBoxMin_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_pushButtonReset_clicked(); break;
        case 9: _t->on_pushButtonCancel_pressed(); break;
        case 10: _t->on_pushButtonSave_pressed(); break;
        case 11: _t->on_listWidget_itemSelectionChanged(); break;
        case 12: _t->on_lineLimitMin_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->on_lineLimitMax_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->on_radioSticks_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tesseract_gui::PlotWidgetEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_tesseract_gui__PlotWidgetEditor.data,
    qt_meta_data_tesseract_gui__PlotWidgetEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tesseract_gui::PlotWidgetEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tesseract_gui::PlotWidgetEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tesseract_gui__PlotWidgetEditor.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int tesseract_gui::PlotWidgetEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
