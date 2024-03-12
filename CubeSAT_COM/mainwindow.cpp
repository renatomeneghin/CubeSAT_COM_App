#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

// #include <QSerialPort>
// #include <QSerialPortInfo>

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


