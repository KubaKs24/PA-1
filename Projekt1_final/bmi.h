#ifndef BMI_H
#define BMI_H

#include <QDialog>

namespace Ui {
class BMI;
}

class BMI : public QDialog
{
    Q_OBJECT

public:
    explicit BMI(QWidget *parent = nullptr);
    ~BMI();

private:
    Ui::BMI *ui;

private slots:
    void on_liczBMI_clicked();
};

#endif // BMI_H
