/********************************************************************************
** Form generated from reading UI file 'gestaffecterbi.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTAFFECTERBI_H
#define UI_GESTAFFECTERBI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GestAffecterBI
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditNom;
    QLabel *label_2;
    QLineEdit *lineEditPrenom;
    QLabel *label_5;
    QLineEdit *lineEditNumPiece;
    QLabel *label_6;
    QLineEdit *lineEditContact;
    QLabel *label_4;
    QLineEdit *lineEditEMail;
    QLabel *label_10;
    QComboBox *comboBoxSexe;
    QLabel *label_7;
    QDateEdit *dateEditDateDeNaissance;
    QLabel *label_3;
    QLineEdit *lineEditIdBien;
    QLabel *label_8;
    QComboBox *comboBoxTypeLocation;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonAnnuler;
    QPushButton *pushButtonAffecter;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GestAffecterBI)
    {
        if (GestAffecterBI->objectName().isEmpty())
            GestAffecterBI->setObjectName(QString::fromUtf8("GestAffecterBI"));
        GestAffecterBI->resize(685, 590);
        centralwidget = new QWidget(GestAffecterBI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 30, 571, 421));
        QFont font;
        font.setFamily(QString::fromUtf8("Algerian"));
        font.setPointSize(12);
        groupBox->setFont(font);
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 40, 491, 364));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        label->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEditNom = new QLineEdit(formLayoutWidget);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        lineEditNom->setFont(font2);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditNom);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEditPrenom = new QLineEdit(formLayoutWidget);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));
        lineEditPrenom->setFont(font2);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditPrenom);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        lineEditNumPiece = new QLineEdit(formLayoutWidget);
        lineEditNumPiece->setObjectName(QString::fromUtf8("lineEditNumPiece"));
        lineEditNumPiece->setFont(font2);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditNumPiece);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        lineEditContact = new QLineEdit(formLayoutWidget);
        lineEditContact->setObjectName(QString::fromUtf8("lineEditContact"));
        lineEditContact->setFont(font2);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditContact);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        lineEditEMail = new QLineEdit(formLayoutWidget);
        lineEditEMail->setObjectName(QString::fromUtf8("lineEditEMail"));
        lineEditEMail->setFont(font2);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditEMail);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font2);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_10);

        comboBoxSexe = new QComboBox(formLayoutWidget);
        comboBoxSexe->addItem(QString());
        comboBoxSexe->addItem(QString());
        comboBoxSexe->setObjectName(QString::fromUtf8("comboBoxSexe"));
        comboBoxSexe->setFont(font2);

        formLayout->setWidget(5, QFormLayout::FieldRole, comboBoxSexe);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        dateEditDateDeNaissance = new QDateEdit(formLayoutWidget);
        dateEditDateDeNaissance->setObjectName(QString::fromUtf8("dateEditDateDeNaissance"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Vani"));
        dateEditDateDeNaissance->setFont(font3);

        formLayout->setWidget(6, QFormLayout::FieldRole, dateEditDateDeNaissance);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_3);

        lineEditIdBien = new QLineEdit(formLayoutWidget);
        lineEditIdBien->setObjectName(QString::fromUtf8("lineEditIdBien"));
        lineEditIdBien->setFont(font2);

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEditIdBien);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font2);

        formLayout->setWidget(8, QFormLayout::LabelRole, label_8);

        comboBoxTypeLocation = new QComboBox(formLayoutWidget);
        comboBoxTypeLocation->addItem(QString());
        comboBoxTypeLocation->addItem(QString());
        comboBoxTypeLocation->setObjectName(QString::fromUtf8("comboBoxTypeLocation"));
        comboBoxTypeLocation->setFont(font2);

        formLayout->setWidget(8, QFormLayout::FieldRole, comboBoxTypeLocation);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(120, 480, 411, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonAnnuler = new QPushButton(gridLayoutWidget);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));
        pushButtonAnnuler->setFont(font1);

        gridLayout->addWidget(pushButtonAnnuler, 0, 1, 1, 1);

        pushButtonAffecter = new QPushButton(gridLayoutWidget);
        pushButtonAffecter->setObjectName(QString::fromUtf8("pushButtonAffecter"));
        pushButtonAffecter->setFont(font1);

        gridLayout->addWidget(pushButtonAffecter, 0, 0, 1, 1);

        GestAffecterBI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GestAffecterBI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 685, 28));
        GestAffecterBI->setMenuBar(menubar);
        statusbar = new QStatusBar(GestAffecterBI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GestAffecterBI->setStatusBar(statusbar);

        retranslateUi(GestAffecterBI);

        QMetaObject::connectSlotsByName(GestAffecterBI);
    } // setupUi

    void retranslateUi(QMainWindow *GestAffecterBI)
    {
        GestAffecterBI->setWindowTitle(QCoreApplication::translate("GestAffecterBI", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GestAffecterBI", "Information Personel", nullptr));
        label->setText(QCoreApplication::translate("GestAffecterBI", "Nom: ", nullptr));
        label_2->setText(QCoreApplication::translate("GestAffecterBI", "Prenom: ", nullptr));
        label_5->setText(QCoreApplication::translate("GestAffecterBI", "Numero de Pi\303\250ce :", nullptr));
        label_6->setText(QCoreApplication::translate("GestAffecterBI", "Contact: ", nullptr));
        label_4->setText(QCoreApplication::translate("GestAffecterBI", "Email: ", nullptr));
        label_10->setText(QCoreApplication::translate("GestAffecterBI", "Sexe :", nullptr));
        comboBoxSexe->setItemText(0, QCoreApplication::translate("GestAffecterBI", "Homme", nullptr));
        comboBoxSexe->setItemText(1, QCoreApplication::translate("GestAffecterBI", "Femme", nullptr));

        label_7->setText(QCoreApplication::translate("GestAffecterBI", "Date de Naissance:", nullptr));
        label_3->setText(QCoreApplication::translate("GestAffecterBI", "Id Bien Immobilier: ", nullptr));
        label_8->setText(QCoreApplication::translate("GestAffecterBI", "Type de Location :", nullptr));
        comboBoxTypeLocation->setItemText(0, QCoreApplication::translate("GestAffecterBI", "Long Terme", nullptr));
        comboBoxTypeLocation->setItemText(1, QCoreApplication::translate("GestAffecterBI", "Journali\303\250re", nullptr));

        pushButtonAnnuler->setText(QCoreApplication::translate("GestAffecterBI", "Annuler", nullptr));
        pushButtonAffecter->setText(QCoreApplication::translate("GestAffecterBI", "Affecter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestAffecterBI: public Ui_GestAffecterBI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTAFFECTERBI_H
