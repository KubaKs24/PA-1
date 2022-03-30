#ifndef KALORIE_H
#define KALORIE_H

#include <QDialog>

namespace Ui {
class KALORIE;
}

class KALORIE : public QDialog
{
    Q_OBJECT

public:
    explicit KALORIE(QWidget *parent = nullptr);
    ~KALORIE();

private slots:
    void on_OBLICZbutton_clicked();

private:
    Ui::KALORIE *ui;
};

#endif // KALORIE_H
