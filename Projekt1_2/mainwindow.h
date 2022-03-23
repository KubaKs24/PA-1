#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_BMIbutton_clicked();

    void on_JEDNOSKIbutton_clicked();

    void on_WALUTYbutton_clicked();

    void on_KCALbutton_clicked();

    void on_AUTObutton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
