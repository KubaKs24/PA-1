#include "kalorie.h"
#include "ui_kalorie.h"

KALORIE::KALORIE(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KALORIE)
{
    ui->setupUi(this);
    this->setWindowTitle("Kalkulator kalorii");
}

KALORIE::~KALORIE()
{
    delete ui;
}

void KALORIE::on_OBLICZbutton_clicked()
{
    int waga = ui->WAGAline->text().toInt();
    int czas = ui->CZASline->text().toInt();
    QString plec = ui->KorM->currentText();
    QString cwicz = ui->CWICZtyp->currentText();
    float oblK = (waga*czas*0.9)/15;
    float oblM = (waga*czas*1.1)/15;

    if(plec=="Kobieta"){
        if(cwicz=="Brzuszki"){
            ui->displayKCAL->setText(QString::number(oblK*2));
        }
        else if(cwicz=="Rower stacjonarny"){
            ui->displayKCAL->setText(QString::number(oblK*2.8));
        }
        else if(cwicz=="Pompki"){
            ui->displayKCAL->setText(QString::number(oblK*1.8));
        }
        else if(cwicz=="Przysiady"){
            ui->displayKCAL->setText(QString::number(oblK*2.1));
        }
    }

    else if(plec=="Mężczyzna"){
        if(cwicz=="Brzuszki"){
            ui->displayKCAL->setText(QString::number(oblM*2));
        }
        else if(cwicz=="Rower stacjonarny"){
            ui->displayKCAL->setText(QString::number(oblM*2.8));
        }
        else if(cwicz=="Pompki"){
            ui->displayKCAL->setText(QString::number(oblM*1.8));
        }
        else if(cwicz=="Przysiady"){
            ui->displayKCAL->setText(QString::number(oblM*2.1));
        }
    }

}

