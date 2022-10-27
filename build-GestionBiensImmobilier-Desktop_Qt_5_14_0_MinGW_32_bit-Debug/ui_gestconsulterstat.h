/********************************************************************************
** Form generated from reading UI file 'gestconsulterstat.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTCONSULTERSTAT_H
#define UI_GESTCONSULTERSTAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GestConsulterStat
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GestConsulterStat)
    {
        if (GestConsulterStat->objectName().isEmpty())
            GestConsulterStat->setObjectName(QString::fromUtf8("GestConsulterStat"));
        GestConsulterStat->resize(800, 600);
        menubar = new QMenuBar(GestConsulterStat);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        GestConsulterStat->setMenuBar(menubar);
        centralwidget = new QWidget(GestConsulterStat);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        GestConsulterStat->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(GestConsulterStat);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GestConsulterStat->setStatusBar(statusbar);

        retranslateUi(GestConsulterStat);

        QMetaObject::connectSlotsByName(GestConsulterStat);
    } // setupUi

    void retranslateUi(QMainWindow *GestConsulterStat)
    {
        GestConsulterStat->setWindowTitle(QCoreApplication::translate("GestConsulterStat", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestConsulterStat: public Ui_GestConsulterStat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTCONSULTERSTAT_H
