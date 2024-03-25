#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <string>
#include "COMSettings.h"
//#include "console.h"
#include <QMessageBox>
#include <QDebug>
#include <QLabel>
#include <QPixmap>
#include <QFile>
#include <QTextStream>
#include <QTimer>

// #define DUMMY_PORT 1

#if (!defined(DUMMY_PORT) && DUMMY_PORT != 1)
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#endif

#include <chrono>

static constexpr std::chrono::seconds kWriteTimeout = std::chrono::seconds{5};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    settings = new COMSettings;
    Timer = new QTimer(this);

    //Texto_recebido = new Console;

    Serial_FTDI = new QSerialPort(this);

    ui->actionConnect->setEnabled(true);
    ui->actionDisconnect->setEnabled(false);
    ui->actionSettings->setEnabled(true);
    ui->actionClear->setEnabled(true);
    ui->Comando->setEnabled(false);
    ui->Texto_Recebido->setEnabled(false);
    ui->Texto_Recebido->setReadOnly(true);
    ui->Enviar->setEnabled(false);

    initActionsConnections();

    connect(Serial_FTDI, &QSerialPort::errorOccurred, this, &MainWindow::handleError);
    connect(Timer, &QTimer::timeout, this, &MainWindow::handleWriteTimeout);
    Timer->setSingleShot(true);

    //! [2]
    connect(Serial_FTDI, &QSerialPort::readyRead, this, &MainWindow::readData);
    connect(Serial_FTDI, &QSerialPort::bytesWritten, this, &MainWindow::handleBytesWritten);
    //! [2]
}

MainWindow::~MainWindow()
{
    delete ui;
    delete settings;
}

void MainWindow::on_Enviar_clicked()
{
    this->writeData((ui->Comando->text()).toLocal8Bit());
    ui->Comando->clear();
}

void MainWindow::on_Comando_returnPressed()
{    
    this->writeData((ui->Comando->text()).toLocal8Bit());
    ui->Comando->clear();
}

void MainWindow::writeData(const QByteArray &data)
{
    #if (!defined(DUMMY_PORT) && DUMMY_PORT!=1)
        const qint64 written = Serial_FTDI->write(data);
        if (written == data.size()) {
            BytesToWrite += written;
            Timer->start(kWriteTimeout);
        } else {
            const QString error = tr("Failed to write all data to port %1.\n"
                                     "Error: %2").arg(Serial_FTDI->portName(),
                                           Serial_FTDI->errorString());
            showWriteError(error);
        }
    #else
        ui->Texto_Recebido->insertPlainText(data + "\n");
    #endif
}
//! [6]

//! [7]
void MainWindow::readData()
{
    #if (!defined(DUMMY_PORT) && DUMMY_PORT!=1)
        QByteArray data = Serial_FTDI->readAll();
        ui->Texto_Recebido->insertPlainText(QString(data));
    #endif
}

void MainWindow::on_Texto_Recebido_textChanged()
{
    std::string Texto = ui->Texto_Recebido->toPlainText().toStdString();

    for (int i = 0; Texto[i]; i++){
        if (Texto[i] == 'V' && isdigit(Texto[i+1]) && isdigit(Texto[i+2]) && isdigit(Texto[i+3]) && isdigit(Texto[i+4])){
            ui->Bat_1_mV->setText(QString::fromStdString(Texto.substr(i+1,4)) + " mV");
        }
    }
}

void MainWindow::initActionsConnections()
{
    connect(ui->actionConnect, SIGNAL(triggered()), this, SLOT(openSerialPort()));
    connect(ui->actionDisconnect, SIGNAL(triggered()), this, SLOT(closeSerialPort()));
    connect(ui->actionSettings, SIGNAL(triggered()), settings, SLOT(show()));
    connect(ui->actionClear, SIGNAL(triggered()), ui->Texto_Recebido, SLOT(clear()));
}


void MainWindow::openSerialPort(){
    #if (!defined(DUMMY_PORT) && DUMMY_PORT!=1)
        const COMSettings::Settings p = settings->settings();
        Serial_FTDI->setPortName(p.name);
        Serial_FTDI->setBaudRate(p.baudRate);
        Serial_FTDI->setDataBits(p.dataBits);
        Serial_FTDI->setParity(p.parity);
        Serial_FTDI->setStopBits(p.stopBits);
        Serial_FTDI->setFlowControl(p.flowControl);
        if (Serial_FTDI->open(QIODevice::ReadWrite)) {
            ui->actionConnect->setEnabled(false);
            ui->actionDisconnect->setEnabled(true);
            ui->actionSettings->setEnabled(false);
            ui->Comando->setEnabled(true);
            ui->Texto_Recebido->setEnabled(true);
            ui->Enviar->setEnabled(true);
            ui->Comando->setFocus();

            ui->statusbar->showMessage(tr("Connected to %1 : %2, %3, %4, %5, %6")
                                       .arg(p.name).arg(p.stringBaudRate).arg(p.stringDataBits)
                                       .arg(p.stringParity).arg(p.stringStopBits).arg(p.stringFlowControl));

        } else {
            Serial_FTDI->close();
            QMessageBox::critical(this, tr("Error"), Serial_FTDI->errorString());

            ui->statusbar->showMessage(tr("Open error"));
        }
    #else
        ui->actionConnect->setEnabled(false);
        ui->actionDisconnect->setEnabled(true);
        ui->actionSettings->setEnabled(false);
        ui->Comando->setEnabled(true);
        ui->Texto_Recebido->setEnabled(true);
        ui->Enviar->setEnabled(true);
        ui->statusbar->showMessage(tr("Connected"));
    #endif
}

void MainWindow::closeSerialPort()
{
    #if (!defined(DUMMY_PORT) && DUMMY_PORT!=1)
    if (Serial_FTDI->isOpen())
        Serial_FTDI->close();
    #endif

    ui->actionConnect->setEnabled(true);
    ui->actionDisconnect->setEnabled(false);
    ui->actionSettings->setEnabled(true);
    ui->Comando->setEnabled(false);
    ui->Texto_Recebido->setEnabled(false);
    ui->Enviar->setEnabled(false);
    ui->statusbar->showMessage(tr("Disconnected"));
}

void MainWindow::handleError(QSerialPort::SerialPortError error)
{
    if (error == QSerialPort::ResourceError) {
        QMessageBox::critical(this, tr("Critical Error"), Serial_FTDI->errorString());
        closeSerialPort();
    }
}

void MainWindow::showWriteError(const QString &message)
{
    QMessageBox::warning(this, tr("Warning"), message);
}

void MainWindow::handleWriteTimeout()
{
    const QString error = tr("Write operation timed out for port %1.\n"
                             "Error: %2").arg(Serial_FTDI->portName(),
                                   Serial_FTDI->errorString());
    showWriteError(error);
}

void MainWindow::handleBytesWritten(qint64 bytes)
{
    BytesToWrite -= bytes;
    if (BytesToWrite == 0)
        Timer->stop();
}
