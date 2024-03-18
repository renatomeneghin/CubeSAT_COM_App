#include "dialog.h"
#include "ui_dialog.h"

#include <QtSerialPort/QSerialPortInfo>
#include <QIntValidator>
#include <QLineEdit>

QT_USE_NAMESPACE

static const char blankString[] = QT_TRANSLATE_NOOP("SettingsDialog", "N/A");


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    intValidator = new QIntValidator(0, 4000000, this);

    //ui->baudRateBox->setInsertPolicy(QComboBox::NoInsert);

    //connect(ui->serialPortInfoListBox, SIGNAL(currentIndexChanged(int)),
    //        this, SLOT(showPortInfo(int)));
    //connect(ui->baudRateBox, SIGNAL(currentIndexChanged(int)),
    //        this, SLOT(checkCustomBaudRatePolicy(int)));

    fillPortsParameters();

    readSettings();
    updateSettings();
}

Dialog::~Dialog()
{
    delete ui;
}

Dialog::Settings Dialog::settings() const
{
    return currentSettings;
}


void Dialog::checkCustomBaudRatePolicy(int idx)
{
    bool isCustomBaudRate = !ui->Baud_Rate->itemData(idx).isValid();
    ui->Baud_Rate->setEditable(isCustomBaudRate);
    if (isCustomBaudRate) {
        ui->Baud_Rate->clearEditText();
        QLineEdit *edit = ui->Baud_Rate->lineEdit();
        edit->setValidator(intValidator);
    }
}

void Dialog::fillPortsParameters()
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

void Dialog::updateSettings()
{
    currentSettings.name = ui->Port->currentText();

    // Baud Rate
   if (ui->Baud_Rate->currentIndex() == 4) {
       // custom baud rate
       currentSettings.baudRate = ui->Baud_Rate->currentText().toInt();
   } else {
       // standard baud rate
       currentSettings.baudRate = static_cast<QSerialPort::BaudRate>(
                   ui->Baud_Rate->itemData(ui->Baud_Rate->currentIndex()).toInt());
   }
   currentSettings.stringBaudRate = QString::number(currentSettings.baudRate);

   // Data bits
   currentSettings.dataBits = static_cast<QSerialPort::DataBits>(
               ui->dataBitsBox->itemData(ui->dataBitsBox->currentIndex()).toInt());
   currentSettings.stringDataBits = ui->dataBitsBox->currentText();

   // Parity
   currentSettings.parity = static_cast<QSerialPort::Parity>(
               ui->parityBox->itemData(ui->parityBox->currentIndex()).toInt());
   currentSettings.stringParity = ui->parityBox->currentText();

   // Stop bits
   currentSettings.stopBits = static_cast<QSerialPort::StopBits>(
               ui->stopBitsBox->itemData(ui->stopBitsBox->currentIndex()).toInt());
   currentSettings.stringStopBits = ui->stopBitsBox->currentText();

   // Flow control
   currentSettings.flowControl = static_cast<QSerialPort::FlowControl>(
               ui->flowControlBox->itemData(ui->flowControlBox->currentIndex()).toInt());
   currentSettings.stringFlowControl = ui->flowControlBox->currentText();

}

void Dialog::writeSettings()
{
    // Baud Rate
    QSettings s;
    s.setValue("portIndex", ui->Port->currentIndex());
    s.setValue("customBaudRate", ui->Baud_Rate->currentText().toInt());
    s.setValue("baudRateIndex",ui->Baud_Rate->currentIndex());

    // Data bits
    s.setValue("dataBitsIndex",ui->dataBitsBox->currentIndex());
    // Parity
    s.setValue("parityIndex",ui->parityBox->currentIndex());

    // Stop bits
    s.setValue("stopBitsIndex",ui->stopBitsBox->currentIndex());

    // Flow control
    s.setValue("flowControlIndex",ui->flowControlBox->currentIndex());
}

void Dialog::readSettings()
{
    QSettings s;
    ui->Port->setCurrentIndex(s.value("portIndex").toInt());
    ui->Baud_Rate->setCurrentIndex(s.value("baudRateIndex").toInt());
    ui->dataBitsBox->setCurrentIndex(s.value("dataBitsIndex").toInt());
    ui->parityBox->setCurrentIndex(s.value("parityIndex").toInt());
    ui->stopBitsBox->setCurrentIndex(s.value("stopBitsIndex").toInt());
    ui->flowControlBox->setCurrentIndex(s.value("flowControlIndex").toInt());
}



void Dialog::on_buttonBox_accepted()
{
    updateSettings();
    writeSettings();
    hide();
}


void Dialog::on_buttonBox_rejected()
{
    hide();
}

