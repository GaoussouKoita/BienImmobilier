/********************************************************************************
** Form generated from reading UI file 'winadminadduser.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINADMINADDUSER_H
#define UI_WINADMINADDUSER_H

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

class Ui_WinAdminAddUser
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
    QLineEdit *lineEditAdresse;
    QLabel *label_6;
    QLineEdit *lineEditContact;
    QLabel *label_7;
    QDateEdit *dateEditDateDeNaissance;
    QLabel *label_4;
    QLineEdit *lineEditEMail;
    QLabel *label_10;
    QComboBox *comboBoxTypeCompte;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonCancel;
    QGroupBox *groupBox_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEditLogin;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditConfirmation;
    QLabel *connexion;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WinAdminAddUser)
    {
        if (WinAdminAddUser->objectName().isEmpty())
            WinAdminAddUser->setObjectName(QString::fromUtf8("WinAdminAddUser"));
        WinAdminAddUser->resize(800, 828);
        centralwidget = new QWidget(WinAdminAddUser);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(110, 30, 571, 331));
        QFont font;
        font.setFamily(QString::fromUtf8("Algerian"));
        font.setPointSize(12);
        groupBox->setFont(font);
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 40, 491, 287));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        label->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        lineEditNom = new QLineEdit(formLayoutWidget);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        lineEditNom->setFont(font2);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditNom);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEditPrenom = new QLineEdit(formLayoutWidget);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));
        lineEditPrenom->setFont(font2);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditPrenom);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        lineEditAdresse = new QLineEdit(formLayoutWidget);
        lineEditAdresse->setObjectName(QString::fromUtf8("lineEditAdresse"));
        lineEditAdresse->setFont(font2);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditAdresse);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        lineEditContact = new QLineEdit(formLayoutWidget);
        lineEditContact->setObjectName(QString::fromUtf8("lineEditContact"));
        lineEditContact->setFont(font2);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditContact);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        dateEditDateDeNaissance = new QDateEdit(formLayoutWidget);
        dateEditDateDeNaissance->setObjectName(QString::fromUtf8("dateEditDateDeNaissance"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Vani"));
        dateEditDateDeNaissance->setFont(font3);

        formLayout->setWidget(5, QFormLayout::FieldRole, dateEditDateDeNaissance);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);

        lineEditEMail = new QLineEdit(formLayoutWidget);
        lineEditEMail->setObjectName(QString::fromUtf8("lineEditEMail"));
        lineEditEMail->setFont(font2);

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEditEMail);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font2);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_10);

        comboBoxTypeCompte = new QComboBox(formLayoutWidget);
        comboBoxTypeCompte->addItem(QString());
        comboBoxTypeCompte->addItem(QString());
        comboBoxTypeCompte->setObjectName(QString::fromUtf8("comboBoxTypeCompte"));
        comboBoxTypeCompte->setFont(font2);

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBoxTypeCompte);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(190, 610, 411, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonSave = new QPushButton(gridLayoutWidget);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setFont(font1);

        gridLayout->addWidget(pushButtonSave, 0, 0, 1, 1);

        pushButtonCancel = new QPushButton(gridLayoutWidget);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setFont(font1);

        gridLayout->addWidget(pushButtonCancel, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(110, 400, 571, 171));
        groupBox_2->setFont(font);
        formLayoutWidget_2 = new QWidget(groupBox_2);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(30, 40, 491, 121));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_9);

        lineEditLogin = new QLineEdit(formLayoutWidget_2);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));
        lineEditLogin->setFont(font2);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEditLogin);

        lineEditPassword = new QLineEdit(formLayoutWidget_2);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setFont(font2);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEditPassword);

        lineEditConfirmation = new QLineEdit(formLayoutWidget_2);
        lineEditConfirmation->setObjectName(QString::fromUtf8("lineEditConfirmation"));
        lineEditConfirmation->setFont(font2);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEditConfirmation);

        connexion = new QLabel(centralwidget);
        connexion->setObjectName(QString::fromUtf8("connexion"));
        connexion->setGeometry(QRect(120, 730, 231, 31));
        WinAdminAddUser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WinAdminAddUser);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        WinAdminAddUser->setMenuBar(menubar);
        statusbar = new QStatusBar(WinAdminAddUser);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WinAdminAddUser->setStatusBar(statusbar);

        retranslateUi(WinAdminAddUser);

        QMetaObject::connectSlotsByName(WinAdminAddUser);
    } // setupUi

    void retranslateUi(QMainWindow *WinAdminAddUser)
    {
        WinAdminAddUser->setWindowTitle(QCoreApplication::translate("WinAdminAddUser", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WinAdminAddUser", "Information Personel", nullptr));
        label->setText(QCoreApplication::translate("WinAdminAddUser", "Nom: ", nullptr));
        label_2->setText(QCoreApplication::translate("WinAdminAddUser", "Prenom: ", nullptr));
        label_5->setText(QCoreApplication::translate("WinAdminAddUser", "Adresse: ", nullptr));
        label_6->setText(QCoreApplication::translate("WinAdminAddUser", "Contact: ", nullptr));
        label_7->setText(QCoreApplication::translate("WinAdminAddUser", "Date de Naissance:", nullptr));
        label_4->setText(QCoreApplication::translate("WinAdminAddUser", "Email: ", nullptr));
        label_10->setText(QCoreApplication::translate("WinAdminAddUser", "Type du Compte: ", nullptr));
        comboBoxTypeCompte->setItemText(0, QCoreApplication::translate("WinAdminAddUser", "Administrateur", nullptr));
        comboBoxTypeCompte->setItemText(1, QCoreApplication::translate("WinAdminAddUser", "Gestionnaire", nullptr));

        pushButtonSave->setText(QCoreApplication::translate("WinAdminAddUser", "Sauvegarder", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("WinAdminAddUser", "Annuler", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("WinAdminAddUser", " Identifiant de Connection", nullptr));
        label_3->setText(QCoreApplication::translate("WinAdminAddUser", "Login: ", nullptr));
        label_8->setText(QCoreApplication::translate("WinAdminAddUser", "Confirmation:", nullptr));
        label_9->setText(QCoreApplication::translate("WinAdminAddUser", "Password: ", nullptr));
        connexion->setText(QCoreApplication::translate("WinAdminAddUser", "Connexion....", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinAdminAddUser: public Ui_WinAdminAddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINADMINADDUSER_H
