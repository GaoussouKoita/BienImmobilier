/********************************************************************************
** Form generated from reading UI file 'winabout.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINABOUT_H
#define UI_WINABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_WinAbout
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *WinAbout)
    {
        if (WinAbout->objectName().isEmpty())
            WinAbout->setObjectName(QString::fromUtf8("WinAbout"));
        WinAbout->resize(536, 224);
        label = new QLabel(WinAbout);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 491, 61));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label_2 = new QLabel(WinAbout);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 80, 491, 61));
        label_2->setFont(font);
        label_3 = new QLabel(WinAbout);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 150, 221, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("NSimSun"));
        font1.setPointSize(12);
        label_3->setFont(font1);
        label_4 = new QLabel(WinAbout);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(280, 150, 181, 21));
        label_4->setFont(font);

        retranslateUi(WinAbout);

        QMetaObject::connectSlotsByName(WinAbout);
    } // setupUi

    void retranslateUi(QDialog *WinAbout)
    {
        WinAbout->setWindowTitle(QCoreApplication::translate("WinAbout", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("WinAbout", "Ce logiciel de Gestion de Biens Immobiliers est un projet de \n"
"fin de formation du module  de la programmation \n"
"orient\303\251e objet en C++.\n"
"", nullptr));
        label_2->setText(QCoreApplication::translate("WinAbout", "Il est d\303\251velopp\303\251 par un groupe de quatres 4 \303\251tudiants, \n"
"sous la direction de: ", nullptr));
        label_3->setText(QCoreApplication::translate("WinAbout", "M. Ghislain AKINOCHO", nullptr));
        label_4->setText(QCoreApplication::translate("WinAbout", "enseignant a l'ESMT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinAbout: public Ui_WinAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINABOUT_H
