#ifndef MAINWINDOUTEST_H
#define MAINWINDOUTEST_H

#include <QMainWindow>
#include <algorithm>
#include <random>
#include <QTimer>
#include <QTime>
#include <QList>
#include <iostream>
#include <QPushButton>
#include "mainwindowfin.h"

namespace Ui {
    class MainWindouTest;
}

class MainWindouTest : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindouTest(const QString &name, const QString &group, QWidget *parent = nullptr);
    ~MainWindouTest();
    int userScore = 0;
    QTimer *timer;
    QTime timeRemaining;
    MainWindowFin *a;
    QString names;
    QString groups;
    bool question1Answered = false;
    bool question2Answered = false;
    bool question3Answered = false;
    bool question4Answered = false;
    bool question5Answered = false;
    bool question6Answered = false;
    bool question7Answered = false;
    bool question8Answered = false;
    bool question9Answered = false;
    bool question10Answered = false;
    bool question11Answered = false;
    bool question12Answered = false;
    bool question13Answered = false;
    bool question14Answered = false;
    bool question15Answered = false;
    bool question16Answered = false;
    bool question17Answered = false;
    bool question18Answered = false;
    bool question19Answered = false;
    bool question20Answered = false;
    bool question1 = false;
    bool question2 = false;
    bool question3 = false;
    bool question4 = false;
    bool question5 = false;
    bool question6 = false;
    bool question7 = false;
    bool question8 = false;
    bool question9 = false;
    bool question10 = false;
    bool question11 = false;
    bool question12 = false;
    bool question13 = false;
    bool question14 = false;
    bool question15 = false;
    bool question16 = false;
    bool question17 = false;
    bool question18 = false;
    bool question19 = false;
    bool question20 = false;
public slots:
    void updateTimerDisplay();
    void on_but_1_clicked();
    void on_but_2_clicked();
    void on_but_3_clicked();
    void on_but_4_clicked();
    void on_but_5_clicked();
    void on_but_6_clicked();
    void on_but_7_clicked();
    void on_but_8_clicked();
    void on_but_9_clicked();
    void on_but_10_clicked();
    void on_but_11_clicked();
    void on_but_12_clicked();
    void on_but_13_clicked();
    void on_but_14_clicked();
    void on_but_15_clicked();
    void on_but_16_clicked();
    void on_but_17_clicked();
    void on_but_18_clicked();
    void on_but_19_clicked();
    void on_but_20_clicked();
    void checkAnswer();
    void on_exit_clicked();
    void shuffleOptions(QString &option1, QString &option2, QString &option3);

private slots:

private:
    QString correctAnswer;
    bool questionAnswered;
    QPushButton *selectedButton;

private:
    Ui::MainWindouTest *ui;
};

#endif // MAINWINDOUTEST_H
