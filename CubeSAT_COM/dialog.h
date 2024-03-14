#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
//#include <QtSerialPort/QSerialPort>
#include <QSettings>
//#include <QIntValidator>

QT_USE_NAMESPACE

QT_BEGIN_NAMESPACE

namespace Ui {
class Dialog;
}

class QIntValidator;

QT_END_NAMESPACE


class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    struct Settings{
        QString name;
        qint32 baudRate;
        QString stringBaudRate;
        //QSerialPort::DataBits dataBits;
        QString stringDataBits;
        //QSerialPort::Parity parity;
        QString stringParity;
        //QSerialPort::StopBits stopBits;
        QString stringStopBits;
        //QSerialPort::FlowControl flowControl;
        QString stringFlowControl;
        bool localEchoEnabled;
    };

    Settings settings() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void showPortInfo(int idx);
    void checkCustomBaudRatePolicy(int idx);
    void readSettings();
    void writeSettings();

private:
    Ui::Dialog *ui;
    Settings currentSettings;
    QIntValidator *intValidator;


    void fillPortsParameters();
    void fillPortsInfo();
    void updateSettings();
};

#endif // DIALOG_H
