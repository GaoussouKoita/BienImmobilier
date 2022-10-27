/********************************************************************************
** Form generated from reading UI file 'winadmineditbi.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINADMINEDITBI_H
#define UI_WINADMINEDITBI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WinAdminEditBI
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditIdBI;
    QGroupBox *groupBox_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditAdresse;
    QLabel *label_4;
    QLineEdit *lineEditMontant;
    QLabel *label_6;
    QSpinBox *spinBoxNbrdePieces;
    QLabel *label_2;
    QComboBox *lineEditType;
    QLabel *label_5;
    QPlainTextEdit *plainTextEditDetails;
    QLabel *label_7;
    QComboBox *comboBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonModifier;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WinAdminEditBI)
    {
        if (WinAdminEditBI->objectName().isEmpty())
            WinAdminEditBI->setObjectName(QString::fromUtf8("WinAdminEditBI"));
        WinAdminEditBI->resize(732, 688);
        centralwidget = new QWidget(WinAdminEditBI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(70, 40, 591, 141));
        QFont font;
        font.setFamily(QString::fromUtf8("Algerian"));
        font.setPointSize(12);
        groupBox->setFont(font);
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(40, 60, 511, 61));
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

        lineEditIdBI = new QLineEdit(formLayoutWidget);
        lineEditIdBI->setObjectName(QString::fromUtf8("lineEditIdBI"));
        lineEditIdBI->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditIdBI);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(70, 210, 591, 361));
        groupBox_2->setFont(font);
        formLayoutWidget_2 = new QWidget(groupBox_2);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(40, 40, 511, 311));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEditAdresse = new QLineEdit(formLayoutWidget_2);
        lineEditAdresse->setObjectName(QString::fromUtf8("lineEditAdresse"));
        lineEditAdresse->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEditAdresse);

        label_4 = new QLabel(formLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        lineEditMontant = new QLineEdit(formLayoutWidget_2);
        lineEditMontant->setObjectName(QString::fromUtf8("lineEditMontant"));
        lineEditMontant->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEditMontant);

        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_6);

        spinBoxNbrdePieces = new QSpinBox(formLayoutWidget_2);
        spinBoxNbrdePieces->setObjectName(QString::fromUtf8("spinBoxNbrdePieces"));
        spinBoxNbrdePieces->setFont(font1);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, spinBoxNbrdePieces);

        label_2 = new QLabel(formLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        label_2->setFont(font2);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_2);

        lineEditType = new QComboBox(formLayoutWidget_2);
        lineEditType->addItem(QString());
        lineEditType->addItem(QString());
        lineEditType->addItem(QString());
        lineEditType->setObjectName(QString::fromUtf8("lineEditType"));
        lineEditType->setFont(font2);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEditType);

        label_5 = new QLabel(formLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_5);

        plainTextEditDetails = new QPlainTextEdit(formLayoutWidget_2);
        plainTextEditDetails->setObjectName(QString::fromUtf8("plainTextEditDetails"));
        plainTextEditDetails->setFont(font2);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, plainTextEditDetails);

        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_7);

        comboBox = new QComboBox(formLayoutWidget_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font2);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, comboBox);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(210, 590, 301, 51));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonCancel = new QPushButton(gridLayoutWidget);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setFont(font1);

        gridLayout->addWidget(pushButtonCancel, 0, 1, 1, 1);

        pushButtonModifier = new QPushButton(gridLayoutWidget);
        pushButtonModifier->setObjectName(QString::fromUtf8("pushButtonModifier"));
        pushButtonModifier->setFont(font1);

        gridLayout->addWidget(pushButtonModifier, 0, 0, 1, 1);

        WinAdminEditBI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WinAdminEditBI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 732, 28));
        WinAdminEditBI->setMenuBar(menubar);
        statusbar = new QStatusBar(WinAdminEditBI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WinAdminEditBI->setStatusBar(statusbar);

        retranslateUi(WinAdminEditBI);

        QMetaObject::connectSlotsByName(WinAdminEditBI);
    } // setupUi

    void retranslateUi(QMainWindow *WinAdminEditBI)
    {
        WinAdminEditBI->setWindowTitle(QCoreApplication::translate("WinAdminEditBI", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WinAdminEditBI", "Information actuelle", nullptr));
        label->setText(QCoreApplication::translate("WinAdminEditBI", "Id Bien Immobilier : ", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("WinAdminEditBI", "Nouvelle information", nullptr));
        label_3->setText(QCoreApplication::translate("WinAdminEditBI", "Adresse: ", nullptr));
        label_4->setText(QCoreApplication::translate("WinAdminEditBI", "Montant: ", nullptr));
        label_6->setText(QCoreApplication::translate("WinAdminEditBI", "Nombre de Pieces:", nullptr));
        label_2->setText(QCoreApplication::translate("WinAdminEditBI", "Type : ", nullptr));
        lineEditType->setItemText(0, QCoreApplication::translate("WinAdminEditBI", "Appartement", nullptr));
        lineEditType->setItemText(1, QCoreApplication::translate("WinAdminEditBI", "Studio", nullptr));
        lineEditType->setItemText(2, QCoreApplication::translate("WinAdminEditBI", "Villa", nullptr));

        label_5->setText(QCoreApplication::translate("WinAdminEditBI", "Details: ", nullptr));
        label_7->setText(QCoreApplication::translate("WinAdminEditBI", "Statut : ", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("WinAdminEditBI", "Non Occup\303\251", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("WinAdminEditBI", "Occup\303\251", nullptr));

        pushButtonCancel->setText(QCoreApplication::translate("WinAdminEditBI", "Annuler", nullptr));
        pushButtonModifier->setText(QCoreApplication::translate("WinAdminEditBI", "Modifier", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinAdminEditBI: public Ui_WinAdminEditBI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINADMINEDITBI_H
