/********************************************************************************
** Form generated from reading UI file 'winadminshowuser.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINADMINSHOWUSER_H
#define UI_WINADMINSHOWUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WinAdminShowUser
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditNom;
    QLabel *label_2;
    QLineEdit *lineEditPrenom;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonAfficher;
    QPushButton *pushButtonCancel;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WinAdminShowUser)
    {
        if (WinAdminShowUser->objectName().isEmpty())
            WinAdminShowUser->setObjectName(QString::fromUtf8("WinAdminShowUser"));
        WinAdminShowUser->resize(829, 557);
        centralwidget = new QWidget(WinAdminShowUser);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(70, 30, 691, 201));
        QFont font;
        font.setFamily(QString::fromUtf8("Algerian"));
        font.setPointSize(12);
        groupBox->setFont(font);
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 60, 621, 81));
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

        lineEditNom = new QLineEdit(formLayoutWidget);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));
        lineEditNom->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditNom);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEditPrenom = new QLineEdit(formLayoutWidget);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));
        lineEditPrenom->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditPrenom);

        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(140, 150, 401, 37));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonAfficher = new QPushButton(gridLayoutWidget);
        pushButtonAfficher->setObjectName(QString::fromUtf8("pushButtonAfficher"));
        pushButtonAfficher->setFont(font1);

        gridLayout->addWidget(pushButtonAfficher, 0, 0, 1, 1);

        pushButtonCancel = new QPushButton(gridLayoutWidget);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setFont(font1);

        gridLayout->addWidget(pushButtonCancel, 0, 1, 1, 1);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(70, 240, 691, 261));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(11);
        tableView->setFont(font2);
        WinAdminShowUser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WinAdminShowUser);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 829, 28));
        WinAdminShowUser->setMenuBar(menubar);
        statusbar = new QStatusBar(WinAdminShowUser);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WinAdminShowUser->setStatusBar(statusbar);

        retranslateUi(WinAdminShowUser);

        QMetaObject::connectSlotsByName(WinAdminShowUser);
    } // setupUi

    void retranslateUi(QMainWindow *WinAdminShowUser)
    {
        WinAdminShowUser->setWindowTitle(QCoreApplication::translate("WinAdminShowUser", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WinAdminShowUser", "Information du compte", nullptr));
        label->setText(QCoreApplication::translate("WinAdminShowUser", "Nom: ", nullptr));
        label_2->setText(QCoreApplication::translate("WinAdminShowUser", "Prenom: ", nullptr));
        pushButtonAfficher->setText(QCoreApplication::translate("WinAdminShowUser", "Afficher", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("WinAdminShowUser", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinAdminShowUser: public Ui_WinAdminShowUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINADMINSHOWUSER_H
