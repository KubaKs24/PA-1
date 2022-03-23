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

private:
    Ui::JEDNOSTKI *ui;
};

#endif // JEDNOSTKI_H
