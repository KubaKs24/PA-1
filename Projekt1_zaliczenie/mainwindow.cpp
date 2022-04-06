#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bmi.h"
#include "jednostki.h"
#include "waluty.h"
#include "kalorie.h"
#include "spalanie.h"
#include "zad.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Menu");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_BMIbutton_clicked()
{
   BMI bemi;
   bemi.setModal(true);
   bemi.exec();
}


void MainWindow::on_JEDNOSKIbutton_clicked()
{
    JEDNOSTKI jedenostki;
    jedenostki.setModal(true);
    jedenostki.exec();
}


void MainWindow::on_WALUTYbutton_clicked()
{
    WALUTY walut;
    walut.setModal(true);
    walut.exec();
}


void MainWindow::on_KCALbutton_clicked()
{
    KALORIE kcal;
    kcal.setModal(true);
    kcal.exec();
}


void MainWindow::on_AUTObutton_clicked()
{
    SPALANIE spal;
    spal.setModal(true);
    spal.exec();
}


void MainWindow::on_zad_clicked()
{
    zad ZADANIE;
    ZADANIE.setModal(true);
    ZADANIE.exec();

}

