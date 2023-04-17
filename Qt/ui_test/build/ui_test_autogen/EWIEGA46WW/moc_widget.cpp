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
    QByteArrayData data[17];
    char stringdata0[266];
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
QT_MOC_LITERAL(5, 69, 19), // "on_faceRgBt_clicked"
QT_MOC_LITERAL(6, 89, 19), // "on_faceRgBt_pressed"
QT_MOC_LITERAL(7, 109, 20), // "on_faceRgBt_released"
QT_MOC_LITERAL(8, 130, 13), // "readDishFrame"
QT_MOC_LITERAL(9, 144, 14), // "openDishCamara"
QT_MOC_LITERAL(10, 159, 15), // "closeDishCamara"
QT_MOC_LITERAL(11, 175, 13), // "takeDishPhoto"
QT_MOC_LITERAL(12, 189, 13), // "readFaceFrame"
QT_MOC_LITERAL(13, 203, 14), // "openFaceCamara"
QT_MOC_LITERAL(14, 218, 15), // "closeFaceCamara"
QT_MOC_LITERAL(15, 234, 13), // "takeFacePhoto"
QT_MOC_LITERAL(16, 248, 17) // "on_csvWBt_clicked"

    },
    "Widget\0on_dishRgBt_clicked\0\0"
    "on_dishRgBt_pressed\0on_dishRgBt_released\0"
    "on_faceRgBt_clicked\0on_faceRgBt_pressed\0"
    "on_faceRgBt_released\0readDishFrame\0"
    "openDishCamara\0closeDishCamara\0"
    "takeDishPhoto\0readFaceFrame\0openFaceCamara\0"
    "closeFaceCamara\0takeFacePhoto\0"
    "on_csvWBt_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

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
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,

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
        case 3: _t->on_faceRgBt_clicked(); break;
        case 4: _t->on_faceRgBt_pressed(); break;
        case 5: _t->on_faceRgBt_released(); break;
        case 6: _t->readDishFrame(); break;
        case 7: _t->openDishCamara(); break;
        case 8: _t->closeDishCamara(); break;
        case 9: _t->takeDishPhoto(); break;
        case 10: _t->readFaceFrame(); break;
        case 11: _t->openFaceCamara(); break;
        case 12: _t->closeFaceCamara(); break;
        case 13: _t->takeFacePhoto(); break;
        case 14: _t->on_csvWBt_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
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
