#include "mainwindow.h"
#include "ui_mainwindow.h"

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

