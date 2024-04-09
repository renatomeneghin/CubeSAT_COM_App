#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QtGlobal>

#include <QMainWindow>

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <complex>
#include <algorithm>
#include <random>
#include <ctime>

#include <uhd/types/tune_request.hpp>
#include <uhd/utils/thread_priority.hpp>
#include <uhd/utils/safe_main.hpp>
#include <uhd/usrp/multi_usrp.hpp>
#include <uhd/exception.hpp>

#include <boost/assign.hpp>
#include <boost/thread/thread.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/chrono/chrono.hpp>
#include <boost/filesystem.hpp>
#include <boost/circular_buffer.hpp>

#include <QtSerialPort/QSerialPort>

#include "waveform.h"

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
    Ui::MainWindow *ui = nullptr;
    uhd::usrp::multi_usrp::sptr usrp;
    std::vector<std::vector<std::complex<PRECISION>>> dataMatrixCh1;
    std::vector<std::vector<std::complex<PRECISION>>> dataMatrixCh2;
    double NoiseFloorCh1;
    double NoiseFloorCh2;
    std::vector<std::complex<PRECISION>> *waveformSpectrum, *waveform;
    size_t waveformSpectrumDim, waveformDim;
    std::vector<size_t> dimensions;
    // Detection *Detections;
    bool simulation;
    // std::vector<SimulatedTarget*> targets;
    // std::vector<Tracker*> trackers;
    boost::chrono::system_clock::time_point start;
    std::string folder_name;
    std::vector<double> prfV, bwV, plV, npV, rcovV, vcovV, tV, phDiffV;


    void usrpSetParametersFromFields();

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

    void usrpConnect();
    void usrpUpdateTextFields();

    void showWriteError(const QString &message);


    COMSettings *settings = nullptr;
    QSerialPort *Serial_FTDI = nullptr;
    qint64 BytesToWrite = 0;
    QTimer *Timer = nullptr;
//   Console *Texto_recebido = nullptr;
};
#endif // MAINWINDOW_H
