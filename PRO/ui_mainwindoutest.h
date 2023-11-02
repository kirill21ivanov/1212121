/********************************************************************************
** Form generated from reading UI file 'mainwindoutest.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOUTEST_H
#define UI_MAINWINDOUTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindouTest
{
public:
    QWidget *centralwidget;
    QLabel *text;
    QPushButton *but_1;
    QPushButton *but_2;
    QPushButton *but_3;
    QPushButton *but_4;
    QPushButton *but_5;
    QPushButton *but_6;
    QPushButton *but_7;
    QPushButton *but_8;
    QPushButton *but_9;
    QPushButton *but_10;
    QPushButton *but_11;
    QPushButton *but_12;
    QPushButton *but_13;
    QPushButton *but_14;
    QPushButton *but_15;
    QPushButton *but_16;
    QPushButton *but_17;
    QPushButton *but_18;
    QPushButton *but_19;
    QPushButton *but_20;
    QLabel *part_name;
    QLabel *part_group;
    QLabel *text_2;
    QLabel *text_3;
    QLabel *text_4;
    QPushButton *exit;
    QLabel *timer;
    QLabel *win_start;
    QLabel *text_6;
    QLabel *text_7;
    QLabel *text_8;
    QPushButton *awin_1;
    QPushButton *awin_2;
    QPushButton *awin_3;

    void setupUi(QMainWindow *MainWindouTest)
    {
        if (MainWindouTest->objectName().isEmpty())
            MainWindouTest->setObjectName(QString::fromUtf8("MainWindouTest"));
        MainWindouTest->resize(16777193, 16777193);
        QFont font;
        font.setPointSize(1);
        font.setBold(true);
        font.setItalic(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        MainWindouTest->setFont(font);
        MainWindouTest->setToolTipDuration(1);
        MainWindouTest->setAutoFillBackground(false);
        MainWindouTest->setStyleSheet(QString::fromUtf8("background-color:rgb(242, 244, 255)"));
        centralwidget = new QWidget(MainWindouTest);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        text = new QLabel(centralwidget);
        text->setObjectName(QString::fromUtf8("text"));
        text->setGeometry(QRect(780, 20, 351, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font1.setPointSize(14);
        text->setFont(font1);
        text->setAlignment(Qt::AlignCenter);
        but_1 = new QPushButton(centralwidget);
        but_1->setObjectName(QString::fromUtf8("but_1"));
        but_1->setGeometry(QRect(440, 100, 31, 31));
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
        QBrush brush2(QColor(241, 250, 255, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_1->setPalette(palette);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font2.setPointSize(16);
        but_1->setFont(font2);
        but_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        but_2 = new QPushButton(centralwidget);
        but_2->setObjectName(QString::fromUtf8("but_2"));
        but_2->setGeometry(QRect(490, 100, 31, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_2->setPalette(palette1);
        but_2->setFont(font2);
        but_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        but_3 = new QPushButton(centralwidget);
        but_3->setObjectName(QString::fromUtf8("but_3"));
        but_3->setGeometry(QRect(540, 100, 31, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_3->setPalette(palette2);
        but_3->setFont(font2);
        but_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        but_4 = new QPushButton(centralwidget);
        but_4->setObjectName(QString::fromUtf8("but_4"));
        but_4->setGeometry(QRect(590, 100, 31, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_4->setPalette(palette3);
        but_4->setFont(font2);
        but_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        but_5 = new QPushButton(centralwidget);
        but_5->setObjectName(QString::fromUtf8("but_5"));
        but_5->setGeometry(QRect(640, 100, 31, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_5->setPalette(palette4);
        but_5->setFont(font2);
        but_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        but_6 = new QPushButton(centralwidget);
        but_6->setObjectName(QString::fromUtf8("but_6"));
        but_6->setGeometry(QRect(690, 100, 31, 31));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_6->setPalette(palette5);
        but_6->setFont(font2);
        but_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        but_7 = new QPushButton(centralwidget);
        but_7->setObjectName(QString::fromUtf8("but_7"));
        but_7->setGeometry(QRect(740, 100, 31, 31));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_7->setPalette(palette6);
        but_7->setFont(font2);
        but_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        but_8 = new QPushButton(centralwidget);
        but_8->setObjectName(QString::fromUtf8("but_8"));
        but_8->setGeometry(QRect(790, 100, 31, 31));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_8->setPalette(palette7);
        but_8->setFont(font2);
        but_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        but_9 = new QPushButton(centralwidget);
        but_9->setObjectName(QString::fromUtf8("but_9"));
        but_9->setGeometry(QRect(840, 100, 31, 31));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_9->setPalette(palette8);
        but_9->setFont(font2);
        but_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        but_10 = new QPushButton(centralwidget);
        but_10->setObjectName(QString::fromUtf8("but_10"));
        but_10->setGeometry(QRect(890, 100, 31, 31));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_10->setPalette(palette9);
        but_10->setFont(font2);
        but_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        but_11 = new QPushButton(centralwidget);
        but_11->setObjectName(QString::fromUtf8("but_11"));
        but_11->setGeometry(QRect(940, 100, 31, 31));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_11->setPalette(palette10);
        but_11->setFont(font2);
        but_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        but_12 = new QPushButton(centralwidget);
        but_12->setObjectName(QString::fromUtf8("but_12"));
        but_12->setGeometry(QRect(990, 100, 31, 31));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_12->setPalette(palette11);
        but_12->setFont(font2);
        but_12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        but_13 = new QPushButton(centralwidget);
        but_13->setObjectName(QString::fromUtf8("but_13"));
        but_13->setGeometry(QRect(1040, 100, 31, 31));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_13->setPalette(palette12);
        but_13->setFont(font2);
        but_13->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        but_14 = new QPushButton(centralwidget);
        but_14->setObjectName(QString::fromUtf8("but_14"));
        but_14->setGeometry(QRect(1090, 100, 31, 31));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_14->setPalette(palette13);
        but_14->setFont(font2);
        but_14->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        but_15 = new QPushButton(centralwidget);
        but_15->setObjectName(QString::fromUtf8("but_15"));
        but_15->setGeometry(QRect(1140, 100, 31, 31));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_15->setPalette(palette14);
        but_15->setFont(font2);
        but_15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        but_16 = new QPushButton(centralwidget);
        but_16->setObjectName(QString::fromUtf8("but_16"));
        but_16->setGeometry(QRect(1190, 100, 31, 31));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_16->setPalette(palette15);
        but_16->setFont(font2);
        but_16->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        but_17 = new QPushButton(centralwidget);
        but_17->setObjectName(QString::fromUtf8("but_17"));
        but_17->setGeometry(QRect(1240, 100, 31, 31));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_17->setPalette(palette16);
        but_17->setFont(font2);
        but_17->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        but_18 = new QPushButton(centralwidget);
        but_18->setObjectName(QString::fromUtf8("but_18"));
        but_18->setGeometry(QRect(1290, 100, 31, 31));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_18->setPalette(palette17);
        but_18->setFont(font2);
        but_18->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        but_19 = new QPushButton(centralwidget);
        but_19->setObjectName(QString::fromUtf8("but_19"));
        but_19->setGeometry(QRect(1340, 100, 31, 31));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_19->setPalette(palette18);
        but_19->setFont(font2);
        but_19->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        but_20 = new QPushButton(centralwidget);
        but_20->setObjectName(QString::fromUtf8("but_20"));
        but_20->setGeometry(QRect(1390, 100, 31, 31));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        but_20->setPalette(palette19);
        but_20->setFont(font2);
        but_20->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        part_name = new QLabel(centralwidget);
        part_name->setObjectName(QString::fromUtf8("part_name"));
        part_name->setGeometry(QRect(100, 820, 331, 21));
        part_name->setFont(font1);
        part_name->setStyleSheet(QString::fromUtf8("\n"
"color:rgb(0, 0, 0)"));
        part_name->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        part_group = new QLabel(centralwidget);
        part_group->setObjectName(QString::fromUtf8("part_group"));
        part_group->setGeometry(QRect(180, 790, 161, 21));
        part_group->setFont(font1);
        part_group->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));
        part_group->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        text_2 = new QLabel(centralwidget);
        text_2->setObjectName(QString::fromUtf8("text_2"));
        text_2->setGeometry(QRect(10, 790, 151, 20));
        text_2->setFont(font1);
        text_2->setAlignment(Qt::AlignCenter);
        text_3 = new QLabel(centralwidget);
        text_3->setObjectName(QString::fromUtf8("text_3"));
        text_3->setGeometry(QRect(20, 820, 61, 20));
        text_3->setFont(font1);
        text_3->setAlignment(Qt::AlignCenter);
        text_4 = new QLabel(centralwidget);
        text_4->setObjectName(QString::fromUtf8("text_4"));
        text_4->setGeometry(QRect(10, 850, 101, 20));
        text_4->setFont(font1);
        text_4->setAlignment(Qt::AlignCenter);
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(820, 750, 261, 31));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        exit->setPalette(palette20);
        exit->setFont(font2);
        exit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        timer = new QLabel(centralwidget);
        timer->setObjectName(QString::fromUtf8("timer"));
        timer->setGeometry(QRect(120, 850, 71, 21));
        timer->setFont(font1);
        timer->setAlignment(Qt::AlignCenter);
        win_start = new QLabel(centralwidget);
        win_start->setObjectName(QString::fromUtf8("win_start"));
        win_start->setGeometry(QRect(480, 180, 961, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font3.setPointSize(14);
        font3.setBold(true);
        win_start->setFont(font3);
        win_start->setAlignment(Qt::AlignCenter);
        text_6 = new QLabel(centralwidget);
        text_6->setObjectName(QString::fromUtf8("text_6"));
        text_6->setGeometry(QRect(940, 230, 31, 20));
        text_6->setFont(font1);
        text_6->setAlignment(Qt::AlignCenter);
        text_7 = new QLabel(centralwidget);
        text_7->setObjectName(QString::fromUtf8("text_7"));
        text_7->setGeometry(QRect(940, 320, 31, 20));
        text_7->setFont(font1);
        text_7->setAlignment(Qt::AlignCenter);
        text_8 = new QLabel(centralwidget);
        text_8->setObjectName(QString::fromUtf8("text_8"));
        text_8->setGeometry(QRect(940, 410, 31, 20));
        text_8->setFont(font1);
        text_8->setAlignment(Qt::AlignCenter);
        awin_1 = new QPushButton(centralwidget);
        awin_1->setObjectName(QString::fromUtf8("awin_1"));
        awin_1->setEnabled(true);
        awin_1->setGeometry(QRect(440, 260, 981, 41));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette21.setBrush(QPalette::Active, QPalette::Text, brush);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        awin_1->setPalette(palette21);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font4.setPointSize(13);
        font4.setStrikeOut(false);
        font4.setKerning(false);
        font4.setStyleStrategy(QFont::PreferAntialias);
        awin_1->setFont(font4);
        awin_1->setCursor(QCursor(Qt::ArrowCursor));
        awin_1->setMouseTracking(false);
        awin_1->setFocusPolicy(Qt::WheelFocus);
        awin_1->setContextMenuPolicy(Qt::NoContextMenu);
        awin_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        awin_1->setIconSize(QSize(10, 5));
        awin_2 = new QPushButton(centralwidget);
        awin_2->setObjectName(QString::fromUtf8("awin_2"));
        awin_2->setGeometry(QRect(440, 350, 981, 41));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        awin_2->setPalette(palette22);
        awin_2->setFont(font1);
        awin_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        awin_3 = new QPushButton(centralwidget);
        awin_3->setObjectName(QString::fromUtf8("awin_3"));
        awin_3->setGeometry(QRect(440, 440, 981, 41));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette23.setBrush(QPalette::Active, QPalette::Text, brush);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        awin_3->setPalette(palette23);
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font5.setPointSize(13);
        awin_3->setFont(font5);
        awin_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(15, 160, 190);\n"
"color: rgb(241, 250, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(37, 135, 200);\n"
"}"));
        MainWindouTest->setCentralWidget(centralwidget);

        retranslateUi(MainWindouTest);

        QMetaObject::connectSlotsByName(MainWindouTest);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindouTest)
    {
        MainWindouTest->setWindowTitle(QCoreApplication::translate("MainWindouTest", "MainWindow", nullptr));
        text->setText(QCoreApplication::translate("MainWindouTest", "\320\242\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        but_1->setText(QCoreApplication::translate("MainWindouTest", "1", nullptr));
        but_2->setText(QCoreApplication::translate("MainWindouTest", "2", nullptr));
        but_3->setText(QCoreApplication::translate("MainWindouTest", "3", nullptr));
        but_4->setText(QCoreApplication::translate("MainWindouTest", "4", nullptr));
        but_5->setText(QCoreApplication::translate("MainWindouTest", "5", nullptr));
        but_6->setText(QCoreApplication::translate("MainWindouTest", "6", nullptr));
        but_7->setText(QCoreApplication::translate("MainWindouTest", "7", nullptr));
        but_8->setText(QCoreApplication::translate("MainWindouTest", "8", nullptr));
        but_9->setText(QCoreApplication::translate("MainWindouTest", "9", nullptr));
        but_10->setText(QCoreApplication::translate("MainWindouTest", "10", nullptr));
        but_11->setText(QCoreApplication::translate("MainWindouTest", "11", nullptr));
        but_12->setText(QCoreApplication::translate("MainWindouTest", "12", nullptr));
        but_13->setText(QCoreApplication::translate("MainWindouTest", "13", nullptr));
        but_14->setText(QCoreApplication::translate("MainWindouTest", "14", nullptr));
        but_15->setText(QCoreApplication::translate("MainWindouTest", "15", nullptr));
        but_16->setText(QCoreApplication::translate("MainWindouTest", "16", nullptr));
        but_17->setText(QCoreApplication::translate("MainWindouTest", "17", nullptr));
        but_18->setText(QCoreApplication::translate("MainWindouTest", "18", nullptr));
        but_19->setText(QCoreApplication::translate("MainWindouTest", "19", nullptr));
        but_20->setText(QCoreApplication::translate("MainWindouTest", "20", nullptr));
        part_name->setText(QCoreApplication::translate("MainWindouTest", "<html><head/><body><p align=\"center\">.</p></body></html>", nullptr));
        part_group->setText(QCoreApplication::translate("MainWindouTest", "<html><head/><body><p align=\"center\">.</p></body></html>", nullptr));
        text_2->setText(QCoreApplication::translate("MainWindouTest", "\320\235\320\276\320\274\320\265\321\200 \320\223\321\200\321\203\320\277\320\277\321\213:", nullptr));
        text_3->setText(QCoreApplication::translate("MainWindouTest", "\320\244\320\230\320\236:", nullptr));
        text_4->setText(QCoreApplication::translate("MainWindouTest", "\320\222\321\200\320\265\320\274\321\217:", nullptr));
        exit->setText(QCoreApplication::translate("MainWindouTest", "\320\227\320\260\320\272\320\276\320\275\321\207\320\270\321\202\321\214 \321\202\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        timer->setText(QCoreApplication::translate("MainWindouTest", "0:00", nullptr));
#if QT_CONFIG(whatsthis)
        win_start->setWhatsThis(QCoreApplication::translate("MainWindouTest", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        win_start->setText(QCoreApplication::translate("MainWindouTest", "\320\222\320\260\320\274 \320\275\321\203\320\266\320\275\320\276 \320\262\321\213\320\261\321\200\320\260\321\202\321\214 \320\262\320\276\320\277\321\200\320\276\321\201:", nullptr));
        text_6->setText(QCoreApplication::translate("MainWindouTest", "1.", nullptr));
        text_7->setText(QCoreApplication::translate("MainWindouTest", "2.", nullptr));
        text_8->setText(QCoreApplication::translate("MainWindouTest", "3.", nullptr));
        awin_1->setText(QCoreApplication::translate("MainWindouTest", "\320\222\320\260\321\200\320\270\320\260\320\275\321\202\321\213 \320\276\321\202\320\262\320\265\321\202\320\276\320\262", nullptr));
        awin_2->setText(QCoreApplication::translate("MainWindouTest", "\320\222\320\260\321\200\320\270\320\260\320\275\321\202\321\213 \320\276\321\202\320\262\320\265\321\202\320\276\320\262", nullptr));
        awin_3->setText(QCoreApplication::translate("MainWindouTest", "\320\222\320\260\321\200\320\270\320\260\320\275\321\202\321\213 \320\276\321\202\320\262\320\265\321\202\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindouTest: public Ui_MainWindouTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOUTEST_H
