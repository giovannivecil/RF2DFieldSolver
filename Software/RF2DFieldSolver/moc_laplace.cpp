/****************************************************************************
** Meta object code from reading C++ file 'laplace.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "laplace/laplace.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'laplace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Laplace_t {
    const uint offsetsAndSize[18];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Laplace_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Laplace_t qt_meta_stringdata_Laplace = {
    {
QT_MOC_LITERAL(0, 7), // "Laplace"
QT_MOC_LITERAL(8, 10), // "percentage"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 7), // "percent"
QT_MOC_LITERAL(28, 15), // "calculationDone"
QT_MOC_LITERAL(44, 18), // "calculationAborted"
QT_MOC_LITERAL(63, 4), // "info"
QT_MOC_LITERAL(68, 7), // "warning"
QT_MOC_LITERAL(76, 5) // "error"

    },
    "Laplace\0percentage\0\0percent\0calculationDone\0"
    "calculationAborted\0info\0warning\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Laplace[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       4,    0,   53,    2, 0x06,    3 /* Public */,
       5,    0,   54,    2, 0x06,    4 /* Public */,
       6,    1,   55,    2, 0x06,    5 /* Public */,
       7,    1,   58,    2, 0x06,    7 /* Public */,
       8,    1,   61,    2, 0x06,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void Laplace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Laplace *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->percentage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->calculationDone(); break;
        case 2: _t->calculationAborted(); break;
        case 3: _t->info((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->warning((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Laplace::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Laplace::percentage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Laplace::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Laplace::calculationDone)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Laplace::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Laplace::calculationAborted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Laplace::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Laplace::info)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Laplace::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Laplace::warning)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Laplace::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Laplace::error)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject Laplace::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Laplace.offsetsAndSize,
    qt_meta_data_Laplace,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Laplace_t
, QtPrivate::TypeAndForceComplete<Laplace, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>



>,
    nullptr
} };


const QMetaObject *Laplace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Laplace::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Laplace.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Laplace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Laplace::percentage(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Laplace::calculationDone()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Laplace::calculationAborted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Laplace::info(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Laplace::warning(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Laplace::error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
