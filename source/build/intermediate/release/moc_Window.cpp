/****************************************************************************
** Meta object code from reading C++ file 'Window.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../include/GUI/Window.hpp"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Window.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_Window_t {
    uint offsetsAndSizes[40];
    char stringdata0[7];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[11];
    char stringdata5[7];
    char stringdata6[13];
    char stringdata7[8];
    char stringdata8[16];
    char stringdata9[30];
    char stringdata10[5];
    char stringdata11[21];
    char stringdata12[4];
    char stringdata13[11];
    char stringdata14[14];
    char stringdata15[22];
    char stringdata16[22];
    char stringdata17[9];
    char stringdata18[15];
    char stringdata19[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Window_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Window_t qt_meta_stringdata_Window = {
    {
        QT_MOC_LITERAL(0, 6),  // "Window"
        QT_MOC_LITERAL(7, 16),  // "launchFileDialog"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 9),  // "shareData"
        QT_MOC_LITERAL(35, 10),  // "file_names"
        QT_MOC_LITERAL(46, 6),  // "choice"
        QT_MOC_LITERAL(53, 12),  // "raiseWarning"
        QT_MOC_LITERAL(66, 7),  // "raiseOk"
        QT_MOC_LITERAL(74, 15),  // "transmitResults"
        QT_MOC_LITERAL(90, 29),  // "std::unique_ptr<CCfits::FITS>"
        QT_MOC_LITERAL(120, 4),  // "base"
        QT_MOC_LITERAL(125, 20),  // "std::valarray<short>"
        QT_MOC_LITERAL(146, 3),  // "res"
        QT_MOC_LITERAL(150, 10),  // "allowStack"
        QT_MOC_LITERAL(161, 13),  // "receiveChoice"
        QT_MOC_LITERAL(175, 21),  // "receiveDataToTransmit"
        QT_MOC_LITERAL(197, 21),  // "receiveValidityNotice"
        QT_MOC_LITERAL(219, 8),  // "validity"
        QT_MOC_LITERAL(228, 14),  // "receiveResults"
        QT_MOC_LITERAL(243, 17)   // "receiveEndProcess"
    },
    "Window",
    "launchFileDialog",
    "",
    "shareData",
    "file_names",
    "choice",
    "raiseWarning",
    "raiseOk",
    "transmitResults",
    "std::unique_ptr<CCfits::FITS>",
    "base",
    "std::valarray<short>",
    "res",
    "allowStack",
    "receiveChoice",
    "receiveDataToTransmit",
    "receiveValidityNotice",
    "validity",
    "receiveResults",
    "receiveEndProcess"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Window[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,
       3,    2,   81,    2, 0x06,    2 /* Public */,
       6,    0,   86,    2, 0x06,    5 /* Public */,
       7,    0,   87,    2, 0x06,    6 /* Public */,
       8,    2,   88,    2, 0x06,    7 /* Public */,
      13,    0,   93,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    1,   94,    2, 0x08,   11 /* Private */,
      15,    1,   97,    2, 0x08,   13 /* Private */,
      16,    1,  100,    2, 0x08,   15 /* Private */,
      18,    2,  103,    2, 0x08,   17 /* Private */,
      19,    0,  108,    2, 0x08,   20 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,   12,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QStringList,    4,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,   12,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Window::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Window.offsetsAndSizes,
    qt_meta_data_Window,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Window_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Window, std::true_type>,
        // method 'launchFileDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'shareData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'raiseWarning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'raiseOk'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'transmitResults'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::unique_ptr<CCfits::FITS> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::valarray<short> &, std::false_type>,
        // method 'allowStack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveChoice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'receiveDataToTransmit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'receiveValidityNotice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'receiveResults'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::unique_ptr<CCfits::FITS> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::valarray<short> &, std::false_type>,
        // method 'receiveEndProcess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Window *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->launchFileDialog(); break;
        case 1: _t->shareData((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->raiseWarning(); break;
        case 3: _t->raiseOk(); break;
        case 4: _t->transmitResults((*reinterpret_cast< std::add_pointer_t<std::unique_ptr<CCfits::FITS>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::valarray<short>>>(_a[2]))); break;
        case 5: _t->allowStack(); break;
        case 6: _t->receiveChoice((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->receiveDataToTransmit((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 8: _t->receiveValidityNotice((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->receiveResults((*reinterpret_cast< std::add_pointer_t<std::unique_ptr<CCfits::FITS>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::valarray<short>>>(_a[2]))); break;
        case 10: _t->receiveEndProcess(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Window::*)();
            if (_t _q_method = &Window::launchFileDialog; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Window::*)(const QStringList & , const int );
            if (_t _q_method = &Window::shareData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Window::*)();
            if (_t _q_method = &Window::raiseWarning; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Window::*)();
            if (_t _q_method = &Window::raiseOk; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Window::*)(const std::unique_ptr<CCfits::FITS> & , const std::valarray<short> & );
            if (_t _q_method = &Window::transmitResults; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Window::*)();
            if (_t _q_method = &Window::allowStack; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Window.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Window::launchFileDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Window::shareData(const QStringList & _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Window::raiseWarning()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Window::raiseOk()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Window::transmitResults(const std::unique_ptr<CCfits::FITS> & _t1, const std::valarray<short> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Window::allowStack()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
