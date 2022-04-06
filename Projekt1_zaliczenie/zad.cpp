#include "zad.h"
#include "ui_zad.h"

zad::zad(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zad)
{
    ui->setupUi(this);
    this->setWindowTitle("Zadanie");
}

zad::~zad()
{
    delete ui;
}

void zad::on_horizontalSlider_valueChanged(int value)
{
    ui->progressBar->setValue((value));
}

