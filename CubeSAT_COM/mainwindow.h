    #ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class COMSettings;

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

private:
    void initActionsConnections();

    void writeData(const QByteArray &data);

    void readData();

    void showStatusMessage(const QString &message);

    Ui::MainWindow *ui;
    COMSettings *settings;
    QSerialPort *Serial_FTDI;
};
#endif // MAINWINDOW_H
