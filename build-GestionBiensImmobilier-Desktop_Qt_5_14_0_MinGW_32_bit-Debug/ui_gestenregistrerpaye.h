/********************************************************************************
** Form generated from reading UI file 'gestenregistrerpaye.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTENREGISTRERPAYE_H
#define UI_GESTENREGISTRERPAYE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
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

class Ui_GestEnregistrerPaye
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QDateEdit *dateEditDate;
    QLineEdit *lineEditMontant;
    QLineEdit *lineEditNomLocataire;
    QLineEdit *lineEditIdBI;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *lineEditPrenomLocataire;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonEnregistre;
    QPushButton *pushButtonAnnuler;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GestEnregistrerPaye)
    {
        if (GestEnregistrerPaye->objectName().isEmpty())
            GestEnregistrerPaye->setObjectName(QString::fromUtf8("GestEnregistrerPaye"));
        GestEnregistrerPaye->resize(585, 444);
        centralwidget = new QWidget(GestEnregistrerPaye);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 30, 491, 271));
        QFont font;
        font.setFamily(QString::fromUtf8("Algerian"));
        font.setPointSize(12);
        groupBox->setFont(font);
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 40, 451, 201));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        dateEditDate = new QDateEdit(gridLayoutWidget);
        dateEditDate->setObjectName(QString::fromUtf8("dateEditDate"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        dateEditDate->setFont(font1);

        gridLayout->addWidget(dateEditDate, 0, 1, 1, 1);

        lineEditMontant = new QLineEdit(gridLayoutWidget);
        lineEditMontant->setObjectName(QString::fromUtf8("lineEditMontant"));
        lineEditMontant->setFont(font1);

        gridLayout->addWidget(lineEditMontant, 1, 1, 1, 1);

        lineEditNomLocataire = new QLineEdit(gridLayoutWidget);
        lineEditNomLocataire->setObjectName(QString::fromUtf8("lineEditNomLocataire"));
        lineEditNomLocataire->setFont(font1);

        gridLayout->addWidget(lineEditNomLocataire, 2, 1, 1, 1);

        lineEditIdBI = new QLineEdit(gridLayoutWidget);
        lineEditIdBI->setObjectName(QString::fromUtf8("lineEditIdBI"));
        lineEditIdBI->setFont(font1);

        gridLayout->addWidget(lineEditIdBI, 4, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        label_5->setFont(font2);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        lineEditPrenomLocataire = new QLineEdit(gridLayoutWidget);
        lineEditPrenomLocataire->setObjectName(QString::fromUtf8("lineEditPrenomLocataire"));
        lineEditPrenomLocataire->setFont(font2);

        gridLayout->addWidget(lineEditPrenomLocataire, 3, 1, 1, 1);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 320, 301, 51));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonEnregistre = new QPushButton(layoutWidget);
        pushButtonEnregistre->setObjectName(QString::fromUtf8("pushButtonEnregistre"));
        pushButtonEnregistre->setFont(font1);

        gridLayout_2->addWidget(pushButtonEnregistre, 0, 0, 1, 1);

        pushButtonAnnuler = new QPushButton(layoutWidget);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));
        pushButtonAnnuler->setFont(font1);

        gridLayout_2->addWidget(pushButtonAnnuler, 0, 1, 1, 1);

        GestEnregistrerPaye->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GestEnregistrerPaye);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 585, 28));
        GestEnregistrerPaye->setMenuBar(menubar);
        statusbar = new QStatusBar(GestEnregistrerPaye);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GestEnregistrerPaye->setStatusBar(statusbar);

        retranslateUi(GestEnregistrerPaye);

        QMetaObject::connectSlotsByName(GestEnregistrerPaye);
    } // setupUi

    void retranslateUi(QMainWindow *GestEnregistrerPaye)
    {
        GestEnregistrerPaye->setWindowTitle(QCoreApplication::translate("GestEnregistrerPaye", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GestEnregistrerPaye", "Payement d'un Locataire", nullptr));
        label->setText(QCoreApplication::translate("GestEnregistrerPaye", "Nom Locataire :", nullptr));
        label_2->setText(QCoreApplication::translate("GestEnregistrerPaye", "Montant :", nullptr));
        label_4->setText(QCoreApplication::translate("GestEnregistrerPaye", "Id Bien Immobilier:", nullptr));
        label_3->setText(QCoreApplication::translate("GestEnregistrerPaye", "Date :", nullptr));
        label_5->setText(QCoreApplication::translate("GestEnregistrerPaye", "Prenom Locataire :", nullptr));
        pushButtonEnregistre->setText(QCoreApplication::translate("GestEnregistrerPaye", "Enregistrer", nullptr));
        pushButtonAnnuler->setText(QCoreApplication::translate("GestEnregistrerPaye", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestEnregistrerPaye: public Ui_GestEnregistrerPaye {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTENREGISTRERPAYE_H
