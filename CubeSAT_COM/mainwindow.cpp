#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <string>
#include "dialog.h"

//#include <QSerialPort>
//#include <QSerialPortInfo>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    settings = new Dialog;

    ui->actionConnect->setEnabled(true);
    ui->actionDisconnect->setEnabled(false);
    ui->actionSettings->setEnabled(true);
    ui->actionClear->setEnabled(true);
    ui->Comando->setEnabled(false);
    ui->Texto_Recebido->setEnabled(false);

    initActionsConnections();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete settings;
}

void MainWindow::on_Enviar_clicked()
{
    ui->Texto_Recebido->insertPlainText(ui->Comando->text() + "\n");
    ui->Comando->clear();
}

void MainWindow::on_Comando_returnPressed()
{
    ui->Texto_Recebido->insertPlainText(ui->Comando->text() + "\n");
    ui->Comando->clear();
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
//    bool PortOpen = false;
//    const SettingsDialog::Settings p = m_settings->settings();
//    Serial_FTDI->setPortName(p.name);
//    Serial_FTDI->setBaudRate(p.baudRate);
//    Serial_FTDI->setDataBits(p.dataBits);
//    Serial_FTDI->setParity(p.parity);
//    Serial_FTDI->setStopBits(p.stopBits);
//    Serial_FTDI->setFlowControl(p.flowControl);
//    if (Serial_FTDI->open(QIODevice::ReadWrite)) {
        ui->actionConnect->setEnabled(false);
        ui->actionDisconnect->setEnabled(true);
        ui->actionSettings->setEnabled(false);
        ui->Comando->setEnabled(true);
        ui->Texto_Recebido->setEnabled(true);
//        showStatusMessage(tr("Connected to %1 : %2, %3, %4, %5, %6")
//                          .arg(p.name, p.stringBaudRate, p.stringDataBits,
//                               p.stringParity, p.stringStopBits, p.stringFlowControl));
//        PortOpen = true;
//    } else {
//        QMessageBox::critical(this, tr("Error"), Serial_FTDI->errorString());

//        showStatusMessage(tr("Open error"));
//        PortOpen = false;
//    }

//    return PortOpen;
}

void MainWindow::closeSerialPort()
{
//    if (Serial_FTDI->isOpen())
//        Serial_FTDI->close();
//    //m_console->setEnabled(false);
    ui->actionConnect->setEnabled(true);
    ui->actionDisconnect->setEnabled(false);
    ui->actionSettings->setEnabled(true);
    ui->Comando->setEnabled(false);
    ui->Texto_Recebido->setEnabled(false);
    //showStatusMessage(tr("Disconnected"));
}
