/********************************************************************************
** Form generated from reading UI file 'gestconsulterlocataire.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTCONSULTERLOCATAIRE_H
#define UI_GESTCONSULTERLOCATAIRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GestConsulterLocataire
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditNomLocataire;
    QLabel *label_5;
    QLineEdit *lineEditPrenomLocataire;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonConsulter;
    QPushButton *pushButtonAnnuler;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GestConsulterLocataire)
    {
        if (GestConsulterLocataire->objectName().isEmpty())
            GestConsulterLocataire->setObjectName(QString::fromUtf8("GestConsulterLocataire"));
        GestConsulterLocataire->resize(1102, 624);
        centralwidget = new QWidget(GestConsulterLocataire);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 30, 671, 131));
        QFont font;
        font.setFamily(QString::fromUtf8("Algerian"));
        font.setPointSize(12);
        groupBox->setFont(font);
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 40, 451, 80));
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

        lineEditNomLocataire = new QLineEdit(formLayoutWidget);
        lineEditNomLocataire->setObjectName(QString::fromUtf8("lineEditNomLocataire"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        lineEditNomLocataire->setFont(font2);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditNomLocataire);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        lineEditPrenomLocataire = new QLineEdit(formLayoutWidget);
        lineEditPrenomLocataire->setObjectName(QString::fromUtf8("lineEditPrenomLocataire"));
        lineEditPrenomLocataire->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditPrenomLocataire);

        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(510, 40, 141, 78));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonConsulter = new QPushButton(layoutWidget);
        pushButtonConsulter->setObjectName(QString::fromUtf8("pushButtonConsulter"));
        pushButtonConsulter->setFont(font1);
        pushButtonConsulter->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(pushButtonConsulter);

        pushButtonAnnuler = new QPushButton(layoutWidget);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));
        pushButtonAnnuler->setFont(font1);

        verticalLayout->addWidget(pushButtonAnnuler);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 180, 671, 241));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(11);
        tableView->setFont(font3);
        GestConsulterLocataire->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GestConsulterLocataire);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1102, 28));
        GestConsulterLocataire->setMenuBar(menubar);
        statusbar = new QStatusBar(GestConsulterLocataire);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GestConsulterLocataire->setStatusBar(statusbar);

        retranslateUi(GestConsulterLocataire);

        QMetaObject::connectSlotsByName(GestConsulterLocataire);
    } // setupUi

    void retranslateUi(QMainWindow *GestConsulterLocataire)
    {
        GestConsulterLocataire->setWindowTitle(QCoreApplication::translate("GestConsulterLocataire", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GestConsulterLocataire", "Information du Locataire", nullptr));
        label->setText(QCoreApplication::translate("GestConsulterLocataire", "Nom Locataire :", nullptr));
        label_5->setText(QCoreApplication::translate("GestConsulterLocataire", "Prenom Locataire :", nullptr));
        pushButtonConsulter->setText(QCoreApplication::translate("GestConsulterLocataire", "Consulter", nullptr));
        pushButtonAnnuler->setText(QCoreApplication::translate("GestConsulterLocataire", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestConsulterLocataire: public Ui_GestConsulterLocataire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTCONSULTERLOCATAIRE_H
