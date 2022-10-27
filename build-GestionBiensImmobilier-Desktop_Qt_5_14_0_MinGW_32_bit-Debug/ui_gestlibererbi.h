/********************************************************************************
** Form generated from reading UI file 'gestlibererbi.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTLIBERERBI_H
#define UI_GESTLIBERERBI_H

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

class Ui_GestLibererBI
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEditIdBI;
    QLabel *label_5;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButtonLiberer;
    QPushButton *pushButtonAnnuler;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GestLibererBI)
    {
        if (GestLibererBI->objectName().isEmpty())
            GestLibererBI->setObjectName(QString::fromUtf8("GestLibererBI"));
        GestLibererBI->resize(766, 375);
        centralwidget = new QWidget(GestLibererBI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 671, 181));
        QFont font;
        font.setFamily(QString::fromUtf8("Algerian"));
        font.setPointSize(12);
        groupBox->setFont(font);
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 50, 621, 91));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));

        gridLayout->addLayout(gridLayout_2, 1, 2, 1, 1);

        lineEditIdBI = new QLineEdit(gridLayoutWidget);
        lineEditIdBI->setObjectName(QString::fromUtf8("lineEditIdBI"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        lineEditIdBI->setFont(font1);

        gridLayout->addWidget(lineEditIdBI, 1, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(180, 250, 431, 41));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonLiberer = new QPushButton(gridLayoutWidget_2);
        pushButtonLiberer->setObjectName(QString::fromUtf8("pushButtonLiberer"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(12);
        pushButtonLiberer->setFont(font2);
        pushButtonLiberer->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(pushButtonLiberer, 1, 0, 1, 1);

        pushButtonAnnuler = new QPushButton(gridLayoutWidget_2);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));
        pushButtonAnnuler->setFont(font2);

        gridLayout_3->addWidget(pushButtonAnnuler, 1, 1, 1, 1);

        GestLibererBI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GestLibererBI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 766, 28));
        GestLibererBI->setMenuBar(menubar);
        statusbar = new QStatusBar(GestLibererBI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GestLibererBI->setStatusBar(statusbar);

        retranslateUi(GestLibererBI);

        QMetaObject::connectSlotsByName(GestLibererBI);
    } // setupUi

    void retranslateUi(QMainWindow *GestLibererBI)
    {
        GestLibererBI->setWindowTitle(QCoreApplication::translate("GestLibererBI", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GestLibererBI", "Information du Locataire", nullptr));
        label_5->setText(QCoreApplication::translate("GestLibererBI", "Id Bien Immobilier :", nullptr));
        pushButtonLiberer->setText(QCoreApplication::translate("GestLibererBI", "Liberer", nullptr));
        pushButtonAnnuler->setText(QCoreApplication::translate("GestLibererBI", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestLibererBI: public Ui_GestLibererBI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTLIBERERBI_H
