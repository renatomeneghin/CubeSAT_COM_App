    #ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Enviar_clicked();

    void on_Comando_returnPressed();

    void on_Connection_clicked();

    void on_Texto_Recebido_textChanged();
    //bool openSerialPort();

    //bool closeSerialPort();

private:
    Ui::MainWindow *ui;
    // QSerialPort *Serial_FTDI;
};
#endif // MAINWINDOW_H
