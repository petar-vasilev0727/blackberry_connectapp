/****************************************************************************
** Meta object code from reading C++ file 'APISubdivisionsRequest.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/api/APISubdivisionsRequest.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'APISubdivisionsRequest.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_APISubdivisionsRequest[] = {

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
      37,   24,   23,   23, 0x05,
      75,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
     112,   23,   23,   23, 0x08,
     134,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_APISubdivisionsRequest[] = {
    "APISubdivisionsRequest\0\0info,success\0"
    "sigSubdivisionsResponse(QString,bool)\0"
    "sigSubdivisionResponse(QString,bool)\0"
    "onSubdivisionsReply()\0onSubdivisionReply()\0"
};

void APISubdivisionsRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        APISubdivisionsRequest *_t = static_cast<APISubdivisionsRequest *>(_o);
        switch (_id) {
        case 0: _t->sigSubdivisionsResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->sigSubdivisionResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->onSubdivisionsReply(); break;
        case 3: _t->onSubdivisionReply(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData APISubdivisionsRequest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject APISubdivisionsRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_APISubdivisionsRequest,
      qt_meta_data_APISubdivisionsRequest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &APISubdivisionsRequest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *APISubdivisionsRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *APISubdivisionsRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_APISubdivisionsRequest))
        return static_cast<void*>(const_cast< APISubdivisionsRequest*>(this));
    return QObject::qt_metacast(_clname);
}

int APISubdivisionsRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void APISubdivisionsRequest::sigSubdivisionsResponse(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void APISubdivisionsRequest::sigSubdivisionResponse(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE