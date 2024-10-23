/********************************************************************************
** Form generated from reading UI file 'CompanyGUI.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPANYGUI_H
#define UI_COMPANYGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CompanyGUI
{
public:
    QListWidget *packagesListWidget;
    QLineEdit *recipientEdit;
    QLineEdit *addressEdit;
    QLineEdit *xEdit;
    QLineEdit *yEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *addButton;

    void setupUi(QWidget *CompanyGUI)
    {
        if (CompanyGUI->objectName().isEmpty())
            CompanyGUI->setObjectName("CompanyGUI");
        CompanyGUI->resize(400, 300);
        packagesListWidget = new QListWidget(CompanyGUI);
        packagesListWidget->setObjectName("packagesListWidget");
        packagesListWidget->setGeometry(QRect(10, 20, 371, 141));
        recipientEdit = new QLineEdit(CompanyGUI);
        recipientEdit->setObjectName("recipientEdit");
        recipientEdit->setGeometry(QRect(10, 180, 113, 21));
        addressEdit = new QLineEdit(CompanyGUI);
        addressEdit->setObjectName("addressEdit");
        addressEdit->setGeometry(QRect(10, 220, 113, 21));
        xEdit = new QLineEdit(CompanyGUI);
        xEdit->setObjectName("xEdit");
        xEdit->setGeometry(QRect(10, 260, 31, 21));
        yEdit = new QLineEdit(CompanyGUI);
        yEdit->setObjectName("yEdit");
        yEdit->setGeometry(QRect(50, 260, 31, 21));
        label = new QLabel(CompanyGUI);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 160, 51, 16));
        label_2 = new QLabel(CompanyGUI);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 200, 51, 16));
        label_3 = new QLabel(CompanyGUI);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 240, 51, 16));
        addButton = new QPushButton(CompanyGUI);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(90, 260, 75, 24));

        retranslateUi(CompanyGUI);

        QMetaObject::connectSlotsByName(CompanyGUI);
    } // setupUi

    void retranslateUi(QWidget *CompanyGUI)
    {
        CompanyGUI->setWindowTitle(QCoreApplication::translate("CompanyGUI", "CompanyGUI", nullptr));
        label->setText(QCoreApplication::translate("CompanyGUI", "Recipient", nullptr));
        label_2->setText(QCoreApplication::translate("CompanyGUI", "Address", nullptr));
        label_3->setText(QCoreApplication::translate("CompanyGUI", "Location", nullptr));
        addButton->setText(QCoreApplication::translate("CompanyGUI", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CompanyGUI: public Ui_CompanyGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPANYGUI_H
