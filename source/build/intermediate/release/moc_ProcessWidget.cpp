/****************************************************************************
** Meta object code from reading C++ file 'ProcessWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../include/GUI/ProcessWidget.hpp"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProcessWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_ProcessWidget_t {
    uint offsetsAndSizes[30];
    char stringdata0[14];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[12];
    char stringdata5[15];
    char stringdata6[30];
    char stringdata7[5];
    char stringdata8[21];
    char stringdata9[4];
    char stringdata10[10];
    char stringdata11[11];
    char stringdata12[7];
    char stringdata13[9];
    char stringdata14[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ProcessWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ProcessWidget_t qt_meta_stringdata_ProcessWidget = {
    {
        QT_MOC_LITERAL(0, 13),  // "ProcessWidget"
        QT_MOC_LITERAL(14, 18),  // "noticeDataValidity"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 8),  // "validity"
        QT_MOC_LITERAL(43, 11),  // "invalidData"
        QT_MOC_LITERAL(55, 14),  // "processingDone"
        QT_MOC_LITERAL(70, 29),  // "std::unique_ptr<CCfits::FITS>"
        QT_MOC_LITERAL(100, 4),  // "base"
        QT_MOC_LITERAL(105, 20),  // "std::valarray<short>"
        QT_MOC_LITERAL(126, 3),  // "res"
        QT_MOC_LITERAL(130, 9),  // "checkData"
        QT_MOC_LITERAL(140, 10),  // "file_names"
        QT_MOC_LITERAL(151, 6),  // "choice"
        QT_MOC_LITERAL(158, 8),  // "warnUser"
        QT_MOC_LITERAL(167, 11)   // "processData"
    },
    "ProcessWidget",
    "noticeDataValidity",
    "",
    "validity",
    "invalidData",
    "processingDone",
    "std::unique_ptr<CCfits::FITS>",
    "base",
    "std::valarray<short>",
    "res",
    "checkData",
    "file_names",
    "choice",
    "warnUser",
    "processData"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ProcessWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       4,    0,   53,    2, 0x06,    3 /* Public */,
       5,    2,   54,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    2,   59,    2, 0x08,    7 /* Private */,
      13,    0,   64,    2, 0x08,   10 /* Private */,
      14,    0,   65,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList, QMetaType::Int,   11,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ProcessWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ProcessWidget.offsetsAndSizes,
    qt_meta_data_ProcessWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ProcessWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ProcessWidget, std::true_type>,
        // method 'noticeDataValidity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'invalidData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'processingDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::unique_ptr<CCfits::FITS> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::valarray<short> &, std::false_type>,
        // method 'checkData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'warnUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'processData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ProcessWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProcessWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->noticeDataValidity((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->invalidData(); break;
        case 2: _t->processingDone((*reinterpret_cast< std::add_pointer_t<std::unique_ptr<CCfits::FITS>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::valarray<short>>>(_a[2]))); break;
        case 3: _t->checkData((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->warnUser(); break;
        case 5: _t->processData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProcessWidget::*)(const bool );
            if (_t _q_method = &ProcessWidget::noticeDataValidity; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProcessWidget::*)();
            if (_t _q_method = &ProcessWidget::invalidData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ProcessWidget::*)(const std::unique_ptr<CCfits::FITS> & , const std::valarray<short> & );
            if (_t _q_method = &ProcessWidget::processingDone; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *ProcessWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProcessWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ProcessWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void ProcessWidget::noticeDataValidity(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProcessWidget::invalidData()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ProcessWidget::processingDone(const std::unique_ptr<CCfits::FITS> & _t1, const std::valarray<short> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
