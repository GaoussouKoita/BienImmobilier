/********************************************************************************
** Form generated from reading UI file 'winadminajoutbi.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINADMINAJOUTBI_H
#define UI_WINADMINAJOUTBI_H

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

class Ui_WinAdminAjoutBI
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *lineEditAdresse;
    QSpinBox *spinBoxNbrePiece;
    QLineEdit *lineEditMontant;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QPlainTextEdit *plainTextEditDetails;
    QComboBox *lineEditType;
    QComboBox *comboBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonAjouter;
    QPushButton *pushButtonCancel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WinAdminAjoutBI)
    {
        if (WinAdminAjoutBI->objectName().isEmpty())
            WinAdminAjoutBI->setObjectName(QString::fromUtf8("WinAdminAjoutBI"));
        WinAdminAjoutBI->resize(796, 605);
        centralwidget = new QWidget(WinAdminAjoutBI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(90, 30, 571, 421));
        QFont font;
        font.setFamily(QString::fromUtf8("Algerian"));
        font.setPointSize(12);
        groupBox->setFont(font);
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 50, 501, 321));
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

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEditAdresse = new QLineEdit(formLayoutWidget);
        lineEditAdresse->setObjectName(QString::fromUtf8("lineEditAdresse"));
        lineEditAdresse->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditAdresse);

        spinBoxNbrePiece = new QSpinBox(formLayoutWidget);
        spinBoxNbrePiece->setObjectName(QString::fromUtf8("spinBoxNbrePiece"));
        spinBoxNbrePiece->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBoxNbrePiece);

        lineEditMontant = new QLineEdit(formLayoutWidget);
        lineEditMontant->setObjectName(QString::fromUtf8("lineEditMontant"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        lineEditMontant->setFont(font2);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditMontant);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_2);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        plainTextEditDetails = new QPlainTextEdit(formLayoutWidget);
        plainTextEditDetails->setObjectName(QString::fromUtf8("plainTextEditDetails"));
        plainTextEditDetails->setFont(font1);

        formLayout->setWidget(5, QFormLayout::FieldRole, plainTextEditDetails);

        lineEditType = new QComboBox(formLayoutWidget);
        lineEditType->addItem(QString());
        lineEditType->addItem(QString());
        lineEditType->addItem(QString());
        lineEditType->setObjectName(QString::fromUtf8("lineEditType"));
        lineEditType->setFont(font2);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditType);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font2);

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(150, 490, 431, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonAjouter = new QPushButton(gridLayoutWidget);
        pushButtonAjouter->setObjectName(QString::fromUtf8("pushButtonAjouter"));
        pushButtonAjouter->setFont(font1);

        gridLayout->addWidget(pushButtonAjouter, 0, 0, 1, 1);

        pushButtonCancel = new QPushButton(gridLayoutWidget);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setFont(font1);

        gridLayout->addWidget(pushButtonCancel, 0, 1, 1, 1);

        WinAdminAjoutBI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WinAdminAjoutBI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 796, 28));
        WinAdminAjoutBI->setMenuBar(menubar);
        statusbar = new QStatusBar(WinAdminAjoutBI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WinAdminAjoutBI->setStatusBar(statusbar);

        retranslateUi(WinAdminAjoutBI);

        QMetaObject::connectSlotsByName(WinAdminAjoutBI);
    } // setupUi

    void retranslateUi(QMainWindow *WinAdminAjoutBI)
    {
        WinAdminAjoutBI->setWindowTitle(QCoreApplication::translate("WinAdminAjoutBI", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WinAdminAjoutBI", "Caracteristiques du Bien", nullptr));
        label->setText(QCoreApplication::translate("WinAdminAjoutBI", "Adresse: ", nullptr));
        label_4->setText(QCoreApplication::translate("WinAdminAjoutBI", "Montant: ", nullptr));
        label_3->setText(QCoreApplication::translate("WinAdminAjoutBI", "Nombre de Piece: ", nullptr));
        label_2->setText(QCoreApplication::translate("WinAdminAjoutBI", "Details ", nullptr));
        label_5->setText(QCoreApplication::translate("WinAdminAjoutBI", "Type: ", nullptr));
        label_6->setText(QCoreApplication::translate("WinAdminAjoutBI", "Statut: ", nullptr));
        lineEditType->setItemText(0, QCoreApplication::translate("WinAdminAjoutBI", "Appartement", nullptr));
        lineEditType->setItemText(1, QCoreApplication::translate("WinAdminAjoutBI", "Studio", nullptr));
        lineEditType->setItemText(2, QCoreApplication::translate("WinAdminAjoutBI", "Villa", nullptr));

        comboBox->setItemText(0, QCoreApplication::translate("WinAdminAjoutBI", "Non Occup\303\251", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("WinAdminAjoutBI", "Occup\303\251", nullptr));

        pushButtonAjouter->setText(QCoreApplication::translate("WinAdminAjoutBI", "Ajouter", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("WinAdminAjoutBI", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinAdminAjoutBI: public Ui_WinAdminAjoutBI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINADMINAJOUTBI_H
