/****************************************************************************
** Meta object code from reading C++ file 'Grille.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Grille.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Grille.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Grille_t {
    const uint offsetsAndSize[22];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Grille_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Grille_t qt_meta_stringdata_Grille = {
    {
QT_MOC_LITERAL(0, 6), // "Grille"
QT_MOC_LITERAL(7, 8), // "slowDown"
QT_MOC_LITERAL(16, 0), // ""
QT_MOC_LITERAL(17, 7), // "speedUp"
QT_MOC_LITERAL(25, 5), // "clear"
QT_MOC_LITERAL(31, 9), // "activated"
QT_MOC_LITERAL(41, 11), // "colorChange"
QT_MOC_LITERAL(53, 6), // "naitra"
QT_MOC_LITERAL(60, 13), // "increaseSpeed"
QT_MOC_LITERAL(74, 13), // "decreaseSpeed"
QT_MOC_LITERAL(88, 6) // "cleare"

    },
    "Grille\0slowDown\0\0speedUp\0clear\0activated\0"
    "colorChange\0naitra\0increaseSpeed\0"
    "decreaseSpeed\0cleare"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Grille[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,
       3,    0,   69,    2, 0x06,    2 /* Public */,
       4,    0,   70,    2, 0x06,    3 /* Public */,
       5,    0,   71,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   72,    2, 0x0a,    5 /* Public */,
       7,    0,   73,    2, 0x0a,    6 /* Public */,
       8,    0,   74,    2, 0x0a,    7 /* Public */,
       9,    0,   75,    2, 0x0a,    8 /* Public */,
      10,    0,   76,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Grille::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Grille *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slowDown(); break;
        case 1: _t->speedUp(); break;
        case 2: _t->clear(); break;
        case 3: _t->activated(); break;
        case 4: _t->colorChange(); break;
        case 5: _t->naitra(); break;
        case 6: _t->increaseSpeed(); break;
        case 7: _t->decreaseSpeed(); break;
        case 8: _t->cleare(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Grille::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Grille::slowDown)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Grille::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Grille::speedUp)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Grille::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Grille::clear)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Grille::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Grille::activated)) {
                *result = 3;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject Grille::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Grille.offsetsAndSize,
    qt_meta_data_Grille,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Grille_t
, QtPrivate::TypeAndForceComplete<Grille, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Grille::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Grille::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Grille.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Grille::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Grille::slowDown()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Grille::speedUp()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Grille::clear()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Grille::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
