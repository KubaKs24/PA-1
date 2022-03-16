#include "waluty.h"
#include "ui_waluty.h"

WALUTY::WALUTY(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WALUTY)
{
    ui->setupUi(this);
    this->setWindowTitle("Waluty");
}

WALUTY::~WALUTY()
{
    delete ui;

}


