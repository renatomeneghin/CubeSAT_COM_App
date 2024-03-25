#include "COMSettings.h"
#include "ui_COMSettings.h"

#include <QtSerialPort/QSerialPortInfo>
#include <QIntValidator>
#include <QLineEdit>

QT_USE_NAMESPACE

static const char blankString[] = QT_TRANSLATE_NOOP("SettingsDialog", "N/A");


COMSettings::COMSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::COMSettings)
{
    ui->setupUi(this);

    intValidator = new QIntValidator(0, 4000000, this);

    ui->Baud_Rate->setInsertPolicy(QComboBox::NoInsert);

    //connect(ui->serialPortInfoListBox, SIGNAL(currentIndexChanged(int)),
    //        this, SLOT(showPortInfo(int)));
    connect(ui->Baud_Rate, SIGNAL(currentIndexChanged(int)),
            this, SLOT(checkCustomBaudRatePolicy(int)));

    fillPortsParameters();

    readSettings();
    updateSettings();
}

COMSettings::~COMSettings()
{
    delete ui;
}

COMSettings::Settings COMSettings::settings() const
{
    return currentSettings;
}


void COMSettings::checkCustomBaudRatePolicy(int idx)
{
    bool isCustomBaudRate = !ui->Baud_Rate->itemData(idx).isValid();
    ui->Baud_Rate->setEditable(isCustomBaudRate);
    if (isCustomBaudRate) {
        ui->Baud_Rate->clearEditText();
        QLineEdit *edit = ui->Baud_Rate->lineEdit();
        edit->setValidator(intValidator);
    }
}

void COMSettings::fillPortsParameters()
{
    // fill ports
    ui->Port->clear();
    const QString blankString = tr(::blankString);
    const auto infos = QSerialPortInfo::availablePorts();

    for (const QSerialPortInfo &info : infos) {
        QStringList list;
        const QString description = info.description();
        const QString manufacturer = info.manufacturer();
        const QString serialNumber = info.serialNumber();
        const auto vendorId = info.vendorIdentifier();
        const auto productId = info.productIdentifier();
        list << info.portName()
             << (!description.isEmpty() ? description : blankString)
             << (!manufacturer.isEmpty() ? manufacturer : blankString)
             << (!serialNumber.isEmpty() ? serialNumber : blankString)
             << info.systemLocation()
             << (vendorId ? QString::number(vendorId, 16) : blankString)
             << (productId ? QString::number(productId, 16) : blankString);

        ui->Port->addItem(list.constFirst(), list);
    }

   // fill baud rate (is not the entire list of available values,
    ui->Baud_Rate->addItem(QStringLiteral("9600"), QSerialPort::Baud9600);
    ui->Baud_Rate->addItem(QStringLiteral("19200"), QSerialPort::Baud19200);
    ui->Baud_Rate->addItem(QStringLiteral("38400"), QSerialPort::Baud38400);
    ui->Baud_Rate->addItem(QStringLiteral("115200"), QSerialPort::Baud115200);
    ui->Baud_Rate->setCurrentIndex(3);

//    // fill data bits
    ui->dataBitsBox->addItem(QStringLiteral("5"), QSerialPort::Data5);
    ui->dataBitsBox->addItem(QStringLiteral("6"), QSerialPort::Data6);
    ui->dataBitsBox->addItem(QStringLiteral("7"), QSerialPort::Data7);
    ui->dataBitsBox->addItem(QStringLiteral("8"), QSerialPort::Data8);
    ui->dataBitsBox->setCurrentIndex(3);

//    // fill parity
    ui->parityBox->addItem(QStringLiteral("None"), QSerialPort::NoParity);
    ui->parityBox->addItem(QStringLiteral("Even"), QSerialPort::EvenParity);
    ui->parityBox->addItem(QStringLiteral("Odd"), QSerialPort::OddParity);
    ui->parityBox->addItem(QStringLiteral("Mark"), QSerialPort::MarkParity);
    ui->parityBox->addItem(QStringLiteral("Space"), QSerialPort::SpaceParity);

//    // fill stop bits
    ui->stopBitsBox->addItem(QStringLiteral("1"), QSerialPort::OneStop);
#ifdef Q_OS_WIN
    ui->stopBitsBox->addItem(QStringLiteral("1.5"), QSerialPort::OneAndHalfStop);
#endif
    ui->stopBitsBox->addItem(QStringLiteral("2"), QSerialPort::TwoStop);

   // fill flow control
    ui->flowControlBox->addItem(QStringLiteral("None"), QSerialPort::NoFlowControl);
    ui->flowControlBox->addItem(QStringLiteral("RTS/CTS"), QSerialPort::HardwareControl);
    ui->flowControlBox->addItem(QStringLiteral("XON/XOFF"), QSerialPort::SoftwareControl);
}

void COMSettings::updateSettings()
{
    currentSettings.name = ui->Port->currentText();

    // Baud Rate
   if (ui->Baud_Rate->currentIndex() == 4) {
       // custom baud rate
       currentSettings.baudRate = ui->Baud_Rate->currentText().toInt();
   } else {
       // standard baud rate
       const auto baudRateData = ui->Baud_Rate->currentData();
       currentSettings.baudRate = baudRateData.value<QSerialPort::BaudRate>();
   }
   currentSettings.stringBaudRate = QString::number(currentSettings.baudRate);

   // Data bits
   const auto dataBitsData = ui->dataBitsBox->currentData();
   currentSettings.dataBits = dataBitsData.value<QSerialPort::DataBits>();
   currentSettings.stringDataBits = ui->dataBitsBox->currentText();

   // Parity
   const auto parityData = ui->parityBox->currentData();
   currentSettings.parity = parityData.value<QSerialPort::Parity>();
   currentSettings.stringParity = ui->parityBox->currentText();

   // Stop bits
   const auto stopBitsData = ui->stopBitsBox->currentData();
   currentSettings.stopBits = stopBitsData.value<QSerialPort::StopBits>();
   currentSettings.stringStopBits = ui->stopBitsBox->currentText();

   // Flow control
   const auto flowControlData = ui->flowControlBox->currentData();
   currentSettings.flowControl = flowControlData.value<QSerialPort::FlowControl>();
   currentSettings.stringFlowControl = ui->flowControlBox->currentText();

}

void COMSettings::readSettings()
{
    QSettings s;
    ui->Port->setCurrentIndex(s.value("portIndex").toInt());
    ui->Baud_Rate->setCurrentIndex(s.value("baudRateIndex").toInt());
    ui->dataBitsBox->setCurrentIndex(s.value("dataBitsIndex").toInt());
    ui->parityBox->setCurrentIndex(s.value("parityIndex").toInt());
    ui->stopBitsBox->setCurrentIndex(s.value("stopBitsIndex").toInt());
    ui->flowControlBox->setCurrentIndex(s.value("flowControlIndex").toInt());
}



void COMSettings::on_buttonBox_accepted()
{
    updateSettings();
    hide();
}


void COMSettings::on_buttonBox_rejected()
{
    hide();
}

