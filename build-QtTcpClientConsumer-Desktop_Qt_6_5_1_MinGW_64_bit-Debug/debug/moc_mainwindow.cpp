/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtTcpClientConsumer/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "getData",
    "",
    "copiatexto",
    "valorInterv",
    "on_desconectado_clicked",
    "on_conectado_clicked",
    "on_barraTimer_valueChanged",
    "value",
    "on_start_clicked",
    "timerStop",
    "timerEvent"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[12];
    char stringdata5[24];
    char stringdata6[21];
    char stringdata7[27];
    char stringdata8[6];
    char stringdata9[17];
    char stringdata10[10];
    char stringdata11[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 7),  // "getData"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 10),  // "copiatexto"
        QT_MOC_LITERAL(31, 11),  // "valorInterv"
        QT_MOC_LITERAL(43, 23),  // "on_desconectado_clicked"
        QT_MOC_LITERAL(67, 20),  // "on_conectado_clicked"
        QT_MOC_LITERAL(88, 26),  // "on_barraTimer_valueChanged"
        QT_MOC_LITERAL(115, 5),  // "value"
        QT_MOC_LITERAL(121, 16),  // "on_start_clicked"
        QT_MOC_LITERAL(138, 9),  // "timerStop"
        QT_MOC_LITERAL(148, 10)   // "timerEvent"
    },
    "MainWindow",
    "getData",
    "",
    "copiatexto",
    "valorInterv",
    "on_desconectado_clicked",
    "on_conectado_clicked",
    "on_barraTimer_valueChanged",
    "value",
    "on_start_clicked",
    "timerStop",
    "timerEvent"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    1 /* Public */,
       3,    0,   69,    2, 0x0a,    2 /* Public */,
       4,    1,   70,    2, 0x0a,    3 /* Public */,
       5,    0,   73,    2, 0x08,    5 /* Private */,
       6,    0,   74,    2, 0x08,    6 /* Private */,
       7,    1,   75,    2, 0x08,    7 /* Private */,
       9,    0,   78,    2, 0x08,    9 /* Private */,
      10,    0,   79,    2, 0x08,   10 /* Private */,
      11,    0,   80,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'getData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copiatexto'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'valorInterv'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_desconectado_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_conectado_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_barraTimer_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_start_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'timerStop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'timerEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->getData(); break;
        case 1: _t->copiatexto(); break;
        case 2: _t->valorInterv((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_desconectado_clicked(); break;
        case 4: _t->on_conectado_clicked(); break;
        case 5: _t->on_barraTimer_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_start_clicked(); break;
        case 7: _t->timerStop(); break;
        case 8: _t->timerEvent(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
