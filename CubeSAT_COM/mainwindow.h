    #ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class Dialog;

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

    Ui::MainWindow *ui;
    Dialog *settings;
    // QSerialPort *Serial_FTDI;
};
#endif // MAINWINDOW_H
