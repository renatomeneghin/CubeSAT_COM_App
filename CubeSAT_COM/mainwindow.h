#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QtGlobal>

#include <QMainWindow>

#include <QtSerialPort/QSerialPort>

QT_BEGIN_NAMESPACE

namespace Ui {
class MainWindow;
}

QT_END_NAMESPACE

class COMSettings;
class QTimer;
//class Console;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Enviar_clicked();

    void on_Comando_returnPressed();

    void on_Texto_Recebido_textChanged();

    void openSerialPort();

    void closeSerialPort();

    void handleError(QSerialPort::SerialPortError error);
    void handleBytesWritten(qint64 bytes);
    void handleWriteTimeout();

private:
    void initActionsConnections();

    void writeData(const QByteArray &data);

    void readData();

    void showWriteError(const QString &message);

    Ui::MainWindow *ui = nullptr;
    COMSettings *settings = nullptr;
    QSerialPort *Serial_FTDI = nullptr;
    qint64 BytesToWrite = 0;
    QTimer *Timer = nullptr;
//   Console *Texto_recebido = nullptr;
};
#endif // MAINWINDOW_H
