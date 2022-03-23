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



void WALUTY::on_OBLICZbutton_clicked()
{
    float a = ui->POSIADANAline->text().toFloat();
    QString b = ui->POSIADANA->currentText();
    QString c = ui->DOCELOWA->currentText();
    float wynik;

    if(b=="EURO"){
        if(c=="EURO"){
            wynik=a;
            ui->displayWALUTA->setText(QString::number(wynik));
        }
        else if(c=="PLN"){
            wynik=a*4.68;
            ui->displayWALUTA->setText(QString::number(wynik));
        }
        else if(c=="HRYWNA"){
            wynik=a/0.031;
            ui->displayWALUTA->setText(QString::number(wynik));
        }
        else if(c=="RUBEL"){
            wynik=a/0.0088;
            ui->displayWALUTA->setText(QString::number(wynik));
        }
    }
    else if(b=="PLN"){
        if(c=="EURO"){
            wynik=a/4.68;
            ui->displayWALUTA->setText(QString::number(wynik));
        }
        else if(c=="PLN"){
            wynik=a;
            ui->displayWALUTA->setText(QString::number(wynik));
        }
        else if(c=="HRYWNA"){
            wynik=a*6.90;
            ui->displayWALUTA->setText(QString::number(wynik));
        }
        else if(c=="RUBEL"){
            wynik=a*24.40;
            ui->displayWALUTA->setText(QString::number(wynik));
        }
    }
    else if(b=="HRYWNA"){
        if(c=="EURO"){
            wynik=a*0.031;
            ui->displayWALUTA->setText(QString::number(wynik));
        }
        else if(c=="PLN"){
            wynik=a*0.14;
            ui->displayWALUTA->setText(QString::number(wynik));
        }
        else if(c=="HRYWNA"){
            wynik=a;
            ui->displayWALUTA->setText(QString::number(wynik));
        }
        else if(c=="RUBEL"){
            wynik=a*3.53;
            ui->displayWALUTA->setText(QString::number(wynik));
        }
    }
    else if(b=="RUBEL"){
        if(c=="EURO"){
            wynik=a*0.0088;
            ui->displayWALUTA->setText(QString::number(wynik));
        }
        else if(c=="PLN"){
            wynik=a*0.041;
            ui->displayWALUTA->setText(QString::number(wynik));
        }
        else if(c=="HRYWNA"){
            wynik=a/0.28;
            ui->displayWALUTA->setText(QString::number(wynik));
        }
        else if(c=="RUBEL"){
            wynik=a;
            ui->displayWALUTA->setText(QString::number(wynik));
        }
    }
}

