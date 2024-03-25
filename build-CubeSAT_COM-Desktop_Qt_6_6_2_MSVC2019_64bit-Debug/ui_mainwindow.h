/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionSettings;
    QAction *actionClear;
    QWidget *centralwidget;
    QGridLayout *gridLayout_7;
    QGraphicsView *Bateria_imagem;
    QGroupBox *EPS_Data;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *Bateria1;
    QLineEdit *Bat_1_mV;
    QLabel *Bateria2;
    QLineEdit *Bat_2_mV;
    QLabel *Corrente_Bateria;
    QLineEdit *Bat_mA;
    QLabel *Corrente_media_Bateria;
    QLineEdit *Bat_mA_avg;
    QLabel *label_9;
    QLineEdit *Bat_mA_Acc;
    QLabel *label_11;
    QLineEdit *Protection_reg;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_4;
    QLabel *Bateria1_2;
    QLineEdit *Bat_1_mV_2;
    QLabel *Bateria2_2;
    QLineEdit *Bat_2_mV_2;
    QLabel *Corrente_Bateria_2;
    QLineEdit *Bat_mA_2;
    QLabel *Corrente_media_Bateria_2;
    QLineEdit *Bat_mA_avg_2;
    QLabel *label_10;
    QLineEdit *Bat_mA_Acc_2;
    QLabel *label_12;
    QLineEdit *Protection_reg_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_6;
    QLabel *Bateria1_3;
    QLineEdit *Bat_1_mV_3;
    QLabel *Bateria2_3;
    QLineEdit *Bat_2_mV_3;
    QLabel *Corrente_Bateria_3;
    QLineEdit *Bat_mA_3;
    QLabel *Corrente_media_Bateria_3;
    QLineEdit *Bat_mA_avg_3;
    QLabel *label_13;
    QLineEdit *Bat_mA_Acc_3;
    QLabel *label_14;
    QLineEdit *Protection_reg_3;
    QLCDNumber *Bateria_numero;
    QFrame *verticalFrame_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *texto_Comando;
    QLineEdit *Comando;
    QPushButton *Enviar;
    QPlainTextEdit *Texto_Recebido;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1335, 550);
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName("actionConnect");
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Images/connect-icon-2048x2048-llyaix70.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName("actionDisconnect");
        actionDisconnect->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Images/disconnect_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon1);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName("actionSettings");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../Images/Settings_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon2);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName("actionClear");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../Images/Clean_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_7 = new QGridLayout(centralwidget);
        gridLayout_7->setObjectName("gridLayout_7");
        Bateria_imagem = new QGraphicsView(centralwidget);
        Bateria_imagem->setObjectName("Bateria_imagem");

        gridLayout_7->addWidget(Bateria_imagem, 0, 0, 1, 1);

        EPS_Data = new QGroupBox(centralwidget);
        EPS_Data->setObjectName("EPS_Data");
        gridLayout = new QGridLayout(EPS_Data);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(EPS_Data);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 317, 200));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName("gridLayout_2");
        Bateria1 = new QLabel(scrollAreaWidgetContents);
        Bateria1->setObjectName("Bateria1");

        gridLayout_2->addWidget(Bateria1, 0, 0, 1, 1);

        Bat_1_mV = new QLineEdit(scrollAreaWidgetContents);
        Bat_1_mV->setObjectName("Bat_1_mV");
        Bat_1_mV->setReadOnly(true);

        gridLayout_2->addWidget(Bat_1_mV, 0, 1, 1, 1);

        Bateria2 = new QLabel(scrollAreaWidgetContents);
        Bateria2->setObjectName("Bateria2");

        gridLayout_2->addWidget(Bateria2, 1, 0, 1, 1);

        Bat_2_mV = new QLineEdit(scrollAreaWidgetContents);
        Bat_2_mV->setObjectName("Bat_2_mV");
        Bat_2_mV->setReadOnly(true);

        gridLayout_2->addWidget(Bat_2_mV, 1, 1, 1, 1);

        Corrente_Bateria = new QLabel(scrollAreaWidgetContents);
        Corrente_Bateria->setObjectName("Corrente_Bateria");

        gridLayout_2->addWidget(Corrente_Bateria, 2, 0, 1, 1);

        Bat_mA = new QLineEdit(scrollAreaWidgetContents);
        Bat_mA->setObjectName("Bat_mA");
        Bat_mA->setReadOnly(true);

        gridLayout_2->addWidget(Bat_mA, 2, 1, 1, 1);

        Corrente_media_Bateria = new QLabel(scrollAreaWidgetContents);
        Corrente_media_Bateria->setObjectName("Corrente_media_Bateria");

        gridLayout_2->addWidget(Corrente_media_Bateria, 3, 0, 1, 1);

        Bat_mA_avg = new QLineEdit(scrollAreaWidgetContents);
        Bat_mA_avg->setObjectName("Bat_mA_avg");
        Bat_mA_avg->setReadOnly(true);

        gridLayout_2->addWidget(Bat_mA_avg, 3, 1, 1, 1);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName("label_9");

        gridLayout_2->addWidget(label_9, 4, 0, 1, 1);

        Bat_mA_Acc = new QLineEdit(scrollAreaWidgetContents);
        Bat_mA_Acc->setObjectName("Bat_mA_Acc");
        Bat_mA_Acc->setReadOnly(true);

        gridLayout_2->addWidget(Bat_mA_Acc, 4, 1, 1, 1);

        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName("label_11");

        gridLayout_2->addWidget(label_11, 5, 0, 1, 1);

        Protection_reg = new QLineEdit(scrollAreaWidgetContents);
        Protection_reg->setObjectName("Protection_reg");
        Protection_reg->setReadOnly(true);

        gridLayout_2->addWidget(Protection_reg, 5, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 1, 1, 1);


        gridLayout_7->addWidget(EPS_Data, 0, 1, 2, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(groupBox_2);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 316, 200));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_4->setObjectName("gridLayout_4");
        Bateria1_2 = new QLabel(scrollAreaWidgetContents_2);
        Bateria1_2->setObjectName("Bateria1_2");

        gridLayout_4->addWidget(Bateria1_2, 0, 0, 1, 1);

        Bat_1_mV_2 = new QLineEdit(scrollAreaWidgetContents_2);
        Bat_1_mV_2->setObjectName("Bat_1_mV_2");
        Bat_1_mV_2->setReadOnly(true);

        gridLayout_4->addWidget(Bat_1_mV_2, 0, 1, 1, 1);

        Bateria2_2 = new QLabel(scrollAreaWidgetContents_2);
        Bateria2_2->setObjectName("Bateria2_2");

        gridLayout_4->addWidget(Bateria2_2, 1, 0, 1, 1);

        Bat_2_mV_2 = new QLineEdit(scrollAreaWidgetContents_2);
        Bat_2_mV_2->setObjectName("Bat_2_mV_2");
        Bat_2_mV_2->setReadOnly(true);

        gridLayout_4->addWidget(Bat_2_mV_2, 1, 1, 1, 1);

        Corrente_Bateria_2 = new QLabel(scrollAreaWidgetContents_2);
        Corrente_Bateria_2->setObjectName("Corrente_Bateria_2");

        gridLayout_4->addWidget(Corrente_Bateria_2, 2, 0, 1, 1);

        Bat_mA_2 = new QLineEdit(scrollAreaWidgetContents_2);
        Bat_mA_2->setObjectName("Bat_mA_2");
        Bat_mA_2->setReadOnly(true);

        gridLayout_4->addWidget(Bat_mA_2, 2, 1, 1, 1);

        Corrente_media_Bateria_2 = new QLabel(scrollAreaWidgetContents_2);
        Corrente_media_Bateria_2->setObjectName("Corrente_media_Bateria_2");

        gridLayout_4->addWidget(Corrente_media_Bateria_2, 3, 0, 1, 1);

        Bat_mA_avg_2 = new QLineEdit(scrollAreaWidgetContents_2);
        Bat_mA_avg_2->setObjectName("Bat_mA_avg_2");
        Bat_mA_avg_2->setReadOnly(true);

        gridLayout_4->addWidget(Bat_mA_avg_2, 3, 1, 1, 1);

        label_10 = new QLabel(scrollAreaWidgetContents_2);
        label_10->setObjectName("label_10");

        gridLayout_4->addWidget(label_10, 4, 0, 1, 1);

        Bat_mA_Acc_2 = new QLineEdit(scrollAreaWidgetContents_2);
        Bat_mA_Acc_2->setObjectName("Bat_mA_Acc_2");
        Bat_mA_Acc_2->setReadOnly(true);

        gridLayout_4->addWidget(Bat_mA_Acc_2, 4, 1, 1, 1);

        label_12 = new QLabel(scrollAreaWidgetContents_2);
        label_12->setObjectName("label_12");

        gridLayout_4->addWidget(label_12, 5, 0, 1, 1);

        Protection_reg_2 = new QLineEdit(scrollAreaWidgetContents_2);
        Protection_reg_2->setObjectName("Protection_reg_2");
        Protection_reg_2->setReadOnly(true);

        gridLayout_4->addWidget(Protection_reg_2, 5, 1, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_3->addWidget(scrollArea_2, 0, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_2, 0, 2, 2, 1);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        scrollArea_3 = new QScrollArea(groupBox_3);
        scrollArea_3->setObjectName("scrollArea_3");
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 317, 200));
        gridLayout_6 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_6->setObjectName("gridLayout_6");
        Bateria1_3 = new QLabel(scrollAreaWidgetContents_3);
        Bateria1_3->setObjectName("Bateria1_3");

        gridLayout_6->addWidget(Bateria1_3, 0, 0, 1, 1);

        Bat_1_mV_3 = new QLineEdit(scrollAreaWidgetContents_3);
        Bat_1_mV_3->setObjectName("Bat_1_mV_3");
        Bat_1_mV_3->setReadOnly(true);

        gridLayout_6->addWidget(Bat_1_mV_3, 0, 1, 1, 1);

        Bateria2_3 = new QLabel(scrollAreaWidgetContents_3);
        Bateria2_3->setObjectName("Bateria2_3");

        gridLayout_6->addWidget(Bateria2_3, 1, 0, 1, 1);

        Bat_2_mV_3 = new QLineEdit(scrollAreaWidgetContents_3);
        Bat_2_mV_3->setObjectName("Bat_2_mV_3");
        Bat_2_mV_3->setReadOnly(true);

        gridLayout_6->addWidget(Bat_2_mV_3, 1, 1, 1, 1);

        Corrente_Bateria_3 = new QLabel(scrollAreaWidgetContents_3);
        Corrente_Bateria_3->setObjectName("Corrente_Bateria_3");

        gridLayout_6->addWidget(Corrente_Bateria_3, 2, 0, 1, 1);

        Bat_mA_3 = new QLineEdit(scrollAreaWidgetContents_3);
        Bat_mA_3->setObjectName("Bat_mA_3");
        Bat_mA_3->setReadOnly(true);

        gridLayout_6->addWidget(Bat_mA_3, 2, 1, 1, 1);

        Corrente_media_Bateria_3 = new QLabel(scrollAreaWidgetContents_3);
        Corrente_media_Bateria_3->setObjectName("Corrente_media_Bateria_3");

        gridLayout_6->addWidget(Corrente_media_Bateria_3, 3, 0, 1, 1);

        Bat_mA_avg_3 = new QLineEdit(scrollAreaWidgetContents_3);
        Bat_mA_avg_3->setObjectName("Bat_mA_avg_3");
        Bat_mA_avg_3->setReadOnly(true);

        gridLayout_6->addWidget(Bat_mA_avg_3, 3, 1, 1, 1);

        label_13 = new QLabel(scrollAreaWidgetContents_3);
        label_13->setObjectName("label_13");

        gridLayout_6->addWidget(label_13, 4, 0, 1, 1);

        Bat_mA_Acc_3 = new QLineEdit(scrollAreaWidgetContents_3);
        Bat_mA_Acc_3->setObjectName("Bat_mA_Acc_3");
        Bat_mA_Acc_3->setReadOnly(true);

        gridLayout_6->addWidget(Bat_mA_Acc_3, 4, 1, 1, 1);

        label_14 = new QLabel(scrollAreaWidgetContents_3);
        label_14->setObjectName("label_14");

        gridLayout_6->addWidget(label_14, 5, 0, 1, 1);

        Protection_reg_3 = new QLineEdit(scrollAreaWidgetContents_3);
        Protection_reg_3->setObjectName("Protection_reg_3");
        Protection_reg_3->setReadOnly(true);

        gridLayout_6->addWidget(Protection_reg_3, 5, 1, 1, 1);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        gridLayout_5->addWidget(scrollArea_3, 0, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_3, 0, 3, 2, 1);

        Bateria_numero = new QLCDNumber(centralwidget);
        Bateria_numero->setObjectName("Bateria_numero");
        Bateria_numero->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setPointSize(12);
        Bateria_numero->setFont(font);
        Bateria_numero->setSmallDecimalPoint(true);

        gridLayout_7->addWidget(Bateria_numero, 1, 0, 1, 1);

        verticalFrame_2 = new QFrame(centralwidget);
        verticalFrame_2->setObjectName("verticalFrame_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalFrame_2->sizePolicy().hasHeightForWidth());
        verticalFrame_2->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(verticalFrame_2);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName("horizontalLayout");
        texto_Comando = new QLabel(verticalFrame_2);
        texto_Comando->setObjectName("texto_Comando");

        horizontalLayout->addWidget(texto_Comando);

        Comando = new QLineEdit(verticalFrame_2);
        Comando->setObjectName("Comando");

        horizontalLayout->addWidget(Comando);

        Enviar = new QPushButton(verticalFrame_2);
        Enviar->setObjectName("Enviar");
        Enviar->setMinimumSize(QSize(89, 0));

        horizontalLayout->addWidget(Enviar);


        verticalLayout_3->addLayout(horizontalLayout);

        Texto_Recebido = new QPlainTextEdit(verticalFrame_2);
        Texto_Recebido->setObjectName("Texto_Recebido");

        verticalLayout_3->addWidget(Texto_Recebido);


        gridLayout_7->addWidget(verticalFrame_2, 2, 0, 1, 4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1335, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setEnabled(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
#if QT_CONFIG(shortcut)
        Bateria1->setBuddy(Bat_1_mV);
        Bateria2->setBuddy(Bat_2_mV);
        Corrente_Bateria->setBuddy(Bat_mA);
        Corrente_media_Bateria->setBuddy(Bat_mA_avg);
        label_9->setBuddy(Bat_mA_Acc);
        label_11->setBuddy(Protection_reg);
        Bateria1_2->setBuddy(Bat_1_mV);
        Bateria2_2->setBuddy(Bat_2_mV);
        Corrente_Bateria_2->setBuddy(Bat_mA);
        Corrente_media_Bateria_2->setBuddy(Bat_mA_avg);
        label_10->setBuddy(Bat_mA_Acc);
        label_12->setBuddy(Protection_reg);
        Bateria1_3->setBuddy(Bat_1_mV);
        Bateria2_3->setBuddy(Bat_2_mV);
        Corrente_Bateria_3->setBuddy(Bat_mA);
        Corrente_media_Bateria_3->setBuddy(Bat_mA_avg);
        label_13->setBuddy(Bat_mA_Acc);
        label_14->setBuddy(Protection_reg);
#endif // QT_CONFIG(shortcut)

        toolBar->addAction(actionConnect);
        toolBar->addAction(actionDisconnect);
        toolBar->addAction(actionSettings);
        toolBar->addAction(actionClear);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Controlador CubeSAT - SpaceLAB UFSC", nullptr));
        actionConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
#if QT_CONFIG(tooltip)
        actionConnect->setToolTip(QCoreApplication::translate("MainWindow", "Connect", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        actionSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        actionClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        EPS_Data->setTitle(QCoreApplication::translate("MainWindow", "EPS Data", nullptr));
        Bateria1->setText(QCoreApplication::translate("MainWindow", "Battery 1 Voltage:", nullptr));
        Bat_1_mV->setPlaceholderText(QCoreApplication::translate("MainWindow", "3300 mV", nullptr));
        Bateria2->setText(QCoreApplication::translate("MainWindow", "Battery 2 Voltage:", nullptr));
        Bat_2_mV->setPlaceholderText(QCoreApplication::translate("MainWindow", "3300 mV", nullptr));
        Corrente_Bateria->setText(QCoreApplication::translate("MainWindow", "Battery Current:", nullptr));
        Bat_mA->setText(QCoreApplication::translate("MainWindow", "1.000 mA", nullptr));
        Bat_mA->setPlaceholderText(QCoreApplication::translate("MainWindow", "3300 mV", nullptr));
        Corrente_media_Bateria->setText(QCoreApplication::translate("MainWindow", "Battery Average Current:", nullptr));
        Bat_mA_avg->setText(QCoreApplication::translate("MainWindow", "1.000 mA", nullptr));
        Bat_mA_avg->setPlaceholderText(QCoreApplication::translate("MainWindow", "3300 mV", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Battery Accumulated Current:", nullptr));
        Bat_mA_Acc->setText(QCoreApplication::translate("MainWindow", "1.000 mA", nullptr));
        Bat_mA_Acc->setPlaceholderText(QCoreApplication::translate("MainWindow", "3300 mV", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Protection Register:", nullptr));
        Protection_reg->setText(QCoreApplication::translate("MainWindow", "0x3f", nullptr));
        Protection_reg->setPlaceholderText(QCoreApplication::translate("MainWindow", "3300 mV", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "EPS Data", nullptr));
        Bateria1_2->setText(QCoreApplication::translate("MainWindow", "Battery 1 Voltage:", nullptr));
        Bat_1_mV_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "3300 mV", nullptr));
        Bateria2_2->setText(QCoreApplication::translate("MainWindow", "Battery 2 Voltage:", nullptr));
        Bat_2_mV_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "3300 mV", nullptr));
        Corrente_Bateria_2->setText(QCoreApplication::translate("MainWindow", "Battery Current:", nullptr));
        Bat_mA_2->setText(QCoreApplication::translate("MainWindow", "1.000 mA", nullptr));
        Bat_mA_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "3300 mV", nullptr));
        Corrente_media_Bateria_2->setText(QCoreApplication::translate("MainWindow", "Battery Average Current:", nullptr));
        Bat_mA_avg_2->setText(QCoreApplication::translate("MainWindow", "1.000 mA", nullptr));
        Bat_mA_avg_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "3300 mV", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Battery Accumulated Current:", nullptr));
        Bat_mA_Acc_2->setText(QCoreApplication::translate("MainWindow", "1.000 mA", nullptr));
        Bat_mA_Acc_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "3300 mV", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Protection Register:", nullptr));
        Protection_reg_2->setText(QCoreApplication::translate("MainWindow", "0x3f", nullptr));
        Protection_reg_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "3300 mV", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "EPS Data", nullptr));
        Bateria1_3->setText(QCoreApplication::translate("MainWindow", "Battery 1 Voltage:", nullptr));
        Bat_1_mV_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "3300 mV", nullptr));
        Bateria2_3->setText(QCoreApplication::translate("MainWindow", "Battery 2 Voltage:", nullptr));
        Bat_2_mV_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "3300 mV", nullptr));
        Corrente_Bateria_3->setText(QCoreApplication::translate("MainWindow", "Battery Current:", nullptr));
        Bat_mA_3->setText(QCoreApplication::translate("MainWindow", "1.000 mA", nullptr));
        Bat_mA_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "3300 mV", nullptr));
        Corrente_media_Bateria_3->setText(QCoreApplication::translate("MainWindow", "Battery Average Current:", nullptr));
        Bat_mA_avg_3->setText(QCoreApplication::translate("MainWindow", "1.000 mA", nullptr));
        Bat_mA_avg_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "3300 mV", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Battery Accumulated Current:", nullptr));
        Bat_mA_Acc_3->setText(QCoreApplication::translate("MainWindow", "1.000 mA", nullptr));
        Bat_mA_Acc_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "3300 mV", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Protection Register:", nullptr));
        Protection_reg_3->setText(QCoreApplication::translate("MainWindow", "0x3f", nullptr));
        Protection_reg_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "3300 mV", nullptr));
        texto_Comando->setText(QCoreApplication::translate("MainWindow", "Comando:", nullptr));
        Enviar->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
