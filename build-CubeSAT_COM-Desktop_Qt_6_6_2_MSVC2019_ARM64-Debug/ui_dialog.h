/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *Serial_Port;
    QComboBox *Port;
    QLabel *Baud_Rate_2;
    QComboBox *Baud_Rate;
    QLabel *parityLabel;
    QComboBox *dataBitsBox;
    QLabel *stopBitsLabel;
    QComboBox *parityBox;
    QLabel *dataBitsLabel;
    QComboBox *flowControlBox;
    QLabel *flowControlLabel;
    QComboBox *stopBitsBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(233, 228);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 221, 191));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout->setHorizontalSpacing(6);
        formLayout->setContentsMargins(0, 0, 0, 0);
        Serial_Port = new QLabel(layoutWidget);
        Serial_Port->setObjectName("Serial_Port");

        formLayout->setWidget(0, QFormLayout::LabelRole, Serial_Port);

        Port = new QComboBox(layoutWidget);
        Port->addItem(QString());
        Port->addItem(QString());
        Port->addItem(QString());
        Port->addItem(QString());
        Port->addItem(QString());
        Port->addItem(QString());
        Port->addItem(QString());
        Port->addItem(QString());
        Port->setObjectName("Port");
        Port->setLayoutDirection(Qt::LeftToRight);

        formLayout->setWidget(0, QFormLayout::FieldRole, Port);

        Baud_Rate_2 = new QLabel(layoutWidget);
        Baud_Rate_2->setObjectName("Baud_Rate_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, Baud_Rate_2);

        Baud_Rate = new QComboBox(layoutWidget);
        Baud_Rate->addItem(QString());
        Baud_Rate->addItem(QString());
        Baud_Rate->addItem(QString());
        Baud_Rate->addItem(QString());
        Baud_Rate->addItem(QString());
        Baud_Rate->addItem(QString());
        Baud_Rate->addItem(QString());
        Baud_Rate->addItem(QString());
        Baud_Rate->addItem(QString());
        Baud_Rate->addItem(QString());
        Baud_Rate->addItem(QString());
        Baud_Rate->addItem(QString());
        Baud_Rate->addItem(QString());
        Baud_Rate->addItem(QString());
        Baud_Rate->setObjectName("Baud_Rate");

        formLayout->setWidget(1, QFormLayout::FieldRole, Baud_Rate);

        parityLabel = new QLabel(layoutWidget);
        parityLabel->setObjectName("parityLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, parityLabel);

        dataBitsBox = new QComboBox(layoutWidget);
        dataBitsBox->addItem(QString());
        dataBitsBox->addItem(QString());
        dataBitsBox->addItem(QString());
        dataBitsBox->addItem(QString());
        dataBitsBox->addItem(QString());
        dataBitsBox->setObjectName("dataBitsBox");

        formLayout->setWidget(2, QFormLayout::FieldRole, dataBitsBox);

        stopBitsLabel = new QLabel(layoutWidget);
        stopBitsLabel->setObjectName("stopBitsLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, stopBitsLabel);

        parityBox = new QComboBox(layoutWidget);
        parityBox->addItem(QString());
        parityBox->addItem(QString());
        parityBox->addItem(QString());
        parityBox->setObjectName("parityBox");

        formLayout->setWidget(3, QFormLayout::FieldRole, parityBox);

        dataBitsLabel = new QLabel(layoutWidget);
        dataBitsLabel->setObjectName("dataBitsLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, dataBitsLabel);

        flowControlBox = new QComboBox(layoutWidget);
        flowControlBox->addItem(QString());
        flowControlBox->addItem(QString());
        flowControlBox->addItem(QString());
        flowControlBox->addItem(QString());
        flowControlBox->setObjectName("flowControlBox");

        formLayout->setWidget(4, QFormLayout::FieldRole, flowControlBox);

        flowControlLabel = new QLabel(layoutWidget);
        flowControlLabel->setObjectName("flowControlLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, flowControlLabel);

        stopBitsBox = new QComboBox(layoutWidget);
        stopBitsBox->addItem(QString());
        stopBitsBox->addItem(QString());
        stopBitsBox->addItem(QString());
        stopBitsBox->setObjectName("stopBitsBox");

        formLayout->setWidget(5, QFormLayout::FieldRole, stopBitsBox);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(0, 200, 231, 25));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
#if QT_CONFIG(shortcut)
        Serial_Port->setBuddy(Port);
        Baud_Rate_2->setBuddy(Baud_Rate);
#endif // QT_CONFIG(shortcut)

        retranslateUi(Dialog);

        Baud_Rate->setCurrentIndex(11);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        Serial_Port->setText(QCoreApplication::translate("Dialog", "Serial Port:", nullptr));
        Port->setItemText(0, QCoreApplication::translate("Dialog", "ttyUSB0", nullptr));
        Port->setItemText(1, QCoreApplication::translate("Dialog", "ttyUSB1", nullptr));
        Port->setItemText(2, QCoreApplication::translate("Dialog", "ttyUSB2", nullptr));
        Port->setItemText(3, QCoreApplication::translate("Dialog", "ttyUSB3", nullptr));
        Port->setItemText(4, QCoreApplication::translate("Dialog", "ttyUSB4", nullptr));
        Port->setItemText(5, QCoreApplication::translate("Dialog", "ttyUSB5", nullptr));
        Port->setItemText(6, QCoreApplication::translate("Dialog", "ttyUSB6", nullptr));
        Port->setItemText(7, QCoreApplication::translate("Dialog", "ttyUSB7", nullptr));

        Baud_Rate_2->setText(QCoreApplication::translate("Dialog", "Baud Rate:", nullptr));
        Baud_Rate->setItemText(0, QCoreApplication::translate("Dialog", "110", nullptr));
        Baud_Rate->setItemText(1, QCoreApplication::translate("Dialog", "300", nullptr));
        Baud_Rate->setItemText(2, QCoreApplication::translate("Dialog", "600", nullptr));
        Baud_Rate->setItemText(3, QCoreApplication::translate("Dialog", "1200", nullptr));
        Baud_Rate->setItemText(4, QCoreApplication::translate("Dialog", "2400", nullptr));
        Baud_Rate->setItemText(5, QCoreApplication::translate("Dialog", "4800", nullptr));
        Baud_Rate->setItemText(6, QCoreApplication::translate("Dialog", "9600", nullptr));
        Baud_Rate->setItemText(7, QCoreApplication::translate("Dialog", "14400", nullptr));
        Baud_Rate->setItemText(8, QCoreApplication::translate("Dialog", "19200", nullptr));
        Baud_Rate->setItemText(9, QCoreApplication::translate("Dialog", "38400", nullptr));
        Baud_Rate->setItemText(10, QCoreApplication::translate("Dialog", "57600", nullptr));
        Baud_Rate->setItemText(11, QCoreApplication::translate("Dialog", "115200", nullptr));
        Baud_Rate->setItemText(12, QCoreApplication::translate("Dialog", "128000", nullptr));
        Baud_Rate->setItemText(13, QCoreApplication::translate("Dialog", "256000", nullptr));

        Baud_Rate->setCurrentText(QCoreApplication::translate("Dialog", "115200", nullptr));
        parityLabel->setText(QCoreApplication::translate("Dialog", "Parity:", nullptr));
        dataBitsBox->setItemText(0, QCoreApplication::translate("Dialog", "NoParity", nullptr));
        dataBitsBox->setItemText(1, QCoreApplication::translate("Dialog", "EvenParity", nullptr));
        dataBitsBox->setItemText(2, QCoreApplication::translate("Dialog", "OddParity", nullptr));
        dataBitsBox->setItemText(3, QCoreApplication::translate("Dialog", "SpaceParity", nullptr));
        dataBitsBox->setItemText(4, QCoreApplication::translate("Dialog", "MarkParity", nullptr));

        stopBitsLabel->setText(QCoreApplication::translate("Dialog", "Stop bits:", nullptr));
        parityBox->setItemText(0, QCoreApplication::translate("Dialog", "OneStop", nullptr));
        parityBox->setItemText(1, QCoreApplication::translate("Dialog", "OneAndHalfStop", nullptr));
        parityBox->setItemText(2, QCoreApplication::translate("Dialog", "TwoStop", nullptr));

        dataBitsLabel->setText(QCoreApplication::translate("Dialog", "Data bits:", nullptr));
        flowControlBox->setItemText(0, QCoreApplication::translate("Dialog", "Data5", nullptr));
        flowControlBox->setItemText(1, QCoreApplication::translate("Dialog", "Data6", nullptr));
        flowControlBox->setItemText(2, QCoreApplication::translate("Dialog", "Data7", nullptr));
        flowControlBox->setItemText(3, QCoreApplication::translate("Dialog", "Data8", nullptr));

        flowControlBox->setCurrentText(QCoreApplication::translate("Dialog", "Data5", nullptr));
        flowControlLabel->setText(QCoreApplication::translate("Dialog", "Flow control:", nullptr));
        stopBitsBox->setItemText(0, QCoreApplication::translate("Dialog", "NoFlowControl", nullptr));
        stopBitsBox->setItemText(1, QCoreApplication::translate("Dialog", "HardwareControl", nullptr));
        stopBitsBox->setItemText(2, QCoreApplication::translate("Dialog", "SoftwareControl", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
