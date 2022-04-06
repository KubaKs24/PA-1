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
            QString wynik_str = QString::number(wynik);
            wynik_str.append(" EUR");
            ui->displayWALUTA->setText(wynik_str);
        }
        else if(c=="PLN"){
            wynik=a*4.68;
            QString wynik_str = QString::number(wynik);
            wynik_str.append(" PLN");
            ui->displayWALUTA->setText(wynik_str);
        }
        else if(c=="HRYWNA"){
            wynik=a/0.031;
            QString wynik_str = QString::number(wynik);
            wynik_str.append(" UAH");
            ui->displayWALUTA->setText(wynik_str);
        }
        else if(c=="RUBEL"){
            wynik=a/0.0088;
            QString wynik_str = QString::number(wynik);
            wynik_str.append(" RUB");
            ui->displayWALUTA->setText(wynik_str);
        }
    }
    else if(b=="PLN"){
        if(c=="EURO"){
            wynik=a/4.68;
            QString wynik_str = QString::number(wynik);
            wynik_str.append(" EUR");
            ui->displayWALUTA->setText(wynik_str);
        }
        else if(c=="PLN"){
            wynik=a;
            QString wynik_str = QString::number(wynik);
            wynik_str.append(" PLN");
            ui->displayWALUTA->setText(wynik_str);
        }
        else if(c=="HRYWNA"){
            wynik=a*6.90;
            QString wynik_str = QString::number(wynik);
            wynik_str.append(" UAH");
            ui->displayWALUTA->setText(wynik_str);
        }
        else if(c=="RUBEL"){
            wynik=a*24.40;
            QString wynik_str = QString::number(wynik);
            wynik_str.append(" RUB");
            ui->displayWALUTA->setText(wynik_str);
        }
    }
    else if(b=="HRYWNA"){
        if(c=="EURO"){
            wynik=a*0.031;
            QString wynik_str = QString::number(wynik);
            wynik_str.append(" EUR");
            ui->displayWALUTA->setText(wynik_str);
        }
        else if(c=="PLN"){
            wynik=a*0.14;
            QString wynik_str = QString::number(wynik);
            wynik_str.append(" PLN");
            ui->displayWALUTA->setText(wynik_str);
        }
        else if(c=="HRYWNA"){
            wynik=a;
            QString wynik_str = QString::number(wynik);
            wynik_str.append(" UAH");
            ui->displayWALUTA->setText(wynik_str);
        }
        else if(c=="RUBEL"){
            wynik=a*3.53;
            QString wynik_str = QString::number(wynik);
            wynik_str.append(" RUB");
            ui->displayWALUTA->setText(wynik_str);
        }
    }
    else if(b=="RUBEL"){
        if(c=="EURO"){
            wynik=a*0.0088;
            QString wynik_str = QString::number(wynik);
            wynik_str.append(" EUR");
            ui->displayWALUTA->setText(wynik_str);
        }
        else if(c=="PLN"){
            wynik=a*0.041;
            QString wynik_str = QString::number(wynik);
            wynik_str.append(" PLN");
            ui->displayWALUTA->setText(wynik_str);
        }
        else if(c=="HRYWNA"){
            wynik=a/0.28;
            QString wynik_str = QString::number(wynik);
            wynik_str.append(" UAH");
            ui->displayWALUTA->setText(wynik_str);
        }
        else if(c=="RUBEL"){
            wynik=a;
            QString wynik_str = QString::number(wynik);
            wynik_str.append(" RUB");
            ui->displayWALUTA->setText(wynik_str);
        }
    }
}

