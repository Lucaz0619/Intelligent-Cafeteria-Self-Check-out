/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[22];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 19), // "on_dishRgBt_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 19), // "on_dishRgBt_pressed"
QT_MOC_LITERAL(4, 48, 20), // "on_dishRgBt_released"
QT_MOC_LITERAL(5, 69, 13), // "readDishFrame"
QT_MOC_LITERAL(6, 83, 14), // "openDishCamara"
QT_MOC_LITERAL(7, 98, 15), // "closeDishCamara"
QT_MOC_LITERAL(8, 114, 13), // "takeDishPhoto"
QT_MOC_LITERAL(9, 128, 13), // "readFaceFrame"
QT_MOC_LITERAL(10, 142, 14), // "openFaceCamara"
QT_MOC_LITERAL(11, 157, 15), // "closeFaceCamara"
QT_MOC_LITERAL(12, 173, 13), // "takeFacePhoto"
QT_MOC_LITERAL(13, 187, 11), // "timerUpdata"
QT_MOC_LITERAL(14, 199, 14), // "restart_window"
QT_MOC_LITERAL(15, 214, 10), // "show_order"
QT_MOC_LITERAL(16, 225, 4), // "int*"
QT_MOC_LITERAL(17, 230, 17), // "dishes_recognized"
QT_MOC_LITERAL(18, 248, 7), // "dishNum"
QT_MOC_LITERAL(19, 256, 12), // "make_payment"
QT_MOC_LITERAL(20, 269, 6), // "UsrIdx"
QT_MOC_LITERAL(21, 276, 13) // "faceRecognize"

    },
    "Widget\0on_dishRgBt_clicked\0\0"
    "on_dishRgBt_pressed\0on_dishRgBt_released\0"
    "readDishFrame\0openDishCamara\0"
    "closeDishCamara\0takeDishPhoto\0"
    "readFaceFrame\0openFaceCamara\0"
    "closeFaceCamara\0takeFacePhoto\0timerUpdata\0"
    "restart_window\0show_order\0int*\0"
    "dishes_recognized\0dishNum\0make_payment\0"
    "UsrIdx\0faceRecognize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    2,  107,    2, 0x08 /* Private */,
      19,    1,  112,    2, 0x08 /* Private */,
      21,    0,  115,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16, QMetaType::Int,   17,   18,
    QMetaType::Bool, QMetaType::Int,   20,
    QMetaType::Int,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_dishRgBt_clicked(); break;
        case 1: _t->on_dishRgBt_pressed(); break;
        case 2: _t->on_dishRgBt_released(); break;
        case 3: _t->readDishFrame(); break;
        case 4: _t->openDishCamara(); break;
        case 5: _t->closeDishCamara(); break;
        case 6: _t->takeDishPhoto(); break;
        case 7: _t->readFaceFrame(); break;
        case 8: _t->openFaceCamara(); break;
        case 9: _t->closeFaceCamara(); break;
        case 10: _t->takeFacePhoto(); break;
        case 11: _t->timerUpdata(); break;
        case 12: _t->restart_window(); break;
        case 13: _t->show_order((*reinterpret_cast< int*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: { bool _r = _t->make_payment((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { int _r = _t->faceRecognize();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
