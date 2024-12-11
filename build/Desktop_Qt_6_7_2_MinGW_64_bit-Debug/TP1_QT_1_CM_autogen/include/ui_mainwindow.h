/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *MiseSousTension;
    QCheckBox *checkBox;
    QRadioButton *radioButton;
    QSlider *horizontalSlider;
    QComboBox *comboBox;
    QPushButton *DemarrageDrone;
    QLabel *EtatTension;
    QLabel *EtatDemarrage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(861, 652);
        MainWindow->setStyleSheet(QString::fromUtf8("color : rgb(255, 255, 255)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MiseSousTension = new QPushButton(centralwidget);
        MiseSousTension->setObjectName("MiseSousTension");
        MiseSousTension->setGeometry(QRect(120, 100, 101, 24));
        MiseSousTension->setStyleSheet(QString::fromUtf8("color : rgb(0, 0, 255)"));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(120, 360, 78, 22));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(120, 310, 91, 22));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(120, 270, 160, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(120, 210, 72, 24));
        DemarrageDrone = new QPushButton(centralwidget);
        DemarrageDrone->setObjectName("DemarrageDrone");
        DemarrageDrone->setGeometry(QRect(270, 100, 131, 24));
        DemarrageDrone->setStyleSheet(QString::fromUtf8("color : rgb(0, 0, 255)"));
        EtatTension = new QLabel(centralwidget);
        EtatTension->setObjectName("EtatTension");
        EtatTension->setGeometry(QRect(120, 160, 101, 21));
        EtatDemarrage = new QLabel(centralwidget);
        EtatDemarrage->setObjectName("EtatDemarrage");
        EtatDemarrage->setGeometry(QRect(280, 160, 101, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 861, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        MiseSousTension->setText(QCoreApplication::translate("MainWindow", "Mise sous tension", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        DemarrageDrone->setText(QCoreApplication::translate("MainWindow", "D\303\251marrage du drone", nullptr));
        EtatTension->setText(QCoreApplication::translate("MainWindow", "Attente...", nullptr));
        EtatDemarrage->setText(QCoreApplication::translate("MainWindow", "Attente...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
