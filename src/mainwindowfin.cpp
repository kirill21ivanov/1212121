#include "mainwindowfin.h"
#include "ui_mainwindowfin.h"

MainWindowFin::MainWindowFin(const QString &name, const QString &group, const int &userScore, QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindowFin)
{
    ui->setupUi(this);

    QString scoreString = QString::number(userScore);
    this->ui->part_kol->setText(scoreString);
    this->ui->part_name->setText(name);
    this->ui->part_groups->setText(group);

    int kol = 2; // Initialize the 'kol' variable
    int prog = 0; // Initialize the 'prog' variable

    if (userScore > 18) {
        kol = 5;
    } else if (userScore > 14) {
        kol = 4;
    } else if (userScore > 10) {
        kol = 3;
    }

    // Calculate the 'prog' percentage
    prog = (userScore * 100) / 20;

    // You can display these values in your UI if needed
    QString kolString = QString::number(kol);
    this->ui->part_ov->setText(kolString);

    QString progString = QString::number(prog);
    this->ui->part_prog->setText(progString + "%");
}
MainWindowFin::~MainWindowFin()
{
    delete ui;
}
