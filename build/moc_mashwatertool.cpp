/****************************************************************************
** Meta object code from reading C++ file 'mashwatertool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mashwatertool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mashwatertool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MashWaterDialog_t {
    QByteArrayData data[13];
    char stringdata[371];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MashWaterDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MashWaterDialog_t qt_meta_stringdata_MashWaterDialog = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 46),
QT_MOC_LITERAL(2, 63, 0),
QT_MOC_LITERAL(3, 64, 38),
QT_MOC_LITERAL(4, 103, 39),
QT_MOC_LITERAL(5, 143, 32),
QT_MOC_LITERAL(6, 176, 38),
QT_MOC_LITERAL(7, 215, 37),
QT_MOC_LITERAL(8, 253, 38),
QT_MOC_LITERAL(9, 292, 37),
QT_MOC_LITERAL(10, 330, 21),
QT_MOC_LITERAL(11, 352, 7),
QT_MOC_LITERAL(12, 360, 9)
    },
    "MashWaterDialog\0"
    "on_strikeWaterVolumeDoubleSpinBox_valueChanged\0"
    "\0on_grainMassDoubleSpinBox_valueChanged\0"
    "on_targetStrikeTempSpinBox_valueChanged\0"
    "on_grainTempSpinBox_valueChanged\0"
    "on_step2TargetTempSpinBox_valueChanged\0"
    "on_step2WaterTempSpinBox_valueChanged\0"
    "on_step3TargetTempSpinBox_valueChanged\0"
    "on_step3WaterTempSpinBox_valueChanged\0"
    "on_moreButton_toggled\0checked\0initUnits\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MashWaterDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08,
       3,    0,   65,    2, 0x08,
       4,    0,   66,    2, 0x08,
       5,    0,   67,    2, 0x08,
       6,    0,   68,    2, 0x08,
       7,    0,   69,    2, 0x08,
       8,    0,   70,    2, 0x08,
       9,    0,   71,    2, 0x08,
      10,    1,   72,    2, 0x08,
      12,    0,   75,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,

       0        // eod
};

void MashWaterDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MashWaterDialog *_t = static_cast<MashWaterDialog *>(_o);
        switch (_id) {
        case 0: _t->on_strikeWaterVolumeDoubleSpinBox_valueChanged(); break;
        case 1: _t->on_grainMassDoubleSpinBox_valueChanged(); break;
        case 2: _t->on_targetStrikeTempSpinBox_valueChanged(); break;
        case 3: _t->on_grainTempSpinBox_valueChanged(); break;
        case 4: _t->on_step2TargetTempSpinBox_valueChanged(); break;
        case 5: _t->on_step2WaterTempSpinBox_valueChanged(); break;
        case 6: _t->on_step3TargetTempSpinBox_valueChanged(); break;
        case 7: _t->on_step3WaterTempSpinBox_valueChanged(); break;
        case 8: _t->on_moreButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->initUnits(); break;
        default: ;
        }
    }
}

const QMetaObject MashWaterDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MashWaterDialog.data,
      qt_meta_data_MashWaterDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *MashWaterDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MashWaterDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MashWaterDialog.stringdata))
        return static_cast<void*>(const_cast< MashWaterDialog*>(this));
    if (!strcmp(_clname, "Ui::MashWaterDialog"))
        return static_cast< Ui::MashWaterDialog*>(const_cast< MashWaterDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MashWaterDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
