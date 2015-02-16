/****************************************************************************
** Meta object code from reading C++ file 'configure.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/configure.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configure.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Configure_t {
    QByteArrayData data[16];
    char stringdata[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Configure_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Configure_t qt_meta_stringdata_Configure = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 9),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 15),
QT_MOC_LITERAL(4, 37, 5),
QT_MOC_LITERAL(5, 43, 12),
QT_MOC_LITERAL(6, 56, 14),
QT_MOC_LITERAL(7, 71, 11),
QT_MOC_LITERAL(8, 83, 17),
QT_MOC_LITERAL(9, 101, 15),
QT_MOC_LITERAL(10, 117, 6),
QT_MOC_LITERAL(11, 124, 11),
QT_MOC_LITERAL(12, 136, 16),
QT_MOC_LITERAL(13, 153, 6),
QT_MOC_LITERAL(14, 160, 16),
QT_MOC_LITERAL(15, 177, 9)
    },
    "Configure\0calcApply\0\0CalcConfigState\0"
    "state\0generalApply\0GenConfigState\0"
    "recipeApply\0RecipeConfigState\0"
    "configureAccept\0accept\0slotClicked\0"
    "QAbstractButton*\0button\0convertBatchSpin\0"
    "selection\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Configure[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x05,
       5,    1,   52,    2, 0x05,
       7,    1,   55,    2, 0x05,
       9,    0,   58,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      10,    0,   59,    2, 0x08,
      11,    1,   60,    2, 0x08,
      14,    1,   63,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 8,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QString,   15,

       0        // eod
};

void Configure::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Configure *_t = static_cast<Configure *>(_o);
        switch (_id) {
        case 0: _t->calcApply((*reinterpret_cast< const CalcConfigState(*)>(_a[1]))); break;
        case 1: _t->generalApply((*reinterpret_cast< const GenConfigState(*)>(_a[1]))); break;
        case 2: _t->recipeApply((*reinterpret_cast< const RecipeConfigState(*)>(_a[1]))); break;
        case 3: _t->configureAccept(); break;
        case 4: _t->accept(); break;
        case 5: _t->slotClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 6: _t->convertBatchSpin((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Configure::*_t)(const CalcConfigState & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Configure::calcApply)) {
                *result = 0;
            }
        }
        {
            typedef void (Configure::*_t)(const GenConfigState & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Configure::generalApply)) {
                *result = 1;
            }
        }
        {
            typedef void (Configure::*_t)(const RecipeConfigState & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Configure::recipeApply)) {
                *result = 2;
            }
        }
        {
            typedef void (Configure::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Configure::configureAccept)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject Configure::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Configure.data,
      qt_meta_data_Configure,  qt_static_metacall, 0, 0}
};


const QMetaObject *Configure::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Configure::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Configure.stringdata))
        return static_cast<void*>(const_cast< Configure*>(this));
    return QDialog::qt_metacast(_clname);
}

int Configure::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void Configure::calcApply(const CalcConfigState & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Configure::generalApply(const GenConfigState & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Configure::recipeApply(const RecipeConfigState & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Configure::configureAccept()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
