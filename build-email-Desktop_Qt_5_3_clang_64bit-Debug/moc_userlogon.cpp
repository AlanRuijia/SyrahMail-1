/****************************************************************************
** Meta object code from reading C++ file 'userlogon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../email/userlogon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userlogon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UserLogon_t {
    QByteArrayData data[9];
    char stringdata[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserLogon_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserLogon_t qt_meta_stringdata_UserLogon = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 21),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 26),
QT_MOC_LITERAL(4, 60, 4),
QT_MOC_LITERAL(5, 65, 24),
QT_MOC_LITERAL(6, 90, 20),
QT_MOC_LITERAL(7, 111, 19),
QT_MOC_LITERAL(8, 131, 20)
    },
    "UserLogon\0UserLogonStateChanged\0\0"
    "on_UserNameEdit_textEdited\0arg1\0"
    "on_PassWdEdit_textEdited\0on_BtnCancel_clicked\0"
    "on_BtnLogon_clicked\0on_BtnNewUsr_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserLogon[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x08 /* Private */,
       5,    1,   48,    2, 0x08 /* Private */,
       6,    0,   51,    2, 0x08 /* Private */,
       7,    0,   52,    2, 0x08 /* Private */,
       8,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UserLogon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserLogon *_t = static_cast<UserLogon *>(_o);
        switch (_id) {
        case 0: _t->UserLogonStateChanged(); break;
        case 1: _t->on_UserNameEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_PassWdEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_BtnCancel_clicked(); break;
        case 4: _t->on_BtnLogon_clicked(); break;
        case 5: _t->on_BtnNewUsr_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UserLogon::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserLogon::UserLogonStateChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject UserLogon::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_UserLogon.data,
      qt_meta_data_UserLogon,  qt_static_metacall, 0, 0}
};


const QMetaObject *UserLogon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserLogon::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserLogon.stringdata))
        return static_cast<void*>(const_cast< UserLogon*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int UserLogon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void UserLogon::UserLogonStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
