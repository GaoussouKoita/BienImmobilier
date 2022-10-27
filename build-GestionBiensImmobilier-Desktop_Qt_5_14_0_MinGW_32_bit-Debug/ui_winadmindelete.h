/********************************************************************************
** Form generated from reading UI file 'winadmindelete.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINADMINDELETE_H
#define UI_WINADMINDELETE_H

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

class Ui_WinAdminDelete
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditIdCompte;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonSupprimer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WinAdminDelete)
    {
        if (WinAdminDelete->objectName().isEmpty())
            WinAdminDelete->setObjectName(QString::fromUtf8("WinAdminDelete"));
        WinAdminDelete->resize(545, 386);
        centralwidget = new QWidget(WinAdminDelete);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 451, 181));
        QFont font;
        font.setFamily(QString::fromUtf8("Algerian"));
        font.setPointSize(12);
        groupBox->setFont(font);
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(40, 70, 361, 61));
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

        lineEditIdCompte = new QLineEdit(formLayoutWidget);
        lineEditIdCompte->setObjectName(QString::fromUtf8("lineEditIdCompte"));
        lineEditIdCompte->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditIdCompte);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(90, 250, 351, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonCancel = new QPushButton(gridLayoutWidget);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setFont(font1);

        gridLayout->addWidget(pushButtonCancel, 0, 1, 1, 1);

        pushButtonSupprimer = new QPushButton(gridLayoutWidget);
        pushButtonSupprimer->setObjectName(QString::fromUtf8("pushButtonSupprimer"));
        pushButtonSupprimer->setFont(font1);
        pushButtonSupprimer->setStyleSheet(QString::fromUtf8("color: red;"));

        gridLayout->addWidget(pushButtonSupprimer, 0, 0, 1, 1);

        WinAdminDelete->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WinAdminDelete);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 545, 28));
        WinAdminDelete->setMenuBar(menubar);
        statusbar = new QStatusBar(WinAdminDelete);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WinAdminDelete->setStatusBar(statusbar);

        retranslateUi(WinAdminDelete);

        QMetaObject::connectSlotsByName(WinAdminDelete);
    } // setupUi

    void retranslateUi(QMainWindow *WinAdminDelete)
    {
        WinAdminDelete->setWindowTitle(QCoreApplication::translate("WinAdminDelete", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WinAdminDelete", "Information du compte", nullptr));
        label->setText(QCoreApplication::translate("WinAdminDelete", "Id compte : ", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("WinAdminDelete", "Annuler", nullptr));
        pushButtonSupprimer->setText(QCoreApplication::translate("WinAdminDelete", "Supprimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinAdminDelete: public Ui_WinAdminDelete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINADMINDELETE_H
