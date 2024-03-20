#ifndef COMSETTINGS_H
#define COMSETTINGS_H

#include <QDialog>
#include <QtSerialPort/QSerialPort>
#include <QSettings>
#include <QIntValidator>

QT_USE_NAMESPACE

QT_BEGIN_NAMESPACE

namespace Ui {
class COMSettings;
}

class QIntValidator;

QT_END_NAMESPACE


class COMSettings : public QDialog
{
    Q_OBJECT

public:
    explicit COMSettings(QWidget *parent = nullptr);
    ~COMSettings();
    struct Settings{
        QString name;
        qint32 baudRate;
        QString stringBaudRate;
        QSerialPort::DataBits dataBits;
        QString stringDataBits;
        QSerialPort::Parity parity;
        QString stringParity;
        QSerialPort::StopBits stopBits;
        QString stringStopBits;
        QSerialPort::FlowControl flowControl;
        QString stringFlowControl;
    };

    Settings settings() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void checkCustomBaudRatePolicy(int idx);
    void readSettings();
    void writeSettings();

private:
    Ui::COMSettings *ui = nullptr;
    Settings currentSettings;
    QIntValidator *intValidator = nullptr;


    void fillPortsParameters();
    void updateSettings();
};

#endif // COMSETTINGS_H
