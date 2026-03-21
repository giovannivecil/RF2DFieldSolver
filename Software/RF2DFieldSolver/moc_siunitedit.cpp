/****************************************************************************
** Meta object code from reading C++ file 'siunitedit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "CustomWidgets/siunitedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'siunitedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SIUnitEdit_t {
    const uint offsetsAndSize[26];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SIUnitEdit_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SIUnitEdit_t qt_meta_stringdata_SIUnitEdit = {
    {
QT_MOC_LITERAL(0, 10), // "SIUnitEdit"
QT_MOC_LITERAL(11, 12), // "valueChanged"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 8), // "newvalue"
QT_MOC_LITERAL(34, 12), // "valueUpdated"
QT_MOC_LITERAL(47, 8), // "QWidget*"
QT_MOC_LITERAL(56, 1), // "w"
QT_MOC_LITERAL(58, 14), // "editingAborted"
QT_MOC_LITERAL(73, 9), // "focusLost"
QT_MOC_LITERAL(83, 8), // "setValue"
QT_MOC_LITERAL(92, 5), // "value"
QT_MOC_LITERAL(98, 13), // "setValueQuiet"
QT_MOC_LITERAL(112, 15) // "continueEditing"

    },
    "SIUnitEdit\0valueChanged\0\0newvalue\0"
    "valueUpdated\0QWidget*\0w\0editingAborted\0"
    "focusLost\0setValue\0value\0setValueQuiet\0"
    "continueEditing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SIUnitEdit[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,
       4,    1,   59,    2, 0x06,    3 /* Public */,
       7,    0,   62,    2, 0x06,    5 /* Public */,
       8,    0,   63,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,   64,    2, 0x0a,    7 /* Public */,
      11,    1,   67,    2, 0x0a,    9 /* Public */,
      12,    0,   70,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void,

       0        // eod
};

void SIUnitEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SIUnitEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->valueUpdated((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 2: _t->editingAborted(); break;
        case 3: _t->focusLost(); break;
        case 4: _t->setValue((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->setValueQuiet((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 6: _t->continueEditing(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SIUnitEdit::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SIUnitEdit::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SIUnitEdit::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SIUnitEdit::valueUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SIUnitEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SIUnitEdit::editingAborted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SIUnitEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SIUnitEdit::focusLost)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject SIUnitEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_SIUnitEdit.offsetsAndSize,
    qt_meta_data_SIUnitEdit,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SIUnitEdit_t
, QtPrivate::TypeAndForceComplete<SIUnitEdit, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *SIUnitEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SIUnitEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SIUnitEdit.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int SIUnitEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SIUnitEdit::valueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SIUnitEdit::valueUpdated(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SIUnitEdit::editingAborted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SIUnitEdit::focusLost()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
