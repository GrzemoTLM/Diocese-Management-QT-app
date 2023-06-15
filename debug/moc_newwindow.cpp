/****************************************************************************
** Meta object code from reading C++ file 'newwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../newwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSNewWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSNewWindowENDCLASS = QtMocHelpers::stringData(
    "NewWindow",
    "on_comboBoxShop_currentIndexChanged",
    "",
    "index",
    "loadItemsFromFile",
    "TParish*",
    "parish",
    "fileName",
    "on_ButtonBuy_clicked",
    "updateItemView",
    "on_ButtonAddPriest_clicked",
    "on_accept_clicked",
    "addPriestsToList"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSNewWindowENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[10];
    char stringdata1[36];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[18];
    char stringdata5[9];
    char stringdata6[7];
    char stringdata7[9];
    char stringdata8[21];
    char stringdata9[15];
    char stringdata10[27];
    char stringdata11[18];
    char stringdata12[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSNewWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSNewWindowENDCLASS_t qt_meta_stringdata_CLASSNewWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "NewWindow"
        QT_MOC_LITERAL(10, 35),  // "on_comboBoxShop_currentIndexC..."
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 5),  // "index"
        QT_MOC_LITERAL(53, 17),  // "loadItemsFromFile"
        QT_MOC_LITERAL(71, 8),  // "TParish*"
        QT_MOC_LITERAL(80, 6),  // "parish"
        QT_MOC_LITERAL(87, 8),  // "fileName"
        QT_MOC_LITERAL(96, 20),  // "on_ButtonBuy_clicked"
        QT_MOC_LITERAL(117, 14),  // "updateItemView"
        QT_MOC_LITERAL(132, 26),  // "on_ButtonAddPriest_clicked"
        QT_MOC_LITERAL(159, 17),  // "on_accept_clicked"
        QT_MOC_LITERAL(177, 16)   // "addPriestsToList"
    },
    "NewWindow",
    "on_comboBoxShop_currentIndexChanged",
    "",
    "index",
    "loadItemsFromFile",
    "TParish*",
    "parish",
    "fileName",
    "on_ButtonBuy_clicked",
    "updateItemView",
    "on_ButtonAddPriest_clicked",
    "on_accept_clicked",
    "addPriestsToList"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSNewWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x08,    1 /* Private */,
       4,    2,   59,    2, 0x08,    3 /* Private */,
       8,    0,   64,    2, 0x08,    6 /* Private */,
       9,    1,   65,    2, 0x08,    7 /* Private */,
      10,    0,   68,    2, 0x08,    9 /* Private */,
      11,    0,   69,    2, 0x08,   10 /* Private */,
      12,    0,   70,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject NewWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSNewWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSNewWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSNewWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NewWindow, std::true_type>,
        // method 'on_comboBoxShop_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'loadItemsFromFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TParish *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_ButtonBuy_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateItemView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_ButtonAddPriest_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_accept_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addPriestsToList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void NewWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NewWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_comboBoxShop_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->loadItemsFromFile((*reinterpret_cast< std::add_pointer_t<TParish*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->on_ButtonBuy_clicked(); break;
        case 3: _t->updateItemView((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_ButtonAddPriest_clicked(); break;
        case 5: _t->addPriestsToList(); break;
        default: ;
        }
    }
}

const QMetaObject *NewWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSNewWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int NewWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
