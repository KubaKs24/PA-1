#include "spalanie.h"
#include "ui_spalanie.h"

SPALANIE::SPALANIE(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SPALANIE)
{
    ui->setupUi(this);
    this->setWindowTitle("Koszt podróży");
}

SPALANIE::~SPALANIE()
{
    delete ui;
}

void SPALANIE::on_OBLICZbutton_clicked()
{
    float trasa = ui->TRASAline->text().toFloat();
    float spalanie = ui->SPALANIEline->text().toFloat();
    float koszt_paliwa = ui->KOSZTline->text().toFloat();
    float koszt_trasy = (trasa/100)*spalanie*koszt_paliwa;
    QString a = QString::number(koszt_trasy);
    a.append("zł");

    ui->displayKOSZT->setText(a);
}

