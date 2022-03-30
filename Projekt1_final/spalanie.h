#ifndef SPALANIE_H
#define SPALANIE_H

#include <QDialog>

namespace Ui {
class SPALANIE;
}

class SPALANIE : public QDialog
{
    Q_OBJECT

public:
    explicit SPALANIE(QWidget *parent = nullptr);
    ~SPALANIE();

private slots:
    void on_OBLICZbutton_clicked();

private:
    Ui::SPALANIE *ui;
};

#endif // SPALANIE_H
