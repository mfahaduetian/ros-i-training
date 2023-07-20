/****************************************************************************
** Meta object code from reading C++ file 'kinematic_groups_editor_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/tesseract_qt/kinematic_groups/include/tesseract_qt/kinematic_groups/widgets/kinematic_groups_editor_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kinematic_groups_editor_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tesseract_gui__KinematicGroupsEditorWidget_t {
    QByteArrayData data[11];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tesseract_gui__KinematicGroupsEditorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tesseract_gui__KinematicGroupsEditorWidget_t qt_meta_stringdata_tesseract_gui__KinematicGroupsEditorWidget = {
    {
QT_MOC_LITERAL(0, 0, 42), // "tesseract_gui::KinematicGroup..."
QT_MOC_LITERAL(1, 43, 10), // "onAddGroup"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 13), // "onRemoveGroup"
QT_MOC_LITERAL(4, 69, 10), // "onAddJoint"
QT_MOC_LITERAL(5, 80, 13), // "onRemoveJoint"
QT_MOC_LITERAL(6, 94, 9), // "onAddLink"
QT_MOC_LITERAL(7, 104, 12), // "onRemoveLink"
QT_MOC_LITERAL(8, 117, 7), // "onApply"
QT_MOC_LITERAL(9, 125, 22), // "onUpdateLinkNamesModel"
QT_MOC_LITERAL(10, 148, 23) // "onUpdateJointNamesModel"

    },
    "tesseract_gui::KinematicGroupsEditorWidget\0"
    "onAddGroup\0\0onRemoveGroup\0onAddJoint\0"
    "onRemoveJoint\0onAddLink\0onRemoveLink\0"
    "onApply\0onUpdateLinkNamesModel\0"
    "onUpdateJointNamesModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tesseract_gui__KinematicGroupsEditorWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tesseract_gui::KinematicGroupsEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KinematicGroupsEditorWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAddGroup(); break;
        case 1: _t->onRemoveGroup(); break;
        case 2: _t->onAddJoint(); break;
        case 3: _t->onRemoveJoint(); break;
        case 4: _t->onAddLink(); break;
        case 5: _t->onRemoveLink(); break;
        case 6: _t->onApply(); break;
        case 7: _t->onUpdateLinkNamesModel(); break;
        case 8: _t->onUpdateJointNamesModel(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject tesseract_gui::KinematicGroupsEditorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_tesseract_gui__KinematicGroupsEditorWidget.data,
    qt_meta_data_tesseract_gui__KinematicGroupsEditorWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tesseract_gui::KinematicGroupsEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tesseract_gui::KinematicGroupsEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tesseract_gui__KinematicGroupsEditorWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int tesseract_gui::KinematicGroupsEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
