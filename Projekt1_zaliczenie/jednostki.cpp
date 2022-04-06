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

void JEDNOSTKI::on_typ_BOX_currentTextChanged(const QString &arg1)
{
    if(arg1=="Masa"){
        ui->pierwsza_BOX->clear();
        ui->druga_BOX->clear();

        ui->pierwsza_BOX->addItem("mg");
        ui->pierwsza_BOX->addItem("g");
        ui->pierwsza_BOX->addItem("dag");
        ui->pierwsza_BOX->addItem("kg");

        ui->druga_BOX->addItem("mg");
        ui->druga_BOX->addItem("g");
        ui->druga_BOX->addItem("dag");
        ui->druga_BOX->addItem("kg");
    }
    else if(arg1=="Czas"){
        ui->pierwsza_BOX->clear();
        ui->druga_BOX->clear();

        ui->pierwsza_BOX->addItem("ms");
        ui->pierwsza_BOX->addItem("s");
        ui->pierwsza_BOX->addItem("h");
        ui->pierwsza_BOX->addItem("doba");

        ui->druga_BOX->addItem("ms");
        ui->druga_BOX->addItem("s");
        ui->druga_BOX->addItem("h");
        ui->druga_BOX->addItem("doba");
    }
    else if(arg1=="Długość"){
        ui->pierwsza_BOX->clear();
        ui->druga_BOX->clear();

        ui->pierwsza_BOX->addItem("mm");
        ui->pierwsza_BOX->addItem("cm");
        ui->pierwsza_BOX->addItem("dm");
        ui->pierwsza_BOX->addItem("m");
        ui->pierwsza_BOX->addItem("km");

        ui->pierwsza_BOX->addItem("mm^2");
        ui->pierwsza_BOX->addItem("cm^2");
        ui->pierwsza_BOX->addItem("dm^2");
        ui->pierwsza_BOX->addItem("m^2");
        ui->pierwsza_BOX->addItem("km^2");

        ui->pierwsza_BOX->addItem("mm^3");
        ui->pierwsza_BOX->addItem("cm^3");
        ui->pierwsza_BOX->addItem("dm^3");
        ui->pierwsza_BOX->addItem("m^3");
        ui->pierwsza_BOX->addItem("km^3");

    }
    else{
        ui->pierwsza_BOX->clear();
        ui->druga_BOX->clear();
    }
}


void JEDNOSTKI::on_pierwsza_BOX_currentTextChanged(const QString &arg1)
{
    if(arg1=="mm" or arg1=="cm" or arg1=="dm" or arg1=="m" or arg1=="km"){
        ui->druga_BOX->clear();
        ui->druga_BOX->addItem("mm");
        ui->druga_BOX->addItem("cm");
        ui->druga_BOX->addItem("dm");
        ui->druga_BOX->addItem("m");
        ui->druga_BOX->addItem("km");
    }
    else if(arg1=="mm^2" or arg1=="cm^2" or arg1=="dm^2" or arg1=="m^2" or arg1=="km^2"){
        ui->druga_BOX->clear();

        ui->druga_BOX->addItem("mm^2");
        ui->druga_BOX->addItem("cm^2");
        ui->druga_BOX->addItem("dm^2");
        ui->druga_BOX->addItem("m^2");
        ui->druga_BOX->addItem("km^2");
    }
    else if(arg1=="mm^3" or arg1=="cm^3" or arg1=="dm^3" or arg1=="m^3" or arg1=="km^3"){
        ui->druga_BOX->clear();

        ui->druga_BOX->addItem("mm^3");
        ui->druga_BOX->addItem("cm^3");
        ui->druga_BOX->addItem("dm^3");
        ui->druga_BOX->addItem("m^3");
        ui->druga_BOX->addItem("km^3");
    }
}


void JEDNOSTKI::on_OBLICZ_clicked()
{
    QString typ = ui->typ_BOX->currentText();
    QString p_box = ui->pierwsza_BOX->currentText();
    QString d_box = ui->druga_BOX->currentText();

    float p = ui->pierwsza_line->text().toFloat();
    float wynik;

    if(typ=="Masa"){
        if(p_box=="mg"){
            if(d_box=="mg"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" mg");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="g"){
                wynik=p/1000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" g");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="dag"){
                wynik=p/10000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" dag");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="kg"){
                wynik=p/1000000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" kg");
                ui->display->setText(wynik_str);
            }
        }
        else if(p_box=="g"){
            if(d_box=="mg"){
                wynik=p*1000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" mg");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="g"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" g");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="dag"){
                wynik=p/10;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" dag");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="kg"){
                wynik=p/1000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" kg");
                ui->display->setText(wynik_str);
            }
        }
        else if(p_box=="dag"){
            if(d_box=="mg"){
                wynik=p*10000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" mg");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="g"){
                wynik=p*10;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" g");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="dag"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" dag");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="kg"){
                wynik=p/100;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" g");
                ui->display->setText(wynik_str);
            }
        }
        else if(p_box=="kg"){
            if(d_box=="mg"){
                wynik=p*1000000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" mg");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="g"){
                wynik=p*1000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" g");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="dag"){
                wynik=p*100;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" dag");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="kg"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" kg");
                ui->display->setText(wynik_str);
            }
        }


    }
    else if(typ=="Czas"){
        if(p_box=="ms"){
            if(d_box=="ms"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" ms");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="s"){
                wynik=p/1000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" s");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="h"){
                wynik=p/3600000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" h");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="doba"){
                wynik=p/86400000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" d");
                ui->display->setText(wynik_str);
            }
        }
        else if(p_box=="s"){
            if(d_box=="ms"){
                wynik=p*1000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" ms");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="s"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" s");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="h"){
                wynik=p/3600;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" h");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="doba"){
                wynik=p/86400;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" d");
                ui->display->setText(wynik_str);
            }
        }
        else if(p_box=="h"){
            if(d_box=="ms"){
                wynik=p*3600000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" ms");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="s"){
                wynik=p*3600;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" s");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="h"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" h");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="doba"){
                wynik=p/24;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" d");
                ui->display->setText(wynik_str);
            }
        }
        else if(p_box=="doba"){
            if(d_box=="ms"){
                wynik=p*86400000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" ms");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="s"){
                wynik=p*86400;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" s");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="h"){
                wynik=p*24;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" h");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="doba"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" d");
                ui->display->setText(wynik_str);
            }
        }

    }
    else if(typ=="Długość"){
        if(p_box=="mm"){
            if(d_box=="mm"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" mm");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="cm"){
                wynik=p/10;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" cm");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="dm"){
                wynik=p/100;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" dm");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="m"){
                wynik=p/1000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" m");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="km"){
                wynik=p/1000000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" km");
                ui->display->setText(wynik_str);
            }

        }
        if(p_box=="cm"){
            if(d_box=="mm"){
                wynik=p*10;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" mm");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="cm"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" cm");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="dm"){
                wynik=p/10;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" dm");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="m"){
                wynik=p/100;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" m");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="km"){
                wynik=p/100000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" km");
                ui->display->setText(wynik_str);
            }

        }
        if(p_box=="dm"){
            if(d_box=="mm"){
                wynik=p*100;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" mm");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="cm"){
                wynik=p*10;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" cm");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="dm"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" dm");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="m"){
                wynik=p/10;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" m");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="km"){
                wynik=p/10000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" km");
                ui->display->setText(wynik_str);
            }

        }
        if(p_box=="m"){
            if(d_box=="mm"){
                wynik=p*1000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" mm");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="cm"){
                wynik=p*100;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" cm");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="dm"){
                wynik=p*10;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" dm");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="m"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" m");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="km"){
                wynik=p/1000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" km");
                ui->display->setText(wynik_str);
            }

        }
        if(p_box=="km"){
            if(d_box=="mm"){
                wynik=p*1000000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" mm");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="cm"){
                wynik=p*100000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" cm");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="dm"){
                wynik=p*10000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" dm");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="m"){
                wynik=p*1000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" m");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="km"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" km");
                ui->display->setText(wynik_str);
            }
        }
        if(p_box=="mm^2"){
            if(d_box=="mm^2"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" mm^2");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="cm^2"){
                wynik=p/100;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" cm^2");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="dm^2"){
                wynik=p/10000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" dm^2");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="m^2"){
                wynik=p/1000000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" m^2");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="km^2"){

                ui->display->setText("Mega mało");
            }

        }
        if(p_box=="cm^2"){
            if(d_box=="mm^2"){
                wynik=p*100;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" mm^2");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="cm^2"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" cm^2");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="dm^2"){
                wynik=p/100;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" dm^2");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="m^2"){
                wynik=p/10000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" m^2");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="km^2"){

                ui->display->setText("Mega mało");
            }

        }
        if(p_box=="dm^2"){
            if(d_box=="mm^2"){
                wynik=p*10000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" mm^2");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="cm^2"){
                wynik=p*100;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" cm^2");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="dm^2"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" dm^2");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="m^2"){
                wynik=p/100;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" m^2");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="km^2"){
                wynik=p/100000000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" km^2");
                ui->display->setText(wynik_str);
            }

        }
        if(p_box=="m^2"){
            if(d_box=="mm^2"){
                wynik=p*1000000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" mm^2");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="cm^2"){
                wynik=p*10000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" cm^2");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="dm^2"){
                wynik=p*100;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" dm^2");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="m^2"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" m^2");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="km^2"){
                wynik=p/1000000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" km^2");
                ui->display->setText(wynik_str);
            }

        }
        if(p_box=="km^2"){
            if(d_box=="mm^2"){

                ui->display->setText("Mega dużo");
            }
            else if(d_box=="cm^2"){

                ui->display->setText("Mega dużo");
            }
            else if(d_box=="dm^2"){
                wynik=p*100000000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" dm^2");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="m^2"){
                wynik=p*1000000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" m^2");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="km^2"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" km^2");
                ui->display->setText(wynik_str);
            }

        }
        if(p_box=="mm^3"){
            if(d_box=="mm^3"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" mm^3");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="cm^3"){
                wynik=p/1000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" cm^3");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="dm^3"){
                wynik=p/1000000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" dm^3");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="m^3"){

                ui->display->setText("Mega mało");
            }
            else if(d_box=="km^3"){

                ui->display->setText("Mega mało");
            }

        }
        if(p_box=="cm^3"){
            if(d_box=="mm^3"){
                wynik=p*1000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" mm^3");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="cm^3"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" cm^3");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="dm^3"){
                wynik=p/1000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" dm^3");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="m^3"){
                wynik=p/1000000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" m^3");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="km^3"){

                ui->display->setText("Mega mało");
            }

        }
        if(p_box=="dm^3"){
            if(d_box=="mm^3"){
                wynik=p*1000000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" mm^3");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="cm^3"){
                wynik=p*1000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" cm^3");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="dm^3"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" dm^3");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="m^3"){
                wynik=p/1000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" m^3");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="km^3"){

                ui->display->setText("Mega mało");
            }

        }
        if(p_box=="m^3"){
            if(d_box=="mm^3"){

                ui->display->setText("Mega dużo");
            }
            else if(d_box=="cm^3"){
                wynik=p*1000000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" cm^3");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="dm^3"){
                wynik=p*1000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" dm^3");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="m^3"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" m^3");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="km^3"){
                wynik=p/1000000000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" km^3");
                ui->display->setText(wynik_str);
            }

        }
        if(p_box=="km^3"){
            if(d_box=="mm^3"){

                ui->display->setText("Mega dużo");
            }
            else if(d_box=="cm^3"){

                ui->display->setText("Mega dużo");
            }
            else if(d_box=="dm^3"){

                ui->display->setText("Mega dużo");
            }
            else if(d_box=="m^3"){
                wynik=p*1000000000;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" m^3");
                ui->display->setText(wynik_str);
            }
            else if(d_box=="km^3"){
                wynik=p;
                QString wynik_str = QString::number(wynik);
                wynik_str.append(" km^3");
                ui->display->setText(wynik_str);
            }

        }
    }
}

