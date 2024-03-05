#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    ui->Texto_Recebido->insertPlainText(ui->Comando->toPlainText() + "\n");
    ui->Comando->setPlainText("");
}

