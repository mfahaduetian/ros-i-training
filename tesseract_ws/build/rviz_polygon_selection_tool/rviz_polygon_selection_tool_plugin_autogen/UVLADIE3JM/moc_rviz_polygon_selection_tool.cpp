/****************************************************************************
** Meta object code from reading C++ file 'rviz_polygon_selection_tool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/rviz_polygon_selection_tool/src/rviz_polygon_selection_tool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rviz_polygon_selection_tool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_polygon_selection_tool__PolygonSelectionTool_t {
    QByteArrayData data[6];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_polygon_selection_tool__PolygonSelectionTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_polygon_selection_tool__PolygonSelectionTool_t qt_meta_stringdata_rviz_polygon_selection_tool__PolygonSelectionTool = {
    {
QT_MOC_LITERAL(0, 0, 49), // "rviz_polygon_selection_tool::..."
QT_MOC_LITERAL(1, 50, 14), // "updatePtsColor"
QT_MOC_LITERAL(2, 65, 0), // ""
QT_MOC_LITERAL(3, 66, 13), // "updatePtsSize"
QT_MOC_LITERAL(4, 80, 16), // "updateLinesColor"
QT_MOC_LITERAL(5, 97, 12) // "updateVisual"

    },
    "rviz_polygon_selection_tool::PolygonSelectionTool\0"
    "updatePtsColor\0\0updatePtsSize\0"
    "updateLinesColor\0updateVisual"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_polygon_selection_tool__PolygonSelectionTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rviz_polygon_selection_tool::PolygonSelectionTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PolygonSelectionTool *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updatePtsColor(); break;
        case 1: _t->updatePtsSize(); break;
        case 2: _t->updateLinesColor(); break;
        case 3: _t->updateVisual(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject rviz_polygon_selection_tool::PolygonSelectionTool::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::Tool::staticMetaObject>(),
    qt_meta_stringdata_rviz_polygon_selection_tool__PolygonSelectionTool.data,
    qt_meta_data_rviz_polygon_selection_tool__PolygonSelectionTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_polygon_selection_tool::PolygonSelectionTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_polygon_selection_tool::PolygonSelectionTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_polygon_selection_tool__PolygonSelectionTool.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::Tool::qt_metacast(_clname);
}

int rviz_polygon_selection_tool::PolygonSelectionTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::Tool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
