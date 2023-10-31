#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->but_start->setDisabled(true);
    connect(ui->name, &QLineEdit::textChanged, this, &MainWindow::checkFields);
    connect(ui->group, &QLineEdit::textChanged, this, &MainWindow::checkFields);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_but_start_clicked()
{
    QString name = ui->name->text();
    QString group = ui->group->text();
    qDebug() << "Студент: " << name << "Группа: " << group;
    this->hide(); // скрыть регистрацию
    test = new MainWindouTest(name, group);
    test->showFullScreen(); // полный экрран
//    test->show();
}

void MainWindow::checkFields() {
    QString nameText = ui->name->text();
    QString groupText = ui->group->text();
    bool fieldsFilled = !nameText.isEmpty() && !groupText.isEmpty();
    ui->but_start->setEnabled(fieldsFilled);
}
