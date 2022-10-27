/********************************************************************************
** Form generated from reading UI file 'winadminupdate.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINADMINUPDATE_H
#define UI_WINADMINUPDATE_H

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

class Ui_WinAdminUpdate
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditIdCompte;
    QGroupBox *groupBox_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEditLogin;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditConfirmation;
    QLabel *label_5;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonUploader;
    QPushButton *pushButtonCancel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WinAdminUpdate)
    {
        if (WinAdminUpdate->objectName().isEmpty())
            WinAdminUpdate->setObjectName(QString::fromUtf8("WinAdminUpdate"));
        WinAdminUpdate->resize(709, 575);
        centralwidget = new QWidget(WinAdminUpdate);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(80, 60, 491, 121));
        QFont font;
        font.setFamily(QString::fromUtf8("Algerian"));
        font.setPointSize(12);
        groupBox->setFont(font);
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 50, 441, 51));
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

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(80, 240, 491, 191));
        groupBox_2->setFont(font);
        formLayoutWidget_2 = new QWidget(groupBox_2);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(30, 60, 441, 122));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        lineEditLogin = new QLineEdit(formLayoutWidget_2);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));
        lineEditLogin->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEditLogin);

        lineEditPassword = new QLineEdit(formLayoutWidget_2);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEditPassword);

        lineEditConfirmation = new QLineEdit(formLayoutWidget_2);
        lineEditConfirmation->setObjectName(QString::fromUtf8("lineEditConfirmation"));
        lineEditConfirmation->setFont(font1);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEditConfirmation);

        label_5 = new QLabel(formLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(200, 460, 291, 51));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonUploader = new QPushButton(gridLayoutWidget);
        pushButtonUploader->setObjectName(QString::fromUtf8("pushButtonUploader"));
        pushButtonUploader->setFont(font1);

        gridLayout->addWidget(pushButtonUploader, 0, 0, 1, 1);

        pushButtonCancel = new QPushButton(gridLayoutWidget);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setFont(font1);

        gridLayout->addWidget(pushButtonCancel, 0, 1, 1, 1);

        WinAdminUpdate->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WinAdminUpdate);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 709, 28));
        WinAdminUpdate->setMenuBar(menubar);
        statusbar = new QStatusBar(WinAdminUpdate);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WinAdminUpdate->setStatusBar(statusbar);

        retranslateUi(WinAdminUpdate);

        QMetaObject::connectSlotsByName(WinAdminUpdate);
    } // setupUi

    void retranslateUi(QMainWindow *WinAdminUpdate)
    {
        WinAdminUpdate->setWindowTitle(QCoreApplication::translate("WinAdminUpdate", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WinAdminUpdate", "Ancien Identifiant", nullptr));
        label->setText(QCoreApplication::translate("WinAdminUpdate", "Id Compte : ", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("WinAdminUpdate", "Nouveau identifiant", nullptr));
        label_3->setText(QCoreApplication::translate("WinAdminUpdate", "Login: ", nullptr));
        label_4->setText(QCoreApplication::translate("WinAdminUpdate", "Password: ", nullptr));
        label_5->setText(QCoreApplication::translate("WinAdminUpdate", "Confirmation:", nullptr));
        pushButtonUploader->setText(QCoreApplication::translate("WinAdminUpdate", "Mettre \303\240 jour", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("WinAdminUpdate", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinAdminUpdate: public Ui_WinAdminUpdate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINADMINUPDATE_H
