/****************************************************************************
** Meta object code from reading C++ file 'smtplogin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../email/smtplogin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smtplogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_smtplogin_t {
    QByteArrayData data[7];
    char stringdata[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_smtplogin_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_smtplogin_t qt_meta_stringdata_smtplogin = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 14),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 9),
QT_MOC_LITERAL(4, 36, 11),
QT_MOC_LITERAL(5, 48, 12),
QT_MOC_LITERAL(6, 61, 12)
    },
    "smtplogin\0readMessagesig\0\0reconnect\0"
    "readMessage\0StateChanged\0connectEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_smtplogin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   42,    2, 0x0a /* Public */,
       4,    0,   43,    2, 0x0a /* Public */,
       5,    0,   44,    2, 0x0a /* Public */,
       6,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void smtplogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        smtplogin *_t = static_cast<smtplogin *>(_o);
        switch (_id) {
        case 0: _t->readMessagesig((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->reconnect(); break;
        case 2: _t->readMessage(); break;
        case 3: _t->StateChanged(); break;
        case 4: _t->connectEvent(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (smtplogin::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&smtplogin::readMessagesig)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject smtplogin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_smtplogin.data,
      qt_meta_data_smtplogin,  qt_static_metacall, 0, 0}
};


const QMetaObject *smtplogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *smtplogin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_smtplogin.stringdata))
        return static_cast<void*>(const_cast< smtplogin*>(this));
    return QObject::qt_metacast(_clname);
}

int smtplogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void smtplogin::readMessagesig(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
