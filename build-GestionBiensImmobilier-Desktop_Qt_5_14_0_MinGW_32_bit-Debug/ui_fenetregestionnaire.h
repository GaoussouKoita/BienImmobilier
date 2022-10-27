/********************************************************************************
** Form generated from reading UI file 'fenetregestionnaire.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREGESTIONNAIRE_H
#define UI_FENETREGESTIONNAIRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetreGestionnaire
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonModifier;
    QPushButton *pushButtonEnregistrer;
    QPushButton *pushButtonSupprimer;
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButtonPaye;
    QPushButton *pushButtonArriere;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonConsulter;
    QPushButton *pushButtonAffecter;
    QGroupBox *groupBox_4;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QPushButton *pushButtonLibererBI;
    QPushButton *pushButtonConsulterLocataire;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FenetreGestionnaire)
    {
        if (FenetreGestionnaire->objectName().isEmpty())
            FenetreGestionnaire->setObjectName(QString::fromUtf8("FenetreGestionnaire"));
        FenetreGestionnaire->resize(694, 692);
        centralwidget = new QWidget(FenetreGestionnaire);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(60, 170, 571, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("Algerian"));
        font.setPointSize(12);
        groupBox_2->setFont(font);
        gridLayoutWidget_2 = new QWidget(groupBox_2);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(40, 40, 471, 41));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonModifier = new QPushButton(gridLayoutWidget_2);
        pushButtonModifier->setObjectName(QString::fromUtf8("pushButtonModifier"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        pushButtonModifier->setFont(font1);

        gridLayout_2->addWidget(pushButtonModifier, 0, 1, 1, 1);

        pushButtonEnregistrer = new QPushButton(gridLayoutWidget_2);
        pushButtonEnregistrer->setObjectName(QString::fromUtf8("pushButtonEnregistrer"));
        pushButtonEnregistrer->setFont(font1);

        gridLayout_2->addWidget(pushButtonEnregistrer, 0, 0, 1, 1);

        pushButtonSupprimer = new QPushButton(gridLayoutWidget_2);
        pushButtonSupprimer->setObjectName(QString::fromUtf8("pushButtonSupprimer"));
        pushButtonSupprimer->setFont(font1);

        gridLayout_2->addWidget(pushButtonSupprimer, 0, 2, 1, 1);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(60, 330, 571, 121));
        groupBox_3->setFont(font);
        gridLayoutWidget_3 = new QWidget(groupBox_3);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(100, 50, 361, 41));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonPaye = new QPushButton(gridLayoutWidget_3);
        pushButtonPaye->setObjectName(QString::fromUtf8("pushButtonPaye"));
        pushButtonPaye->setFont(font1);

        gridLayout_3->addWidget(pushButtonPaye, 0, 0, 1, 1);

        pushButtonArriere = new QPushButton(gridLayoutWidget_3);
        pushButtonArriere->setObjectName(QString::fromUtf8("pushButtonArriere"));
        pushButtonArriere->setFont(font1);

        gridLayout_3->addWidget(pushButtonArriere, 0, 1, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 20, 571, 111));
        groupBox->setFont(font);
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 50, 461, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonConsulter = new QPushButton(gridLayoutWidget);
        pushButtonConsulter->setObjectName(QString::fromUtf8("pushButtonConsulter"));
        pushButtonConsulter->setFont(font1);

        gridLayout->addWidget(pushButtonConsulter, 0, 0, 1, 1);

        pushButtonAffecter = new QPushButton(gridLayoutWidget);
        pushButtonAffecter->setObjectName(QString::fromUtf8("pushButtonAffecter"));
        pushButtonAffecter->setFont(font1);

        gridLayout->addWidget(pushButtonAffecter, 0, 1, 1, 1);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(60, 500, 571, 121));
        groupBox_4->setFont(font);
        gridLayoutWidget_4 = new QWidget(groupBox_4);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(30, 50, 485, 51));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButtonLibererBI = new QPushButton(gridLayoutWidget_4);
        pushButtonLibererBI->setObjectName(QString::fromUtf8("pushButtonLibererBI"));
        pushButtonLibererBI->setFont(font1);

        gridLayout_4->addWidget(pushButtonLibererBI, 0, 0, 1, 1);

        pushButtonConsulterLocataire = new QPushButton(gridLayoutWidget_4);
        pushButtonConsulterLocataire->setObjectName(QString::fromUtf8("pushButtonConsulterLocataire"));
        pushButtonConsulterLocataire->setFont(font1);

        gridLayout_4->addWidget(pushButtonConsulterLocataire, 0, 1, 1, 1);

        FenetreGestionnaire->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FenetreGestionnaire);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 694, 28));
        FenetreGestionnaire->setMenuBar(menubar);
        statusbar = new QStatusBar(FenetreGestionnaire);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FenetreGestionnaire->setStatusBar(statusbar);

        retranslateUi(FenetreGestionnaire);

        QMetaObject::connectSlotsByName(FenetreGestionnaire);
    } // setupUi

    void retranslateUi(QMainWindow *FenetreGestionnaire)
    {
        FenetreGestionnaire->setWindowTitle(QCoreApplication::translate("FenetreGestionnaire", "MainWindow", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("FenetreGestionnaire", "Gestion Paiement", nullptr));
        pushButtonModifier->setText(QCoreApplication::translate("FenetreGestionnaire", "Modifier", nullptr));
        pushButtonEnregistrer->setText(QCoreApplication::translate("FenetreGestionnaire", "Enregistrer", nullptr));
        pushButtonSupprimer->setText(QCoreApplication::translate("FenetreGestionnaire", "Supprimer", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("FenetreGestionnaire", "Statistique", nullptr));
        pushButtonPaye->setText(QCoreApplication::translate("FenetreGestionnaire", "Pay\303\251", nullptr));
        pushButtonArriere->setText(QCoreApplication::translate("FenetreGestionnaire", "Arri\303\251r\303\251", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FenetreGestionnaire", "Gestion Bien Immobiliers", nullptr));
        pushButtonConsulter->setText(QCoreApplication::translate("FenetreGestionnaire", "Consulter", nullptr));
        pushButtonAffecter->setText(QCoreApplication::translate("FenetreGestionnaire", "Affecter", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("FenetreGestionnaire", "Divers", nullptr));
        pushButtonLibererBI->setText(QCoreApplication::translate("FenetreGestionnaire", "Liberer un Bien Immobilier", nullptr));
        pushButtonConsulterLocataire->setText(QCoreApplication::translate("FenetreGestionnaire", "Consulter les Locataires", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FenetreGestionnaire: public Ui_FenetreGestionnaire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREGESTIONNAIRE_H
