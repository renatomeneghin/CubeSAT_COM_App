#include "dialog.h"
#include "ui_dialog.h"

//#include <QtSerialPort/QSerialPortInfo>
#include <QIntValidator>
#include <QLineEdit>

QT_USE_NAMESPACE

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    intValidator = new QIntValidator(0, 4000000, this);

    //ui->baudRateBox->setInsertPolicy(QComboBox::NoInsert);

    connect(ui->buttonBox, SIGNAL(accepted()),
            this, SLOT(apply()));
    //connect(ui->serialPortInfoListBox, SIGNAL(currentIndexChanged(int)),
    //        this, SLOT(showPortInfo(int)));
    //connect(ui->baudRateBox, SIGNAL(currentIndexChanged(int)),
    //        this, SLOT(checkCustomBaudRatePolicy(int)));

    fillPortsParameters();
    fillPortsInfo();

    readSettings();
    updateSettings();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_buttonBox_accepted()
{

}


void Dialog::on_buttonBox_rejected()
{

}

