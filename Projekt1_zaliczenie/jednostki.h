#ifndef JEDNOSTKI_H
#define JEDNOSTKI_H

#include <QDialog>

namespace Ui {
class JEDNOSTKI;
}

class JEDNOSTKI : public QDialog
{
    Q_OBJECT

public:
    explicit JEDNOSTKI(QWidget *parent = nullptr);
    ~JEDNOSTKI();

private slots:
    void on_typ_BOX_currentTextChanged(const QString &arg1);

    void on_pierwsza_BOX_currentTextChanged(const QString &arg1);

    void on_OBLICZ_clicked();

private:
    Ui::JEDNOSTKI *ui;
};

#endif // JEDNOSTKI_H
