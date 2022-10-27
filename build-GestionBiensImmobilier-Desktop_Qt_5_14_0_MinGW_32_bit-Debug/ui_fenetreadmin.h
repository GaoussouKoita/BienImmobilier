/********************************************************************************
** Form generated from reading UI file 'fenetreadmin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREADMIN_H
#define UI_FENETREADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetreAdmin
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonUpdate;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonAhow;
    QPushButton *pushButtonDelete;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonAddUser;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButtonModifier;
    QPushButton *pushButtonAddBI;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonDesactiver;
    QPushButton *pushButtonRead;
    QSpacerItem *horizontalSpacer_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FenetreAdmin)
    {
        if (FenetreAdmin->objectName().isEmpty())
            FenetreAdmin->setObjectName(QString::fromUtf8("FenetreAdmin"));
        FenetreAdmin->resize(784, 637);
        FenetreAdmin->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(FenetreAdmin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(100, 50, 551, 211));
        QFont font;
        font.setFamily(QString::fromUtf8("Algerian"));
        font.setPointSize(12);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 127);\n"
"background-image: url(:/img/img/1.JPG);"));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 50, 501, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonUpdate = new QPushButton(gridLayoutWidget);
        pushButtonUpdate->setObjectName(QString::fromUtf8("pushButtonUpdate"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        pushButtonUpdate->setFont(font1);

        gridLayout->addWidget(pushButtonUpdate, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        pushButtonAhow = new QPushButton(gridLayoutWidget);
        pushButtonAhow->setObjectName(QString::fromUtf8("pushButtonAhow"));
        pushButtonAhow->setFont(font1);

        gridLayout->addWidget(pushButtonAhow, 1, 3, 1, 1);

        pushButtonDelete = new QPushButton(gridLayoutWidget);
        pushButtonDelete->setObjectName(QString::fromUtf8("pushButtonDelete"));
        pushButtonDelete->setFont(font1);

        gridLayout->addWidget(pushButtonDelete, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButtonAddUser = new QPushButton(gridLayoutWidget);
        pushButtonAddUser->setObjectName(QString::fromUtf8("pushButtonAddUser"));
        pushButtonAddUser->setFont(font1);

        gridLayout->addWidget(pushButtonAddUser, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(100, 330, 551, 241));
        groupBox_3->setFont(font);
        groupBox_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 66, 0);\n"
""));
        gridLayoutWidget_3 = new QWidget(groupBox_3);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(40, 70, 481, 151));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonModifier = new QPushButton(gridLayoutWidget_3);
        pushButtonModifier->setObjectName(QString::fromUtf8("pushButtonModifier"));
        pushButtonModifier->setFont(font1);

        gridLayout_3->addWidget(pushButtonModifier, 1, 1, 1, 1);

        pushButtonAddBI = new QPushButton(gridLayoutWidget_3);
        pushButtonAddBI->setObjectName(QString::fromUtf8("pushButtonAddBI"));
        pushButtonAddBI->setFont(font1);

        gridLayout_3->addWidget(pushButtonAddBI, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 0, 5, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 0, 3, 1, 1);

        pushButtonDesactiver = new QPushButton(gridLayoutWidget_3);
        pushButtonDesactiver->setObjectName(QString::fromUtf8("pushButtonDesactiver"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(13);
        pushButtonDesactiver->setFont(font2);

        gridLayout_3->addWidget(pushButtonDesactiver, 1, 4, 1, 1);

        pushButtonRead = new QPushButton(gridLayoutWidget_3);
        pushButtonRead->setObjectName(QString::fromUtf8("pushButtonRead"));
        pushButtonRead->setFont(font1);

        gridLayout_3->addWidget(pushButtonRead, 0, 4, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        FenetreAdmin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FenetreAdmin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 784, 28));
        FenetreAdmin->setMenuBar(menubar);
        statusbar = new QStatusBar(FenetreAdmin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FenetreAdmin->setStatusBar(statusbar);

        retranslateUi(FenetreAdmin);

        QMetaObject::connectSlotsByName(FenetreAdmin);
    } // setupUi

    void retranslateUi(QMainWindow *FenetreAdmin)
    {
        FenetreAdmin->setWindowTitle(QCoreApplication::translate("FenetreAdmin", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FenetreAdmin", "Gestion de comptes", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("FenetreAdmin", "Mise \303\240 Jour", nullptr));
        pushButtonAhow->setText(QCoreApplication::translate("FenetreAdmin", "Afficher", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("FenetreAdmin", "Supprimer", nullptr));
        pushButtonAddUser->setText(QCoreApplication::translate("FenetreAdmin", "Nouveau compte", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("FenetreAdmin", "Gestion de Bien Immobiliers", nullptr));
        pushButtonModifier->setText(QCoreApplication::translate("FenetreAdmin", "Modifier un Bien", nullptr));
        pushButtonAddBI->setText(QCoreApplication::translate("FenetreAdmin", "Ajouter un Bien Immobilier", nullptr));
        pushButtonDesactiver->setText(QCoreApplication::translate("FenetreAdmin", "D\303\251sactiver un Bien", nullptr));
        pushButtonRead->setText(QCoreApplication::translate("FenetreAdmin", "Lire un Bien", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FenetreAdmin: public Ui_FenetreAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREADMIN_H
