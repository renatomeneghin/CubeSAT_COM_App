/********************************************************************************
** Form generated from reading UI file 'COMSettings.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMSETTINGS_H
#define UI_COMSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_COMSettings
{
public:
    QGridLayout *gridLayout;
    QLabel *stopBitsLabel;
    QLabel *dataBitsLabel;
    QLabel *parityLabel;
    QLabel *Serial_Port;
    QLabel *Baud_Rate_2;
    QComboBox *parityBox;
    QLabel *flowControlLabel;
    QComboBox *stopBitsBox;
    QComboBox *dataBitsBox;
    QComboBox *Baud_Rate;
    QComboBox *Port;
    QComboBox *flowControlBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *COMSettings)
    {
        if (COMSettings->objectName().isEmpty())
            COMSettings->setObjectName("COMSettings");
        COMSettings->resize(279, 229);
        gridLayout = new QGridLayout(COMSettings);
        gridLayout->setObjectName("gridLayout");
        stopBitsLabel = new QLabel(COMSettings);
        stopBitsLabel->setObjectName("stopBitsLabel");

        gridLayout->addWidget(stopBitsLabel, 3, 0, 1, 1);

        dataBitsLabel = new QLabel(COMSettings);
        dataBitsLabel->setObjectName("dataBitsLabel");

        gridLayout->addWidget(dataBitsLabel, 4, 0, 1, 1);

        parityLabel = new QLabel(COMSettings);
        parityLabel->setObjectName("parityLabel");

        gridLayout->addWidget(parityLabel, 2, 0, 1, 1);

        Serial_Port = new QLabel(COMSettings);
        Serial_Port->setObjectName("Serial_Port");

        gridLayout->addWidget(Serial_Port, 0, 0, 1, 1);

        Baud_Rate_2 = new QLabel(COMSettings);
        Baud_Rate_2->setObjectName("Baud_Rate_2");

        gridLayout->addWidget(Baud_Rate_2, 1, 0, 1, 1);

        parityBox = new QComboBox(COMSettings);
        parityBox->setObjectName("parityBox");

        gridLayout->addWidget(parityBox, 2, 1, 1, 1);

        flowControlLabel = new QLabel(COMSettings);
        flowControlLabel->setObjectName("flowControlLabel");

        gridLayout->addWidget(flowControlLabel, 5, 0, 1, 1);

        stopBitsBox = new QComboBox(COMSettings);
        stopBitsBox->setObjectName("stopBitsBox");

        gridLayout->addWidget(stopBitsBox, 3, 1, 1, 1);

        dataBitsBox = new QComboBox(COMSettings);
        dataBitsBox->setObjectName("dataBitsBox");

        gridLayout->addWidget(dataBitsBox, 4, 1, 1, 1);

        Baud_Rate = new QComboBox(COMSettings);
        Baud_Rate->setObjectName("Baud_Rate");

        gridLayout->addWidget(Baud_Rate, 1, 1, 1, 1);

        Port = new QComboBox(COMSettings);
        Port->setObjectName("Port");
        Port->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(Port, 0, 1, 1, 1);

        flowControlBox = new QComboBox(COMSettings);
        flowControlBox->setObjectName("flowControlBox");

        gridLayout->addWidget(flowControlBox, 5, 1, 1, 1);

        buttonBox = new QDialogButtonBox(COMSettings);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 1, 1, 1);

#if QT_CONFIG(shortcut)
        Serial_Port->setBuddy(Port);
        Baud_Rate_2->setBuddy(Baud_Rate);
#endif // QT_CONFIG(shortcut)

        retranslateUi(COMSettings);

        Baud_Rate->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(COMSettings);
    } // setupUi

    void retranslateUi(QDialog *COMSettings)
    {
        COMSettings->setWindowTitle(QCoreApplication::translate("COMSettings", "COMSettings", nullptr));
        stopBitsLabel->setText(QCoreApplication::translate("COMSettings", "Stop bits:", nullptr));
        dataBitsLabel->setText(QCoreApplication::translate("COMSettings", "Data bits:", nullptr));
        parityLabel->setText(QCoreApplication::translate("COMSettings", "Parity:", nullptr));
        Serial_Port->setText(QCoreApplication::translate("COMSettings", "Serial Port:", nullptr));
        Baud_Rate_2->setText(QCoreApplication::translate("COMSettings", "Baud Rate:", nullptr));
        flowControlLabel->setText(QCoreApplication::translate("COMSettings", "Flow control:", nullptr));
        Baud_Rate->setCurrentText(QString());
        flowControlBox->setCurrentText(QString());
    } // retranslateUi

};

namespace Ui {
    class COMSettings: public Ui_COMSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMSETTINGS_H
