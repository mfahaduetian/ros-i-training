/****************************************************************************
** Meta object code from reading C++ file 'group_joint_states_editor_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/tesseract_qt/kinematic_groups/include/tesseract_qt/kinematic_groups/widgets/group_joint_states_editor_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'group_joint_states_editor_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tesseract_gui__GroupJointStatesEditorWidget_t {
    QByteArrayData data[10];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tesseract_gui__GroupJointStatesEditorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tesseract_gui__GroupJointStatesEditorWidget_t qt_meta_stringdata_tesseract_gui__GroupJointStatesEditorWidget = {
    {
QT_MOC_LITERAL(0, 0, 43), // "tesseract_gui::GroupJointStat..."
QT_MOC_LITERAL(1, 44, 17), // "jointStateChanged"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 38), // "std::unordered_map<std::strin..."
QT_MOC_LITERAL(4, 102, 5), // "state"
QT_MOC_LITERAL(5, 108, 18), // "onGroupNameChanged"
QT_MOC_LITERAL(6, 127, 15), // "onAddJointState"
QT_MOC_LITERAL(7, 143, 18), // "onRemoveJointState"
QT_MOC_LITERAL(8, 162, 7), // "onApply"
QT_MOC_LITERAL(9, 170, 14) // "onUpdateModels"

    },
    "tesseract_gui::GroupJointStatesEditorWidget\0"
    "jointStateChanged\0\0"
    "std::unordered_map<std::string,double>\0"
    "state\0onGroupNameChanged\0onAddJointState\0"
    "onRemoveJointState\0onApply\0onUpdateModels"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tesseract_gui__GroupJointStatesEditorWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,
       8,    0,   50,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tesseract_gui::GroupJointStatesEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GroupJointStatesEditorWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->jointStateChanged((*reinterpret_cast< std::unordered_map<std::string,double>(*)>(_a[1]))); break;
        case 1: _t->onGroupNameChanged(); break;
        case 2: _t->onAddJointState(); break;
        case 3: _t->onRemoveJointState(); break;
        case 4: _t->onApply(); break;
        case 5: _t->onUpdateModels(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GroupJointStatesEditorWidget::*)(std::unordered_map<std::string,double> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroupJointStatesEditorWidget::jointStateChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tesseract_gui::GroupJointStatesEditorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_tesseract_gui__GroupJointStatesEditorWidget.data,
    qt_meta_data_tesseract_gui__GroupJointStatesEditorWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tesseract_gui::GroupJointStatesEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tesseract_gui::GroupJointStatesEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tesseract_gui__GroupJointStatesEditorWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int tesseract_gui::GroupJointStatesEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void tesseract_gui::GroupJointStatesEditorWidget::jointStateChanged(std::unordered_map<std::string,double> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
