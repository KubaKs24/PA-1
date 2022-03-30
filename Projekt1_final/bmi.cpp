#include "bmi.h"
#include "ui_bmi.h"
//#include <ctype.h>

BMI::BMI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BMI)
{
    ui->setupUi(this);
    ui->displayBMI->setText("0.0");
    this->setWindowTitle("BMI");

}

BMI::~BMI()
{
    delete ui;
}

void BMI::on_liczBMI_clicked()
{
    //if (isdigit())
    double waga = ui->WAGAline->text().toDouble();
    int wzrost = ui->WZROSTline->text().toInt();
    double bmi=waga/(wzrost*wzrost)*10000;
    ui->displayBMI->setText(QString::number(bmi));

    QString plec= ui->KorM->currentText();

    if(plec == "Kobieta"){
        ui->displayINFO->setText("Skala BMI dla kobiet\nBMI<18.5 - niedowaga\n18.5>BMI<24.9 - zdrowa waga\n25.0>BMI<29.9 - nadwaga\nBMI>30.0 - otyłość");
    }
    else{
        ui->displayINFO->setText("Skala BMI dla mężczyzn\nBMI<18.5 - niedowaga\n18.5>BMI<24.9 - zdrowa waga\n25.0>BMI<29.9 - nadwaga\nBMI>30.0 - otyłość");
    }
}

