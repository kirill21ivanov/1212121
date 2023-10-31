#ifndef MAINWINDOWFIN_H
#define MAINWINDOWFIN_H

#include <QMainWindow>
#include <algorithm>
#include <random>
#include <QTimer>
#include <QTime>
#include <QList>
#include <iostream>
#include <QPushButton>

namespace Ui {
    class MainWindowFin;
}

class MainWindowFin : public QMainWindow {
    Q_OBJECT
public:
    explicit MainWindowFin(const QString &name, const QString &group,const int &userScore, QWidget *parent = nullptr);
    ~MainWindowFin();

private:
    Ui::MainWindowFin *ui;
};

#endif // MAINWINDOWFIN_H
