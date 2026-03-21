/****************************************************************************
** Meta object code from reading C++ file 'scenario.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "Scenarios/scenario.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scenario.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Scenario_t {
    const uint offsetsAndSize[14];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Scenario_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Scenario_t qt_meta_stringdata_Scenario = {
    {
QT_MOC_LITERAL(0, 8), // "Scenario"
QT_MOC_LITERAL(9, 15), // "scenarioCreated"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 7), // "topLeft"
QT_MOC_LITERAL(34, 11), // "bottomRight"
QT_MOC_LITERAL(46, 12), // "ElementList*"
QT_MOC_LITERAL(59, 4) // "list"

    },
    "Scenario\0scenarioCreated\0\0topLeft\0"
    "bottomRight\0ElementList*\0list"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scenario[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF, 0x80000000 | 5,    3,    4,    6,

       0        // eod
};

void Scenario::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Scenario *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->scenarioCreated((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ElementList*>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ElementList* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Scenario::*)(QPointF , QPointF , ElementList * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scenario::scenarioCreated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Scenario::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Scenario.offsetsAndSize,
    qt_meta_data_Scenario,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Scenario_t
, QtPrivate::TypeAndForceComplete<Scenario, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPointF, std::false_type>, QtPrivate::TypeAndForceComplete<QPointF, std::false_type>, QtPrivate::TypeAndForceComplete<ElementList *, std::false_type>



>,
    nullptr
} };


const QMetaObject *Scenario::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scenario::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Scenario.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Scenario::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Scenario::scenarioCreated(QPointF _t1, QPointF _t2, ElementList * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
