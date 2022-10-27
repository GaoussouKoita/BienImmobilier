/********************************************************************************
** Form generated from reading UI file 'winadminreadbi.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINADMINREADBI_H
#define UI_WINADMINREADBI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WinAdminReadBI
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditAdresse;
    QLabel *label_2;
    QLineEdit *lineEditMontant;
    QLabel *label_3;
    QSpinBox *spinBoxNbreDePieces;
    QLabel *label_4;
    QComboBox *lineEditType;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonLire;
    QPushButton *pushButtonCancel;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WinAdminReadBI)
    {
        if (WinAdminReadBI->objectName().isEmpty())
            WinAdminReadBI->setObjectName(QString::fromUtf8("WinAdminReadBI"));
        WinAdminReadBI->resize(716, 635);
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        WinAdminReadBI->setFont(font);
        centralwidget = new QWidget(WinAdminReadBI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 60, 611, 251));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Algerian"));
        font1.setPointSize(12);
        groupBox->setFont(font1);
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(60, 40, 501, 155));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(12);
        label->setFont(font2);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEditAdresse = new QLineEdit(formLayoutWidget);
        lineEditAdresse->setObjectName(QString::fromUtf8("lineEditAdresse"));
        lineEditAdresse->setFont(font2);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditAdresse);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEditMontant = new QLineEdit(formLayoutWidget);
        lineEditMontant->setObjectName(QString::fromUtf8("lineEditMontant"));
        lineEditMontant->setFont(font2);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditMontant);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        spinBoxNbreDePieces = new QSpinBox(formLayoutWidget);
        spinBoxNbreDePieces->setObjectName(QString::fromUtf8("spinBoxNbreDePieces"));
        spinBoxNbreDePieces->setFont(font2);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBoxNbreDePieces);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEditType = new QComboBox(formLayoutWidget);
        lineEditType->addItem(QString());
        lineEditType->addItem(QString());
        lineEditType->addItem(QString());
        lineEditType->setObjectName(QString::fromUtf8("lineEditType"));
        lineEditType->setFont(font2);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditType);

        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(170, 190, 281, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonLire = new QPushButton(horizontalLayoutWidget);
        pushButtonLire->setObjectName(QString::fromUtf8("pushButtonLire"));
        pushButtonLire->setFont(font2);

        horizontalLayout->addWidget(pushButtonLire);

        pushButtonCancel = new QPushButton(horizontalLayoutWidget);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setFont(font2);

        horizontalLayout->addWidget(pushButtonCancel);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(40, 330, 611, 241));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(11);
        tableView->setFont(font3);
        WinAdminReadBI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WinAdminReadBI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 716, 28));
        WinAdminReadBI->setMenuBar(menubar);
        statusbar = new QStatusBar(WinAdminReadBI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WinAdminReadBI->setStatusBar(statusbar);

        retranslateUi(WinAdminReadBI);

        QMetaObject::connectSlotsByName(WinAdminReadBI);
    } // setupUi

    void retranslateUi(QMainWindow *WinAdminReadBI)
    {
        WinAdminReadBI->setWindowTitle(QCoreApplication::translate("WinAdminReadBI", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WinAdminReadBI", "Information du Bien Immobilier", nullptr));
        label->setText(QCoreApplication::translate("WinAdminReadBI", "Adresse: ", nullptr));
        label_2->setText(QCoreApplication::translate("WinAdminReadBI", "Montant: ", nullptr));
        label_3->setText(QCoreApplication::translate("WinAdminReadBI", "Nombre de Pieces:", nullptr));
        label_4->setText(QCoreApplication::translate("WinAdminReadBI", "Type : ", nullptr));
        lineEditType->setItemText(0, QCoreApplication::translate("WinAdminReadBI", "Appartement", nullptr));
        lineEditType->setItemText(1, QCoreApplication::translate("WinAdminReadBI", "Studio", nullptr));
        lineEditType->setItemText(2, QCoreApplication::translate("WinAdminReadBI", "Villa", nullptr));

        pushButtonLire->setText(QCoreApplication::translate("WinAdminReadBI", "Lire", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("WinAdminReadBI", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinAdminReadBI: public Ui_WinAdminReadBI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINADMINREADBI_H
