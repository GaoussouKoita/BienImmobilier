/********************************************************************************
** Form generated from reading UI file 'gestmodifierpaye.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTMODIFIERPAYE_H
#define UI_GESTMODIFIERPAYE_H

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

class Ui_GestModifierPaye
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *lineEditIdPayement;
    QLabel *label_4;
    QLabel *label_5;
    QDateEdit *dateEditDate;
    QLineEdit *lineEditMontant;
    QLineEdit *lineEditIdBI;
    QLabel *label_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonModifier;
    QPushButton *pushButtonAnnuler;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GestModifierPaye)
    {
        if (GestModifierPaye->objectName().isEmpty())
            GestModifierPaye->setObjectName(QString::fromUtf8("GestModifierPaye"));
        GestModifierPaye->resize(653, 568);
        centralwidget = new QWidget(GestModifierPaye);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 30, 541, 301));
        QFont font;
        font.setFamily(QString::fromUtf8("Algerian"));
        font.setPointSize(12);
        groupBox->setFont(font);
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 40, 491, 241));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEditIdPayement = new QLineEdit(gridLayoutWidget);
        lineEditIdPayement->setObjectName(QString::fromUtf8("lineEditIdPayement"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        lineEditIdPayement->setFont(font2);

        gridLayout->addWidget(lineEditIdPayement, 0, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        dateEditDate = new QDateEdit(gridLayoutWidget);
        dateEditDate->setObjectName(QString::fromUtf8("dateEditDate"));
        dateEditDate->setFont(font1);

        gridLayout->addWidget(dateEditDate, 1, 1, 1, 1);

        lineEditMontant = new QLineEdit(gridLayoutWidget);
        lineEditMontant->setObjectName(QString::fromUtf8("lineEditMontant"));
        lineEditMontant->setFont(font1);

        gridLayout->addWidget(lineEditMontant, 2, 1, 1, 1);

        lineEditIdBI = new QLineEdit(gridLayoutWidget);
        lineEditIdBI->setObjectName(QString::fromUtf8("lineEditIdBI"));
        lineEditIdBI->setFont(font1);

        gridLayout->addWidget(lineEditIdBI, 3, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 380, 301, 51));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonModifier = new QPushButton(layoutWidget);
        pushButtonModifier->setObjectName(QString::fromUtf8("pushButtonModifier"));
        pushButtonModifier->setFont(font1);

        gridLayout_2->addWidget(pushButtonModifier, 0, 0, 1, 1);

        pushButtonAnnuler = new QPushButton(layoutWidget);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));
        pushButtonAnnuler->setFont(font1);

        gridLayout_2->addWidget(pushButtonAnnuler, 0, 1, 1, 1);

        GestModifierPaye->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GestModifierPaye);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 653, 28));
        GestModifierPaye->setMenuBar(menubar);
        statusbar = new QStatusBar(GestModifierPaye);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GestModifierPaye->setStatusBar(statusbar);

        retranslateUi(GestModifierPaye);

        QMetaObject::connectSlotsByName(GestModifierPaye);
    } // setupUi

    void retranslateUi(QMainWindow *GestModifierPaye)
    {
        GestModifierPaye->setWindowTitle(QCoreApplication::translate("GestModifierPaye", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GestModifierPaye", "Payement d'un Locataire", nullptr));
        label_3->setText(QCoreApplication::translate("GestModifierPaye", "Date :", nullptr));
        label_4->setText(QCoreApplication::translate("GestModifierPaye", "Id Bien Immobilier :", nullptr));
        label_5->setText(QCoreApplication::translate("GestModifierPaye", "Id Payement :", nullptr));
        label_2->setText(QCoreApplication::translate("GestModifierPaye", "Montant :", nullptr));
        pushButtonModifier->setText(QCoreApplication::translate("GestModifierPaye", "Modifier", nullptr));
        pushButtonAnnuler->setText(QCoreApplication::translate("GestModifierPaye", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestModifierPaye: public Ui_GestModifierPaye {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTMODIFIERPAYE_H
