/****************************************************************************
** Meta object code from reading C++ file 'Main_Window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Main_Window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Main_Window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MAIN_WINDOW_t {
    QByteArrayData data[12];
    char stringdata[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MAIN_WINDOW_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MAIN_WINDOW_t qt_meta_stringdata_MAIN_WINDOW = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 7),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 13),
QT_MOC_LITERAL(4, 35, 11),
QT_MOC_LITERAL(5, 47, 2),
QT_MOC_LITERAL(6, 50, 8),
QT_MOC_LITERAL(7, 59, 2),
QT_MOC_LITERAL(8, 62, 8),
QT_MOC_LITERAL(9, 71, 9),
QT_MOC_LITERAL(10, 81, 4),
QT_MOC_LITERAL(11, 86, 12)
    },
    "MAIN_WINDOW\0refresh\0\0addSizeSlider\0"
    "setToolSize\0sz\0linkTool\0id\0getImage\0"
    "drawImage\0save\0colourPicker\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MAIN_WINDOW[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08,
       3,    0,   55,    2, 0x08,
       4,    1,   56,    2, 0x08,
       6,    1,   59,    2, 0x08,
       8,    0,   62,    2, 0x08,
       9,    0,   63,    2, 0x08,
      10,    0,   64,    2, 0x08,
      11,    0,   65,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MAIN_WINDOW::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MAIN_WINDOW *_t = static_cast<MAIN_WINDOW *>(_o);
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->addSizeSlider(); break;
        case 2: _t->setToolSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->linkTool((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->getImage(); break;
        case 5: _t->drawImage(); break;
        case 6: _t->save(); break;
        case 7: _t->colourPicker(); break;
        default: ;
        }
    }
}

const QMetaObject MAIN_WINDOW::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MAIN_WINDOW.data,
      qt_meta_data_MAIN_WINDOW,  qt_static_metacall, 0, 0}
};


const QMetaObject *MAIN_WINDOW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MAIN_WINDOW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MAIN_WINDOW.stringdata))
        return static_cast<void*>(const_cast< MAIN_WINDOW*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MAIN_WINDOW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
