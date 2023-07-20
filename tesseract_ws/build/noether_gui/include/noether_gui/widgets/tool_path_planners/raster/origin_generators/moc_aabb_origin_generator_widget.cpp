/****************************************************************************
** Meta object code from reading C++ file 'aabb_origin_generator_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../src/noether/noether_gui/include/noether_gui/widgets/tool_path_planners/raster/origin_generators/aabb_origin_generator_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aabb_origin_generator_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_noether__AABBOriginGeneratorWidget_t {
    QByteArrayData data[1];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_noether__AABBOriginGeneratorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_noether__AABBOriginGeneratorWidget_t qt_meta_stringdata_noether__AABBOriginGeneratorWidget = {
    {
QT_MOC_LITERAL(0, 0, 34) // "noether::AABBOriginGeneratorW..."

    },
    "noether::AABBOriginGeneratorWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_noether__AABBOriginGeneratorWidget[] = {

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

void noether::AABBOriginGeneratorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject noether::AABBOriginGeneratorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<OriginGeneratorWidget::staticMetaObject>(),
    qt_meta_stringdata_noether__AABBOriginGeneratorWidget.data,
    qt_meta_data_noether__AABBOriginGeneratorWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *noether::AABBOriginGeneratorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *noether::AABBOriginGeneratorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_noether__AABBOriginGeneratorWidget.stringdata0))
        return static_cast<void*>(this);
    return OriginGeneratorWidget::qt_metacast(_clname);
}

int noether::AABBOriginGeneratorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OriginGeneratorWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
