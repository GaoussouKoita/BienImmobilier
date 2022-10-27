/********************************************************************************
** Form generated from reading UI file 'locatairelongterme.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCATAIRELONGTERME_H
#define UI_LOCATAIRELONGTERME_H

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

class Ui_LocataireLongTerme
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonEnregistre;
    QPushButton *pushButtonAnnuler;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEditMontant;
    QLineEdit *lineEditIdBI;
    QLabel *label_4;
    QDateEdit *dateEditDate;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LocataireLongTerme)
    {
        if (LocataireLongTerme->objectName().isEmpty())
            LocataireLongTerme->setObjectName(QString::fromUtf8("LocataireLongTerme"));
        LocataireLongTerme->resize(572, 451);
        centralwidget = new QWidget(LocataireLongTerme);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 320, 301, 51));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonEnregistre = new QPushButton(layoutWidget);
        pushButtonEnregistre->setObjectName(QString::fromUtf8("pushButtonEnregistre"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        pushButtonEnregistre->setFont(font);

        gridLayout_2->addWidget(pushButtonEnregistre, 0, 0, 1, 1);

        pushButtonAnnuler = new QPushButton(layoutWidget);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));
        pushButtonAnnuler->setFont(font);

        gridLayout_2->addWidget(pushButtonAnnuler, 0, 1, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 491, 271));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Algerian"));
        font1.setPointSize(12);
        groupBox->setFont(font1);
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 40, 451, 201));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditMontant = new QLineEdit(gridLayoutWidget);
        lineEditMontant->setObjectName(QString::fromUtf8("lineEditMontant"));
        lineEditMontant->setFont(font);

        gridLayout->addWidget(lineEditMontant, 1, 1, 1, 1);

        lineEditIdBI = new QLineEdit(gridLayoutWidget);
        lineEditIdBI->setObjectName(QString::fromUtf8("lineEditIdBI"));
        lineEditIdBI->setFont(font);

        gridLayout->addWidget(lineEditIdBI, 2, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        dateEditDate = new QDateEdit(gridLayoutWidget);
        dateEditDate->setObjectName(QString::fromUtf8("dateEditDate"));
        dateEditDate->setFont(font);

        gridLayout->addWidget(dateEditDate, 0, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        LocataireLongTerme->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LocataireLongTerme);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 572, 28));
        LocataireLongTerme->setMenuBar(menubar);
        statusbar = new QStatusBar(LocataireLongTerme);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LocataireLongTerme->setStatusBar(statusbar);

        retranslateUi(LocataireLongTerme);

        QMetaObject::connectSlotsByName(LocataireLongTerme);
    } // setupUi

    void retranslateUi(QMainWindow *LocataireLongTerme)
    {
        LocataireLongTerme->setWindowTitle(QCoreApplication::translate("LocataireLongTerme", "MainWindow", nullptr));
        pushButtonEnregistre->setText(QCoreApplication::translate("LocataireLongTerme", "Enregistrer", nullptr));
        pushButtonAnnuler->setText(QCoreApplication::translate("LocataireLongTerme", "Annuler", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LocataireLongTerme", "Payement d'un Locataire", nullptr));
        label_2->setText(QCoreApplication::translate("LocataireLongTerme", "Montant :", nullptr));
        label_4->setText(QCoreApplication::translate("LocataireLongTerme", "Id Bien Immobilier:", nullptr));
        label_3->setText(QCoreApplication::translate("LocataireLongTerme", "Date :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LocataireLongTerme: public Ui_LocataireLongTerme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCATAIRELONGTERME_H
