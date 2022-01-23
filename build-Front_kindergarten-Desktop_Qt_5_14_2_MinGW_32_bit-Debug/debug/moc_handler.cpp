/****************************************************************************
** Meta object code from reading C++ file 'handler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Front_kindergarten/handler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'handler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Handler_t {
    QByteArrayData data[21];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Handler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Handler_t qt_meta_stringdata_Handler = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Handler"
QT_MOC_LITERAL(1, 8, 7), // "teacher"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 5), // "child"
QT_MOC_LITERAL(4, 23, 7), // "manager"
QT_MOC_LITERAL(5, 31, 7), // "unknown"
QT_MOC_LITERAL(6, 39, 15), // "correcthomework"
QT_MOC_LITERAL(7, 55, 13), // "wronghomewotk"
QT_MOC_LITERAL(8, 69, 17), // "correctdohomework"
QT_MOC_LITERAL(9, 87, 15), // "wrongdohomework"
QT_MOC_LITERAL(10, 103, 9), // "loginUser"
QT_MOC_LITERAL(11, 113, 8), // "username"
QT_MOC_LITERAL(12, 122, 8), // "password"
QT_MOC_LITERAL(13, 131, 11), // "userteacher"
QT_MOC_LITERAL(14, 143, 4), // "num1"
QT_MOC_LITERAL(15, 148, 4), // "num2"
QT_MOC_LITERAL(16, 153, 7), // "getnum1"
QT_MOC_LITERAL(17, 161, 7), // "getnum2"
QT_MOC_LITERAL(18, 169, 7), // "setnum1"
QT_MOC_LITERAL(19, 177, 7), // "setnum2"
QT_MOC_LITERAL(20, 185, 10) // "doHomework"

    },
    "Handler\0teacher\0\0child\0manager\0unknown\0"
    "correcthomework\0wronghomewotk\0"
    "correctdohomework\0wrongdohomework\0"
    "loginUser\0username\0password\0userteacher\0"
    "num1\0num2\0getnum1\0getnum2\0setnum1\0"
    "setnum2\0doHomework"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Handler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    0,   91,    2, 0x06 /* Public */,
       5,    0,   92,    2, 0x06 /* Public */,
       6,    0,   93,    2, 0x06 /* Public */,
       7,    0,   94,    2, 0x06 /* Public */,
       8,    0,   95,    2, 0x06 /* Public */,
       9,    0,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   97,    2, 0x0a /* Public */,
      13,    2,  102,    2, 0x0a /* Public */,
      16,    0,  107,    2, 0x0a /* Public */,
      17,    0,  108,    2, 0x0a /* Public */,
      18,    1,  109,    2, 0x0a /* Public */,
      19,    1,  112,    2, 0x0a /* Public */,
      20,    1,  115,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Handler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Handler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->teacher(); break;
        case 1: _t->child(); break;
        case 2: _t->manager(); break;
        case 3: _t->unknown(); break;
        case 4: _t->correcthomework(); break;
        case 5: _t->wronghomewotk(); break;
        case 6: _t->correctdohomework(); break;
        case 7: _t->wrongdohomework(); break;
        case 8: _t->loginUser((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->userteacher((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: { int _r = _t->getnum1();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 11: { int _r = _t->getnum2();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->setnum1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setnum2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->doHomework((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Handler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Handler::teacher)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Handler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Handler::child)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Handler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Handler::manager)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Handler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Handler::unknown)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Handler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Handler::correcthomework)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Handler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Handler::wronghomewotk)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Handler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Handler::correctdohomework)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Handler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Handler::wrongdohomework)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Handler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Handler.data,
    qt_meta_data_Handler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Handler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Handler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Handler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Handler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Handler::teacher()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Handler::child()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Handler::manager()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Handler::unknown()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Handler::correcthomework()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Handler::wronghomewotk()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Handler::correctdohomework()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Handler::wrongdohomework()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
