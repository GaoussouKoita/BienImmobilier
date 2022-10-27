/********************************************************************************
** Form generated from reading UI file 'winadmindesactivebi.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINADMINDESACTIVEBI_H
#define UI_WINADMINDESACTIVEBI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_WinAdminDesactiveBI
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditAdresse;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonDesactiver;
    QPushButton *pushButtonCancel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WinAdminDesactiveBI)
    {
        if (WinAdminDesactiveBI->objectName().isEmpty())
            WinAdminDesactiveBI->setObjectName(QString::fromUtf8("WinAdminDesactiveBI"));
        WinAdminDesactiveBI->resize(664, 426);
        centralwidget = new QWidget(WinAdminDesactiveBI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 50, 541, 201));
        QFont font;
        font.setFamily(QString::fromUtf8("Algerian"));
        font.setPointSize(12);
        groupBox->setFont(font);
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(40, 80, 461, 81));
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

        lineEditAdresse = new QLineEdit(formLayoutWidget);
        lineEditAdresse->setObjectName(QString::fromUtf8("lineEditAdresse"));
        lineEditAdresse->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditAdresse);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(210, 280, 261, 61));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonDesactiver = new QPushButton(gridLayoutWidget);
        pushButtonDesactiver->setObjectName(QString::fromUtf8("pushButtonDesactiver"));
        pushButtonDesactiver->setFont(font1);
        pushButtonDesactiver->setStyleSheet(QString::fromUtf8("color: red;"));

        gridLayout->addWidget(pushButtonDesactiver, 0, 0, 1, 1);

        pushButtonCancel = new QPushButton(gridLayoutWidget);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setFont(font1);

        gridLayout->addWidget(pushButtonCancel, 0, 1, 1, 1);

        WinAdminDesactiveBI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WinAdminDesactiveBI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 664, 28));
        WinAdminDesactiveBI->setMenuBar(menubar);
        statusbar = new QStatusBar(WinAdminDesactiveBI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WinAdminDesactiveBI->setStatusBar(statusbar);

        retranslateUi(WinAdminDesactiveBI);

        QMetaObject::connectSlotsByName(WinAdminDesactiveBI);
    } // setupUi

    void retranslateUi(QMainWindow *WinAdminDesactiveBI)
    {
        WinAdminDesactiveBI->setWindowTitle(QCoreApplication::translate("WinAdminDesactiveBI", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WinAdminDesactiveBI", "Information du Bien", nullptr));
        label->setText(QCoreApplication::translate("WinAdminDesactiveBI", "Id Bien Immobilier : ", nullptr));
        pushButtonDesactiver->setText(QCoreApplication::translate("WinAdminDesactiveBI", "Desactiver", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("WinAdminDesactiveBI", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinAdminDesactiveBI: public Ui_WinAdminDesactiveBI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINADMINDESACTIVEBI_H
