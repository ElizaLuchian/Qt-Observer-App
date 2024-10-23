/********************************************************************************
** Form generated from reading UI file 'CourierGUI.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURIERGUI_H
#define UI_COURIERGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CourierGUI
{
public:
    QLabel *zoneLabel;
    QListWidget *packagesListWidget;
    QLabel *streetsLabel;
    QComboBox *streetsComboBox;
    QPushButton *deliverButton;

    void setupUi(QWidget *CourierGUI)
    {
        if (CourierGUI->objectName().isEmpty())
            CourierGUI->setObjectName("CourierGUI");
        CourierGUI->resize(400, 300);
        zoneLabel = new QLabel(CourierGUI);
        zoneLabel->setObjectName("zoneLabel");
        zoneLabel->setGeometry(QRect(10, 10, 81, 16));
        packagesListWidget = new QListWidget(CourierGUI);
        packagesListWidget->setObjectName("packagesListWidget");
        packagesListWidget->setGeometry(QRect(10, 40, 371, 192));
        streetsLabel = new QLabel(CourierGUI);
        streetsLabel->setObjectName("streetsLabel");
        streetsLabel->setGeometry(QRect(130, 10, 251, 16));
        streetsComboBox = new QComboBox(CourierGUI);
        streetsComboBox->setObjectName("streetsComboBox");
        streetsComboBox->setGeometry(QRect(237, 240, 141, 22));
        deliverButton = new QPushButton(CourierGUI);
        deliverButton->setObjectName("deliverButton");
        deliverButton->setGeometry(QRect(10, 250, 75, 24));

        retranslateUi(CourierGUI);

        QMetaObject::connectSlotsByName(CourierGUI);
    } // setupUi

    void retranslateUi(QWidget *CourierGUI)
    {
        CourierGUI->setWindowTitle(QCoreApplication::translate("CourierGUI", "CourierGUI", nullptr));
        zoneLabel->setText(QCoreApplication::translate("CourierGUI", "TextLabel", nullptr));
        streetsLabel->setText(QCoreApplication::translate("CourierGUI", "TextLabel", nullptr));
        deliverButton->setText(QCoreApplication::translate("CourierGUI", "Deliver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CourierGUI: public Ui_CourierGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURIERGUI_H
