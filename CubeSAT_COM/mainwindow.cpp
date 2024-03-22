#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <string>
#include "COMSettings.h"
#include <QMessageBox>
#include <QDebug>
#include <QLabel>
#include <QPixmap>
#include <QFile>
#include <QTextStream>

#define DUMMY_PORT 1

#if (!defined(DUMMY_PORT) && DUMMY_PORT != 1)
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#endif

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    settings = new COMSettings;

    ui->actionConnect->setEnabled(true);
    ui->actionDisconnect->setEnabled(false);
    ui->actionSettings->setEnabled(true);
    ui->actionClear->setEnabled(true);
    ui->Comando->setEnabled(false);
    ui->Texto_Recebido->setEnabled(false);
    ui->Texto_Recebido->setReadOnly(true);
    ui->Enviar->setEnabled(false);

    initActionsConnections();
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
    #if (!defined(DUMMY_PORT) && DUMMY_PORT==1)
        Serial_FTDI->write(data);
    #else
        ui->Texto_Recebido->insertPlainText(data + "\n");
        ui->Comando->clear();
    #endif
}
//! [6]

//! [7]
void MainWindow::readData()
{
    #if (!defined(DUMMY_PORT) && DUMMY_PORT==1)
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
        if (Serial_FTDI->open(QIODevice::ReadWrite)) {
            if (Serial_FTDI->setBaudRate(p.baudRate)
                    && Serial_FTDI->setDataBits(p.dataBits)
                    && Serial_FTDI->setParity(p.parity)
                    && Serial_FTDI->setStopBits(p.stopBits)
                    && Serial_FTDI->setFlowControl(p.flowControl)) {

                ui->actionConnect->setEnabled(false);
                ui->actionDisconnect->setEnabled(true);
                ui->actionSettings->setEnabled(false);
                ui->Comando->setEnabled(true);
                ui->Texto_Recebido->setEnabled(true);
                ui->Enviar->setEnabled(true);

                ui->statusbar->showMessage(tr("Connected to %1 : %2, %3, %4, %5, %6")
                                           .arg(p.name).arg(p.stringBaudRate).arg(p.stringDataBits)
                                           .arg(p.stringParity).arg(p.stringStopBits).arg(p.stringFlowControl));

            } else {
                Serial_FTDI->close();
                QMessageBox::critical(this, tr("Error"), Serial_FTDI->errorString());

                ui->statusbar->showMessage(tr("Open error"));
            }
        } else {
            QMessageBox::critical(this, tr("Error"), Serial_FTDI->errorString());

            ui->statusbar->showMessage(tr("Configure error"));
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
