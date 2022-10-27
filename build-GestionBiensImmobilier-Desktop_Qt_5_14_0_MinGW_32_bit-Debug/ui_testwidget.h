/********************************************************************************
** Form generated from reading UI file 'testwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWIDGET_H
#define UI_TESTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestWidget
{
public:
    QRadioButton *radioButton;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *TestWidget)
    {
        if (TestWidget->objectName().isEmpty())
            TestWidget->setObjectName(QString::fromUtf8("TestWidget"));
        TestWidget->resize(400, 300);
        radioButton = new QRadioButton(TestWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(160, 100, 113, 25));
        pushButton = new QPushButton(TestWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 200, 86, 29));
        pushButton_2 = new QPushButton(TestWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 50, 86, 29));

        retranslateUi(TestWidget);

        QMetaObject::connectSlotsByName(TestWidget);
    } // setupUi

    void retranslateUi(QWidget *TestWidget)
    {
        TestWidget->setWindowTitle(QCoreApplication::translate("TestWidget", "Form", nullptr));
        radioButton->setText(QCoreApplication::translate("TestWidget", "RadioButton", nullptr));
        pushButton->setText(QCoreApplication::translate("TestWidget", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TestWidget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestWidget: public Ui_TestWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWIDGET_H
