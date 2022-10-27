/********************************************************************************
** Form generated from reading UI file 'connexion.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNEXION_H
#define UI_CONNEXION_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Connexion
{
public:
    QWidget *centralwidget;
    QLabel *labelImg;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditLogin;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonCancel;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonApropos;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Connexion)
    {
        if (Connexion->objectName().isEmpty())
            Connexion->setObjectName(QString::fromUtf8("Connexion"));
        Connexion->resize(643, 364);
        centralwidget = new QWidget(Connexion);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labelImg = new QLabel(centralwidget);
        labelImg->setObjectName(QString::fromUtf8("labelImg"));
        labelImg->setGeometry(QRect(30, 50, 131, 201));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(160, 50, 391, 181));
        QFont font;
        font.setFamily(QString::fromUtf8("Algerian"));
        font.setPointSize(12);
        groupBox->setFont(font);
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(60, 40, 311, 80));
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

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEditPassword = new QLineEdit(formLayoutWidget);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setFont(font1);
        lineEditPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditPassword);

        lineEditLogin = new QLineEdit(formLayoutWidget);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));
        lineEditLogin->setFont(font1);
        lineEditLogin->setEchoMode(QLineEdit::Normal);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditLogin);

        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 120, 311, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        pushButtonCancel = new QPushButton(gridLayoutWidget);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setFont(font1);

        gridLayout->addWidget(pushButtonCancel, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        pushButtonConnect = new QPushButton(gridLayoutWidget);
        pushButtonConnect->setObjectName(QString::fromUtf8("pushButtonConnect"));
        pushButtonConnect->setFont(font1);

        gridLayout->addWidget(pushButtonConnect, 0, 1, 1, 1);

        pushButtonApropos = new QPushButton(groupBox);
        pushButtonApropos->setObjectName(QString::fromUtf8("pushButtonApropos"));
        pushButtonApropos->setGeometry(QRect(360, 0, 31, 29));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Wingdings 2"));
        pushButtonApropos->setFont(font2);
        Connexion->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Connexion);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 643, 28));
        Connexion->setMenuBar(menubar);
        statusbar = new QStatusBar(Connexion);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Connexion->setStatusBar(statusbar);

        retranslateUi(Connexion);

        QMetaObject::connectSlotsByName(Connexion);
    } // setupUi

    void retranslateUi(QMainWindow *Connexion)
    {
        Connexion->setWindowTitle(QCoreApplication::translate("Connexion", "Connexion", nullptr));
        labelImg->setText(QCoreApplication::translate("Connexion", "TextLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Connexion", "AUTHENTIFICATION", nullptr));
        label->setText(QCoreApplication::translate("Connexion", "Login: ", nullptr));
        label_2->setText(QCoreApplication::translate("Connexion", "Password: ", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("Connexion", "Annuler", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("Connexion", "Connecter", nullptr));
        pushButtonApropos->setText(QCoreApplication::translate("Connexion", "?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Connexion: public Ui_Connexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNEXION_H
