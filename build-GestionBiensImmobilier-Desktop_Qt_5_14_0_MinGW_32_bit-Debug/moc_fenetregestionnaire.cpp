/****************************************************************************
** Meta object code from reading C++ file 'fenetregestionnaire.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../GestionBiensImmobilier/fenetregestionnaire.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fenetregestionnaire.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FenetreGestionnaire_t {
    QByteArrayData data[11];
    char stringdata0[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FenetreGestionnaire_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FenetreGestionnaire_t qt_meta_stringdata_FenetreGestionnaire = {
    {
QT_MOC_LITERAL(0, 0, 19), // "FenetreGestionnaire"
QT_MOC_LITERAL(1, 20, 30), // "on_pushButtonConsulter_clicked"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 32), // "on_pushButtonEnregistrer_clicked"
QT_MOC_LITERAL(4, 85, 29), // "on_pushButtonAffecter_clicked"
QT_MOC_LITERAL(5, 115, 29), // "on_pushButtonModifier_clicked"
QT_MOC_LITERAL(6, 145, 30), // "on_pushButtonSupprimer_clicked"
QT_MOC_LITERAL(7, 176, 25), // "on_pushButtonPaye_clicked"
QT_MOC_LITERAL(8, 202, 28), // "on_pushButtonArriere_clicked"
QT_MOC_LITERAL(9, 231, 39), // "on_pushButtonConsulterLocatai..."
QT_MOC_LITERAL(10, 271, 30) // "on_pushButtonLibererBI_clicked"

    },
    "FenetreGestionnaire\0on_pushButtonConsulter_clicked\0"
    "\0on_pushButtonEnregistrer_clicked\0"
    "on_pushButtonAffecter_clicked\0"
    "on_pushButtonModifier_clicked\0"
    "on_pushButtonSupprimer_clicked\0"
    "on_pushButtonPaye_clicked\0"
    "on_pushButtonArriere_clicked\0"
    "on_pushButtonConsulterLocataire_clicked\0"
    "on_pushButtonLibererBI_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FenetreGestionnaire[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FenetreGestionnaire::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FenetreGestionnaire *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonConsulter_clicked(); break;
        case 1: _t->on_pushButtonEnregistrer_clicked(); break;
        case 2: _t->on_pushButtonAffecter_clicked(); break;
        case 3: _t->on_pushButtonModifier_clicked(); break;
        case 4: _t->on_pushButtonSupprimer_clicked(); break;
        case 5: _t->on_pushButtonPaye_clicked(); break;
        case 6: _t->on_pushButtonArriere_clicked(); break;
        case 7: _t->on_pushButtonConsulterLocataire_clicked(); break;
        case 8: _t->on_pushButtonLibererBI_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FenetreGestionnaire::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_FenetreGestionnaire.data,
    qt_meta_data_FenetreGestionnaire,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FenetreGestionnaire::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FenetreGestionnaire::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FenetreGestionnaire.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FenetreGestionnaire::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
