/****************************************************************************
** Meta object code from reading C++ file 'FileDialogWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../include/GUI/FileDialogWidget.hpp"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileDialogWidget.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_FileDialogWidget_t {
    uint offsetsAndSizes[32];
    char stringdata0[17];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[14];
    char stringdata5[12];
    char stringdata6[10];
    char stringdata7[30];
    char stringdata8[5];
    char stringdata9[21];
    char stringdata10[9];
    char stringdata11[19];
    char stringdata12[12];
    char stringdata13[13];
    char stringdata14[13];
    char stringdata15[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FileDialogWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FileDialogWidget_t qt_meta_stringdata_FileDialogWidget = {
    {
        QT_MOC_LITERAL(0, 16),  // "FileDialogWidget"
        QT_MOC_LITERAL(17, 10),  // "filesReady"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 10),  // "file_names"
        QT_MOC_LITERAL(40, 13),  // "filenameReady"
        QT_MOC_LITERAL(54, 11),  // "std::string"
        QT_MOC_LITERAL(66, 9),  // "file_name"
        QT_MOC_LITERAL(76, 29),  // "std::unique_ptr<CCfits::FITS>"
        QT_MOC_LITERAL(106, 4),  // "base"
        QT_MOC_LITERAL(111, 20),  // "std::valarray<short>"
        QT_MOC_LITERAL(132, 8),  // "contents"
        QT_MOC_LITERAL(141, 18),  // "abortFileSelection"
        QT_MOC_LITERAL(160, 11),  // "fileWritten"
        QT_MOC_LITERAL(172, 12),  // "getFilenames"
        QT_MOC_LITERAL(185, 12),  // "saveFilename"
        QT_MOC_LITERAL(198, 12)   // "writeResults"
    },
    "FileDialogWidget",
    "filesReady",
    "",
    "file_names",
    "filenameReady",
    "std::string",
    "file_name",
    "std::unique_ptr<CCfits::FITS>",
    "base",
    "std::valarray<short>",
    "contents",
    "abortFileSelection",
    "fileWritten",
    "getFilenames",
    "saveFilename",
    "writeResults"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FileDialogWidget[] = {

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
       4,    3,   59,    2, 0x06,    3 /* Public */,
      11,    0,   66,    2, 0x06,    7 /* Public */,
      12,    0,   67,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    0,   68,    2, 0x08,    9 /* Private */,
      14,    2,   69,    2, 0x08,   10 /* Private */,
      15,    3,   74,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 9,    6,    8,   10,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 9,    6,    8,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject FileDialogWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FileDialogWidget.offsetsAndSizes,
    qt_meta_data_FileDialogWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FileDialogWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FileDialogWidget, std::true_type>,
        // method 'filesReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'filenameReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::string &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::unique_ptr<CCfits::FITS> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::valarray<short> &, std::false_type>,
        // method 'abortFileSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getFilenames'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveFilename'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::unique_ptr<CCfits::FITS> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::valarray<short> &, std::false_type>,
        // method 'writeResults'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::string &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::unique_ptr<CCfits::FITS> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::valarray<short> &, std::false_type>
    >,
    nullptr
} };

void FileDialogWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileDialogWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->filesReady((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 1: _t->filenameReady((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::unique_ptr<CCfits::FITS>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::valarray<short>>>(_a[3]))); break;
        case 2: _t->abortFileSelection(); break;
        case 3: _t->fileWritten(); break;
        case 4: _t->getFilenames(); break;
        case 5: _t->saveFilename((*reinterpret_cast< std::add_pointer_t<std::unique_ptr<CCfits::FITS>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::valarray<short>>>(_a[2]))); break;
        case 6: _t->writeResults((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::unique_ptr<CCfits::FITS>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::valarray<short>>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileDialogWidget::*)(const QStringList & );
            if (_t _q_method = &FileDialogWidget::filesReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileDialogWidget::*)(const std::string & , const std::unique_ptr<CCfits::FITS> & , const std::valarray<short> & );
            if (_t _q_method = &FileDialogWidget::filenameReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileDialogWidget::*)();
            if (_t _q_method = &FileDialogWidget::abortFileSelection; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileDialogWidget::*)();
            if (_t _q_method = &FileDialogWidget::fileWritten; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *FileDialogWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileDialogWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileDialogWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FileDialogWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void FileDialogWidget::filesReady(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileDialogWidget::filenameReady(const std::string & _t1, const std::unique_ptr<CCfits::FITS> & _t2, const std::valarray<short> & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileDialogWidget::abortFileSelection()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FileDialogWidget::fileWritten()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
