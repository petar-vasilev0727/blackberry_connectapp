/****************************************************************************
** Meta object code from reading C++ file 'imageitem.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/imgutil/imageitem.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageitem.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      26,   10,   10,   10, 0x05,
      44,   10,   10,   10, 0x05,
      59,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      76,   10,   10,   10, 0x08,
      94,   10,   10,   10, 0x08,

 // properties: name, type, flags
     131,  122, 0xff495001,
     149,  137, 0x08495001,
     166,  158, 0x0a495001,
     177,  172, 0x01495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

static const char qt_meta_stringdata_ImageItem[] = {
    "ImageItem\0\0imageChanged()\0itemDataChanged()\0"
    "labelChanged()\0loadingChanged()\0"
    "onReplyFinished()\0onImageProcessingFinished()\0"
    "QVariant\0image\0QVariantMap\0itemData\0"
    "QString\0label\0bool\0loading\0"
};

void ImageItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImageItem *_t = static_cast<ImageItem *>(_o);
        switch (_id) {
        case 0: _t->imageChanged(); break;
        case 1: _t->itemDataChanged(); break;
        case 2: _t->labelChanged(); break;
        case 3: _t->loadingChanged(); break;
        case 4: _t->onReplyFinished(); break;
        case 5: _t->onImageProcessingFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ImageItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImageItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ImageItem,
      qt_meta_data_ImageItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImageItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImageItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImageItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageItem))
        return static_cast<void*>(const_cast< ImageItem*>(this));
    return QObject::qt_metacast(_clname);
}

int ImageItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = image(); break;
        case 1: *reinterpret_cast< QVariantMap*>(_v) = itemData(); break;
        case 2: *reinterpret_cast< QString*>(_v) = label(); break;
        case 3: *reinterpret_cast< bool*>(_v) = loading(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ImageItem::imageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ImageItem::itemDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ImageItem::labelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void ImageItem::loadingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
