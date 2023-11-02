#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_but_start_clicked()
{
QString name = ui->name->text();
QString group = ui->group->text();
if (name == "" && group == ""){
this->ui->text_error->setText("Вы сможете начать тестирование после того как заполните поля!");
}else{
    this->hide();
    test = new MainWindouTest(name, group);
    test->setStyleSheet("background-image: url(:/icon.png); background-repeat: no-repeat; background-position: center;");
    test->showFullScreen();
}
}
