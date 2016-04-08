/****************************************************************************
** Meta object code from reading C++ file 'NGLScene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include/NGLScene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NGLScene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NGLScene_t {
    QByteArrayData data[19];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NGLScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NGLScene_t qt_meta_stringdata_NGLScene = {
    {
QT_MOC_LITERAL(0, 0, 8), // "NGLScene"
QT_MOC_LITERAL(1, 9, 11), // "SetWindXDir"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 11), // "SetWindYDir"
QT_MOC_LITERAL(4, 34, 11), // "SetWindZDir"
QT_MOC_LITERAL(5, 46, 15), // "SetDropsPerTick"
QT_MOC_LITERAL(6, 62, 15), // "SetNewPlaneXPos"
QT_MOC_LITERAL(7, 78, 15), // "SetNewPlaneYPos"
QT_MOC_LITERAL(8, 94, 15), // "SetNewPlaneZPos"
QT_MOC_LITERAL(9, 110, 16), // "SetNewPlaneXSize"
QT_MOC_LITERAL(10, 127, 16), // "SetNewPlaneZSize"
QT_MOC_LITERAL(11, 144, 15), // "SetNewPlaneXRot"
QT_MOC_LITERAL(12, 160, 15), // "SetNewPlaneZRot"
QT_MOC_LITERAL(13, 176, 20), // "SetNewPlaneRoughness"
QT_MOC_LITERAL(14, 197, 14), // "CreateNewPlane"
QT_MOC_LITERAL(15, 212, 11), // "DeletePlane"
QT_MOC_LITERAL(16, 224, 14), // "SetNewBoxXSize"
QT_MOC_LITERAL(17, 239, 14), // "SetNewBoxYSize"
QT_MOC_LITERAL(18, 254, 14) // "SetNewBoxZSize"

    },
    "NGLScene\0SetWindXDir\0\0SetWindYDir\0"
    "SetWindZDir\0SetDropsPerTick\0SetNewPlaneXPos\0"
    "SetNewPlaneYPos\0SetNewPlaneZPos\0"
    "SetNewPlaneXSize\0SetNewPlaneZSize\0"
    "SetNewPlaneXRot\0SetNewPlaneZRot\0"
    "SetNewPlaneRoughness\0CreateNewPlane\0"
    "DeletePlane\0SetNewBoxXSize\0SetNewBoxYSize\0"
    "SetNewBoxZSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NGLScene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x0a /* Public */,
       3,    1,  102,    2, 0x0a /* Public */,
       4,    1,  105,    2, 0x0a /* Public */,
       5,    1,  108,    2, 0x0a /* Public */,
       6,    1,  111,    2, 0x0a /* Public */,
       7,    1,  114,    2, 0x0a /* Public */,
       8,    1,  117,    2, 0x0a /* Public */,
       9,    1,  120,    2, 0x0a /* Public */,
      10,    1,  123,    2, 0x0a /* Public */,
      11,    1,  126,    2, 0x0a /* Public */,
      12,    1,  129,    2, 0x0a /* Public */,
      13,    1,  132,    2, 0x0a /* Public */,
      14,    0,  135,    2, 0x0a /* Public */,
      15,    0,  136,    2, 0x0a /* Public */,
      16,    1,  137,    2, 0x0a /* Public */,
      17,    1,  140,    2, 0x0a /* Public */,
      18,    1,  143,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void NGLScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NGLScene *_t = static_cast<NGLScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetWindXDir((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->SetWindYDir((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->SetWindZDir((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->SetDropsPerTick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->SetNewPlaneXPos((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->SetNewPlaneYPos((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->SetNewPlaneZPos((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->SetNewPlaneXSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->SetNewPlaneZSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->SetNewPlaneXRot((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->SetNewPlaneZRot((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->SetNewPlaneRoughness((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->CreateNewPlane(); break;
        case 13: _t->DeletePlane(); break;
        case 14: _t->SetNewBoxXSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->SetNewBoxYSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->SetNewBoxZSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject NGLScene::staticMetaObject = {
    { &QOpenGLWidget::staticMetaObject, qt_meta_stringdata_NGLScene.data,
      qt_meta_data_NGLScene,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NGLScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NGLScene::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NGLScene.stringdata0))
        return static_cast<void*>(const_cast< NGLScene*>(this));
    return QOpenGLWidget::qt_metacast(_clname);
}

int NGLScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
