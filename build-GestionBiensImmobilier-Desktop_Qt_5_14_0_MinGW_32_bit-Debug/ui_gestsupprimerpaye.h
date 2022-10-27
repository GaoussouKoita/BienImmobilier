/********************************************************************************
** Form generated from reading UI file 'gestsupprimerpaye.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTSUPPRIMERPAYE_H
#define UI_GESTSUPPRIMERPAYE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_GestSupprimerPaye
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLineEdit *lineEditIdPayement;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonMettreAJour;
    QPushButton *pushButtonAnnuler;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GestSupprimerPaye)
    {
        if (GestSupprimerPaye->objectName().isEmpty())
            GestSupprimerPaye->setObjectName(QString::fromUtf8("GestSupprimerPaye"));
        GestSupprimerPaye->resize(594, 359);
        centralwidget = new QWidget(GestSupprimerPaye);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 50, 491, 151));
        QFont font;
        font.setFamily(QString::fromUtf8("Algerian"));
        font.setPointSize(12);
        groupBox->setFont(font);
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 40, 451, 81));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        lineEditIdPayement = new QLineEdit(gridLayoutWidget);
        lineEditIdPayement->setObjectName(QString::fromUtf8("lineEditIdPayement"));
        lineEditIdPayement->setFont(font1);

        gridLayout->addWidget(lineEditIdPayement, 0, 1, 1, 1);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 230, 301, 51));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonMettreAJour = new QPushButton(layoutWidget);
        pushButtonMettreAJour->setObjectName(QString::fromUtf8("pushButtonMettreAJour"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(12);
        pushButtonMettreAJour->setFont(font2);
        pushButtonMettreAJour->setStyleSheet(QString::fromUtf8("color: red;"));

        gridLayout_2->addWidget(pushButtonMettreAJour, 0, 0, 1, 1);

        pushButtonAnnuler = new QPushButton(layoutWidget);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));
        pushButtonAnnuler->setFont(font2);

        gridLayout_2->addWidget(pushButtonAnnuler, 0, 1, 1, 1);

        GestSupprimerPaye->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GestSupprimerPaye);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 594, 28));
        GestSupprimerPaye->setMenuBar(menubar);
        statusbar = new QStatusBar(GestSupprimerPaye);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GestSupprimerPaye->setStatusBar(statusbar);

        retranslateUi(GestSupprimerPaye);

        QMetaObject::connectSlotsByName(GestSupprimerPaye);
    } // setupUi

    void retranslateUi(QMainWindow *GestSupprimerPaye)
    {
        GestSupprimerPaye->setWindowTitle(QCoreApplication::translate("GestSupprimerPaye", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GestSupprimerPaye", "INFORMATION DU Payement", nullptr));
        label_5->setText(QCoreApplication::translate("GestSupprimerPaye", "ID Payement: ", nullptr));
        pushButtonMettreAJour->setText(QCoreApplication::translate("GestSupprimerPaye", "Suprrimer", nullptr));
        pushButtonAnnuler->setText(QCoreApplication::translate("GestSupprimerPaye", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestSupprimerPaye: public Ui_GestSupprimerPaye {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTSUPPRIMERPAYE_H
