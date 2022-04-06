#ifndef ZAD_H
#define ZAD_H

#include <QDialog>

namespace Ui {
class zad;
}

class zad : public QDialog
{
    Q_OBJECT

public:
    explicit zad(QWidget *parent = nullptr);
    ~zad();

private slots:
    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::zad *ui;
};

#endif // ZAD_H
