#include "mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QPixmap>
#include <QPalette>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.setWindowTitle("Казанский Государственный Аграрный Университет");
    w.setWindowIcon(QIcon(":/img/icon.png"));
    QPixmap backgroundImage(":/ic/img/imgonline-com-ua-Resize-ltXfteYJeXYUVqcw.jpg");
    QPalette palette;
    palette.setBrush(QPalette::Window, backgroundImage);
    w.setPalette(palette);
    w.setFixedSize(830, 505);
    w.show();

    return a.exec();
}
