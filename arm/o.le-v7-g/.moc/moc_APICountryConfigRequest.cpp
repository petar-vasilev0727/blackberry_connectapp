/****************************************************************************
** Meta object code from reading C++ file 'APICountryConfigRequest.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/api/APICountryConfigRequest.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'APICountryConfigRequest.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_APICountryConfigRequest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      38,   25,   24,   24, 0x05,
      77,   25,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     115,   24,   24,   24, 0x08,
     138,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_APICountryConfigRequest[] = {
    "APICountryConfigRequest\0\0info,success\0"
    "sigCountryConfigResponse(QString,bool)\0"
    "sigContactEmailResponse(QString,bool)\0"
    "onCountryConfigReply()\0onContactEmailReply()\0"
};

void APICountryConfigRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        APICountryConfigRequest *_t = static_cast<APICountryConfigRequest *>(_o);
        switch (_id) {
        case 0: _t->sigCountryConfigResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->sigContactEmailResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->onCountryConfigReply(); break;
        case 3: _t->onContactEmailReply(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData APICountryConfigRequest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject APICountryConfigRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_APICountryConfigRequest,
      qt_meta_data_APICountryConfigRequest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &APICountryConfigRequest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *APICountryConfigRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *APICountryConfigRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_APICountryConfigRequest))
        return static_cast<void*>(const_cast< APICountryConfigRequest*>(this));
    return QObject::qt_metacast(_clname);
}

int APICountryConfigRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void APICountryConfigRequest::sigCountryConfigResponse(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void APICountryConfigRequest::sigContactEmailResponse(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
