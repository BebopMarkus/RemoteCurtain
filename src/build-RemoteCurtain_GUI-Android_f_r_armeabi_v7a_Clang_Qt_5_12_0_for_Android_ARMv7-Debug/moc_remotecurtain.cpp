/****************************************************************************
** Meta object code from reading C++ file 'remotecurtain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RemoteCurtain_GUI/remotecurtain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remotecurtain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RemoteCurtain_t {
    QByteArrayData data[10];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemoteCurtain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemoteCurtain_t qt_meta_stringdata_RemoteCurtain = {
    {
QT_MOC_LITERAL(0, 0, 13), // "RemoteCurtain"
QT_MOC_LITERAL(1, 14, 14), // "prepareRequest"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "httpReadyRead"
QT_MOC_LITERAL(4, 44, 32), // "on_horizontalSlider_valueChanged"
QT_MOC_LITERAL(5, 77, 5), // "value"
QT_MOC_LITERAL(6, 83, 25), // "on_manuell_button_toggled"
QT_MOC_LITERAL(7, 109, 7), // "checked"
QT_MOC_LITERAL(8, 117, 27), // "on_request_button_3_clicked"
QT_MOC_LITERAL(9, 145, 27) // "on_request_button_4_clicked"

    },
    "RemoteCurtain\0prepareRequest\0\0"
    "httpReadyRead\0on_horizontalSlider_valueChanged\0"
    "value\0on_manuell_button_toggled\0checked\0"
    "on_request_button_3_clicked\0"
    "on_request_button_4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemoteCurtain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RemoteCurtain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RemoteCurtain *_t = static_cast<RemoteCurtain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->prepareRequest(); break;
        case 1: _t->httpReadyRead(); break;
        case 2: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_manuell_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_request_button_3_clicked(); break;
        case 5: _t->on_request_button_4_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RemoteCurtain::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_RemoteCurtain.data,
    qt_meta_data_RemoteCurtain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RemoteCurtain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoteCurtain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteCurtain.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int RemoteCurtain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
