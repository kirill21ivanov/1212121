/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *text1;
    QLabel *one2;
    QLabel *one;
    QPushButton *admin;
    QLabel *text;
    QLineEdit *name;
    QLabel *text_1;
    QLabel *text_2;
    QLineEdit *group;
    QPushButton *but_start;
    QLabel *text_3;
    QLabel *text1_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(830, 505);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(43, 43, 44);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        text1 = new QLabel(centralwidget);
        text1->setObjectName(QString::fromUtf8("text1"));
        text1->setGeometry(QRect(150, 0, 571, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font.setPointSize(25);
        text1->setFont(font);
        text1->setAlignment(Qt::AlignCenter);
        one2 = new QLabel(centralwidget);
        one2->setObjectName(QString::fromUtf8("one2"));
        one2->setGeometry(QRect(1550, 780, 21, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font1.setPointSize(13);
        one2->setFont(font1);
        one2->setAlignment(Qt::AlignCenter);
        one = new QLabel(centralwidget);
        one->setObjectName(QString::fromUtf8("one"));
        one->setGeometry(QRect(1550, 710, 21, 21));
        one->setFont(font1);
        one->setAlignment(Qt::AlignCenter);
        admin = new QPushButton(centralwidget);
        admin->setObjectName(QString::fromUtf8("admin"));
        admin->setGeometry(QRect(770, 460, 41, 32));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font2.setPointSize(16);
        admin->setFont(font2);
        admin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255, 76, 70);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: rgb(232, 111, 110);\n"
"}"));
        text = new QLabel(centralwidget);
        text->setObjectName(QString::fromUtf8("text"));
        text->setGeometry(QRect(250, 90, 351, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font3.setPointSize(14);
        text->setFont(font3);
        text->setAlignment(Qt::AlignCenter);
        name = new QLineEdit(centralwidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(310, 150, 221, 21));
        text_1 = new QLabel(centralwidget);
        text_1->setObjectName(QString::fromUtf8("text_1"));
        text_1->setGeometry(QRect(400, 120, 41, 20));
        text_1->setFont(font3);
        text_1->setAlignment(Qt::AlignCenter);
        text_2 = new QLabel(centralwidget);
        text_2->setObjectName(QString::fromUtf8("text_2"));
        text_2->setGeometry(QRect(400, 180, 41, 20));
        text_2->setFont(font3);
        text_2->setAlignment(Qt::AlignCenter);
        group = new QLineEdit(centralwidget);
        group->setObjectName(QString::fromUtf8("group"));
        group->setGeometry(QRect(310, 210, 221, 21));
        but_start = new QPushButton(centralwidget);
        but_start->setObjectName(QString::fromUtf8("but_start"));
        but_start->setGeometry(QRect(330, 270, 181, 41));
        QPalette palette;
        QBrush brush(QColor(241, 250, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(15, 160, 190, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        but_start->setPalette(palette);
        but_start->setFont(font2);
        but_start->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        text_3 = new QLabel(centralwidget);
        text_3->setObjectName(QString::fromUtf8("text_3"));
        text_3->setGeometry(QRect(-20, 480, 491, 20));
        text_3->setFont(font3);
        text_3->setAlignment(Qt::AlignCenter);
        text1_2 = new QLabel(centralwidget);
        text1_2->setObjectName(QString::fromUtf8("text1_2"));
        text1_2->setGeometry(QRect(290, 50, 251, 20));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font4.setPointSize(18);
        text1_2->setFont(font4);
        text1_2->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        text1->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\276\321\207\320\275\320\276\320\265 \321\202\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\277\320\276 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\202\320\270\320\272\320\265 ", nullptr));
        one2->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        admin->setText(QCoreApplication::translate("MainWindow", "\320\220", nullptr));
        text->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \320\264\320\273\321\217 \321\202\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        text_1->setText(QCoreApplication::translate("MainWindow", "\320\244\320\230\320\236", nullptr));
        text_2->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        but_start->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \321\202\320\265\321\201\321\202", nullptr));
        text_3->setText(QCoreApplication::translate("MainWindow", "*\320\262\320\260\320\274 \320\275\321\203\320\266\320\275\320\276 \320\267\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \320\262\321\201\320\265 \320\277\321\200\320\260\320\262\320\270\320\273\321\214\320\275\320\276, \320\270\320\275\320\260\321\207\320\265 \321\202\320\265\321\201\321\202 \320\261\321\203\320\264\320\265\321\202 \320\277\321\200\320\276\320\262\320\260\320\273\320\265\320\275", nullptr));
        text1_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265 Word", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
