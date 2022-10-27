/********************************************************************************
** Form generated from reading UI file 'gestconsulterbi.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTCONSULTERBI_H
#define UI_GESTCONSULTERBI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GestConsulterBI
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButtonConsulter;
    QComboBox *comboBoxType;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GestConsulterBI)
    {
        if (GestConsulterBI->objectName().isEmpty())
            GestConsulterBI->setObjectName(QString::fromUtf8("GestConsulterBI"));
        GestConsulterBI->resize(858, 509);
        centralwidget = new QWidget(GestConsulterBI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 40, 731, 141));
        QFont font;
        font.setFamily(QString::fromUtf8("Algerian"));
        font.setPointSize(12);
        groupBox->setFont(font);
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 40, 671, 61));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        pushButtonConsulter = new QPushButton(gridLayoutWidget);
        pushButtonConsulter->setObjectName(QString::fromUtf8("pushButtonConsulter"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        pushButtonConsulter->setFont(font1);

        gridLayout->addWidget(pushButtonConsulter, 1, 2, 1, 1);

        comboBoxType = new QComboBox(gridLayoutWidget);
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->setObjectName(QString::fromUtf8("comboBoxType"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        comboBoxType->setFont(font2);

        gridLayout->addWidget(comboBoxType, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);

        gridLayout->addWidget(pushButton_2, 1, 3, 1, 1);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 200, 731, 241));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(11);
        tableView->setFont(font3);
        GestConsulterBI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GestConsulterBI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 858, 28));
        GestConsulterBI->setMenuBar(menubar);
        statusbar = new QStatusBar(GestConsulterBI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GestConsulterBI->setStatusBar(statusbar);

        retranslateUi(GestConsulterBI);

        QMetaObject::connectSlotsByName(GestConsulterBI);
    } // setupUi

    void retranslateUi(QMainWindow *GestConsulterBI)
    {
        GestConsulterBI->setWindowTitle(QCoreApplication::translate("GestConsulterBI", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GestConsulterBI", "Information sur le Bien", nullptr));
        label->setText(QCoreApplication::translate("GestConsulterBI", "Type : ", nullptr));
        pushButtonConsulter->setText(QCoreApplication::translate("GestConsulterBI", "Consulter", nullptr));
        comboBoxType->setItemText(0, QCoreApplication::translate("GestConsulterBI", "Appartement", nullptr));
        comboBoxType->setItemText(1, QCoreApplication::translate("GestConsulterBI", "Studio", nullptr));
        comboBoxType->setItemText(2, QCoreApplication::translate("GestConsulterBI", "Villa", nullptr));

        pushButton_2->setText(QCoreApplication::translate("GestConsulterBI", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestConsulterBI: public Ui_GestConsulterBI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTCONSULTERBI_H
