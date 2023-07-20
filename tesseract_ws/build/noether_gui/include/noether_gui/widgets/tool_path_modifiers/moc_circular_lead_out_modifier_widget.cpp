/****************************************************************************
** Meta object code from reading C++ file 'circular_lead_out_modifier_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/noether/noether_gui/include/noether_gui/widgets/tool_path_modifiers/circular_lead_out_modifier_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'circular_lead_out_modifier_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_noether__CircularLeadOutToolPathModifierWidget_t {
    QByteArrayData data[1];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_noether__CircularLeadOutToolPathModifierWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_noether__CircularLeadOutToolPathModifierWidget_t qt_meta_stringdata_noether__CircularLeadOutToolPathModifierWidget = {
    {
QT_MOC_LITERAL(0, 0, 46) // "noether::CircularLeadOutToolP..."

    },
    "noether::CircularLeadOutToolPathModifierWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_noether__CircularLeadOutToolPathModifierWidget[] = {

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

void noether::CircularLeadOutToolPathModifierWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject noether::CircularLeadOutToolPathModifierWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<ToolPathModifierWidget::staticMetaObject>(),
    qt_meta_stringdata_noether__CircularLeadOutToolPathModifierWidget.data,
    qt_meta_data_noether__CircularLeadOutToolPathModifierWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *noether::CircularLeadOutToolPathModifierWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *noether::CircularLeadOutToolPathModifierWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_noether__CircularLeadOutToolPathModifierWidget.stringdata0))
        return static_cast<void*>(this);
    return ToolPathModifierWidget::qt_metacast(_clname);
}

int noether::CircularLeadOutToolPathModifierWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToolPathModifierWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
