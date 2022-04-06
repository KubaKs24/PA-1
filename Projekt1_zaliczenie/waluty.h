#ifndef WALUTY_H
#define WALUTY_H

#include <QDialog>

namespace Ui {
class WALUTY;
}

class WALUTY : public QDialog
{
    Q_OBJECT

public:
    explicit WALUTY(QWidget *parent = nullptr);
    ~WALUTY();

private slots:
    void on_OBLICZbutton_clicked();

private:
    Ui::WALUTY *ui;
};

#endif // WALUTY_H
