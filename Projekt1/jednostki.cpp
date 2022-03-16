#include "jednostki.h"
#include "ui_jednostki.h"

JEDNOSTKI::JEDNOSTKI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JEDNOSTKI)
{
    ui->setupUi(this);
    this->setWindowTitle("Konwerter jednostek");
}

JEDNOSTKI::~JEDNOSTKI()
{
    delete ui;
}
