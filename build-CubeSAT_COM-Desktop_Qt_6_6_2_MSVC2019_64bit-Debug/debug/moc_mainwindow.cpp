/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CubeSAT_COM/mainwindow.h"
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
#error "This file was generated using the moc from 6.6.2. It"
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
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_Enviar_clicked",
    "",
    "on_Comando_returnPressed",
    "on_Texto_Recebido_textChanged",
    "openSerialPort",
    "closeSerialPort",
    "handleError",
    "QSerialPort::SerialPortError",
    "error",
    "handleBytesWritten",
    "bytes",
    "handleWriteTimeout"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[11];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[30];
    char stringdata5[15];
    char stringdata6[16];
    char stringdata7[12];
    char stringdata8[29];
    char stringdata9[6];
    char stringdata10[19];
    char stringdata11[6];
    char stringdata12[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 17),  // "on_Enviar_clicked"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 24),  // "on_Comando_returnPressed"
        QT_MOC_LITERAL(55, 29),  // "on_Texto_Recebido_textChanged"
        QT_MOC_LITERAL(85, 14),  // "openSerialPort"
        QT_MOC_LITERAL(100, 15),  // "closeSerialPort"
        QT_MOC_LITERAL(116, 11),  // "handleError"
        QT_MOC_LITERAL(128, 28),  // "QSerialPort::SerialPortError"
        QT_MOC_LITERAL(157, 5),  // "error"
        QT_MOC_LITERAL(163, 18),  // "handleBytesWritten"
        QT_MOC_LITERAL(182, 5),  // "bytes"
        QT_MOC_LITERAL(188, 18)   // "handleWriteTimeout"
    },
    "MainWindow",
    "on_Enviar_clicked",
    "",
    "on_Comando_returnPressed",
    "on_Texto_Recebido_textChanged",
    "openSerialPort",
    "closeSerialPort",
    "handleError",
    "QSerialPort::SerialPortError",
    "error",
    "handleBytesWritten",
    "bytes",
    "handleWriteTimeout"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    1,   67,    2, 0x08,    6 /* Private */,
      10,    1,   70,    2, 0x08,    8 /* Private */,
      12,    0,   73,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::LongLong,   11,
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
        // method 'on_Enviar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Comando_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Texto_Recebido_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openSerialPort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeSerialPort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSerialPort::SerialPortError, std::false_type>,
        // method 'handleBytesWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'handleWriteTimeout'
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
        case 0: _t->on_Enviar_clicked(); break;
        case 1: _t->on_Comando_returnPressed(); break;
        case 2: _t->on_Texto_Recebido_textChanged(); break;
        case 3: _t->openSerialPort(); break;
        case 4: _t->closeSerialPort(); break;
        case 5: _t->handleError((*reinterpret_cast< std::add_pointer_t<QSerialPort::SerialPortError>>(_a[1]))); break;
        case 6: _t->handleBytesWritten((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 7: _t->handleWriteTimeout(); break;
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
