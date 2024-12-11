#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    clickTension = false;
    clickDemarrage = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_MiseSousTension_clicked()
{
    if (clickTension) {
        // on met le texte à l'état inactif et on positionne la variable
        ui->EtatTension->setText("Mise en tension");
        ui->EtatTension->setDisabled(false);
        clickTension = false;
    } else {
        // modification du texte
        ui->EtatTension->setText("Mise hors tension");
        ui->EtatTension->setDisabled(true);
        clickTension = true;
    }
}


void MainWindow::on_DemarrageDrone_clicked()
{
        if ( clickDemarrage==false) {
            // modification du texte
            ui->EtatDemarrage->setText("Drone éteint");
            // on met le texte à l'état inactif et on positionne la variable
            ui->EtatDemarrage->setText("Drone démarré");
            ui->EtatDemarrage->setDisabled(true);
            clickDemarrage = true;
        }

}
