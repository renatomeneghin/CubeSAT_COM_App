#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

//#include <QSerialPort>
//#include <QSerialPortInfo>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
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


void MainWindow::on_Connection_clicked()
{
    if (ui->Connection->text() == "Connect"){
        // Conectar ao Uart
        ui->Connection->setText("Disconnect");
    } else if (ui->Connection->text() == "Disconnect") {
        // if(Desonectar_UART())
        ui->Connection->setText("Connect");
    }
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

//bool MainWindow::openSerialPort(){
//    bool PortOpen = false;
//    const SettingsDialog::Settings p = m_settings->settings();
//    Serial_FTDI->setPortName(p.name);
//    Serial_FTDI->setBaudRate(p.baudRate);
//    Serial_FTDI->setDataBits(p.dataBits);
//    Serial_FTDI->setParity(p.parity);
//    Serial_FTDI->setStopBits(p.stopBits);
//    Serial_FTDI->setFlowControl(p.flowControl);
//    if (Serial_FTDI->open(QIODevice::ReadWrite)) {
//        ui->actionConnect->setEnabled(false);
//        ui->actionDisconnect->setEnabled(true);
//        ui->actionConfigure->setEnabled(false);
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
//}

//void MainWindow::closeSerialPort()
//{
//    if (Serial_FTDI->isOpen())
//        Serial_FTDI->close();
//    //m_console->setEnabled(false);
//    ui->actionConnect->setEnabled(true);
//    ui->actionDisconnect->setEnabled(false);
//    ui->actionConfigure->setEnabled(true);
//    showStatusMessage(tr("Disconnected"));
//}
////bool MainWindow::closeSerialPort();
