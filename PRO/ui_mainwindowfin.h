/********************************************************************************
** Form generated from reading UI file 'mainwindowfin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWFIN_H
#define UI_MAINWINDOWFIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowFin
{
public:
    QWidget *centralwidget;
    QLabel *text;
    QLabel *part_name;
    QLabel *text_2;
    QLabel *text_3;
    QLabel *win_start;
    QLabel *text_4;
    QLabel *part_prog;
    QLabel *text_5;
    QLabel *text_6;
    QLabel *part_ov;
    QLabel *part_groups;
    QLabel *part_kol;

    void setupUi(QMainWindow *MainWindowFin)
    {
        if (MainWindowFin->objectName().isEmpty())
            MainWindowFin->setObjectName(QString::fromUtf8("MainWindowFin"));
        MainWindowFin->resize(16777193, 16777193);
        QFont font;
        font.setPointSize(1);
        font.setBold(true);
        font.setItalic(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        MainWindowFin->setFont(font);
        MainWindowFin->setToolTipDuration(1);
        MainWindowFin->setAutoFillBackground(false);
        MainWindowFin->setStyleSheet(QString::fromUtf8("background-color:rgb(247, 247, 255)"));
        centralwidget = new QWidget(MainWindowFin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        text = new QLabel(centralwidget);
        text->setObjectName(QString::fromUtf8("text"));
        text->setGeometry(QRect(500, 20, 941, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font1.setPointSize(23);
        text->setFont(font1);
        text->setAlignment(Qt::AlignCenter);
        part_name = new QLabel(centralwidget);
        part_name->setObjectName(QString::fromUtf8("part_name"));
        part_name->setGeometry(QRect(870, 230, 141, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font2.setPointSize(22);
        part_name->setFont(font2);
        part_name->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));
        part_name->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        text_2 = new QLabel(centralwidget);
        text_2->setObjectName(QString::fromUtf8("text_2"));
        text_2->setGeometry(QRect(670, 159, 221, 31));
        text_2->setFont(font2);
        text_2->setAlignment(Qt::AlignCenter);
        text_3 = new QLabel(centralwidget);
        text_3->setObjectName(QString::fromUtf8("text_3"));
        text_3->setGeometry(QRect(760, 229, 101, 31));
        text_3->setFont(font2);
        text_3->setAlignment(Qt::AlignCenter);
        win_start = new QLabel(centralwidget);
        win_start->setObjectName(QString::fromUtf8("win_start"));
        win_start->setGeometry(QRect(480, 50, 961, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font3.setPointSize(14);
        font3.setBold(true);
        win_start->setFont(font3);
        win_start->setAlignment(Qt::AlignCenter);
        text_4 = new QLabel(centralwidget);
        text_4->setObjectName(QString::fromUtf8("text_4"));
        text_4->setGeometry(QRect(630, 310, 301, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font4.setPointSize(14);
        text_4->setFont(font4);
        text_4->setAlignment(Qt::AlignCenter);
        part_prog = new QLabel(centralwidget);
        part_prog->setObjectName(QString::fromUtf8("part_prog"));
        part_prog->setGeometry(QRect(930, 390, 151, 41));
        part_prog->setFont(font2);
        part_prog->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));
        part_prog->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        text_5 = new QLabel(centralwidget);
        text_5->setObjectName(QString::fromUtf8("text_5"));
        text_5->setGeometry(QRect(690, 390, 231, 41));
        text_5->setFont(font4);
        text_5->setAlignment(Qt::AlignCenter);
        text_6 = new QLabel(centralwidget);
        text_6->setObjectName(QString::fromUtf8("text_6"));
        text_6->setGeometry(QRect(710, 480, 231, 41));
        text_6->setFont(font4);
        text_6->setAlignment(Qt::AlignCenter);
        part_ov = new QLabel(centralwidget);
        part_ov->setObjectName(QString::fromUtf8("part_ov"));
        part_ov->setGeometry(QRect(960, 480, 131, 41));
        part_ov->setFont(font2);
        part_ov->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)\n"
""));
        part_ov->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        part_groups = new QLabel(centralwidget);
        part_groups->setObjectName(QString::fromUtf8("part_groups"));
        part_groups->setGeometry(QRect(920, 160, 221, 31));
        part_groups->setFont(font2);
        part_groups->setAlignment(Qt::AlignCenter);
        part_kol = new QLabel(centralwidget);
        part_kol->setObjectName(QString::fromUtf8("part_kol"));
        part_kol->setGeometry(QRect(950, 310, 231, 41));
        part_kol->setFont(font2);
        part_kol->setAlignment(Qt::AlignCenter);
        MainWindowFin->setCentralWidget(centralwidget);

        retranslateUi(MainWindowFin);

        QMetaObject::connectSlotsByName(MainWindowFin);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowFin)
    {
        MainWindowFin->setWindowTitle(QCoreApplication::translate("MainWindowFin", "MainWindow", nullptr));
        text->setText(QCoreApplication::translate("MainWindowFin", "\320\230\320\242\320\236\320\223\320\230 \320\242\320\225\320\241\320\242\320\230\320\240\320\236\320\222\320\220\320\235\320\230\320\257 \320\237\320\236 \320\230\320\235\320\244\320\236\320\240\320\234\320\220\320\242\320\230\320\232\320\225", nullptr));
        part_name->setText(QCoreApplication::translate("MainWindowFin", "<html><head/><body><p align=\"center\">12<br/></p></body></html>", nullptr));
        text_2->setText(QCoreApplication::translate("MainWindowFin", "\320\235\320\276\320\274\320\265\321\200 \320\223\321\200\321\203\320\277\320\277\321\213:", nullptr));
        text_3->setText(QCoreApplication::translate("MainWindowFin", "\320\244\320\230\320\236:", nullptr));
#if QT_CONFIG(whatsthis)
        win_start->setWhatsThis(QCoreApplication::translate("MainWindowFin", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        win_start->setText(QCoreApplication::translate("MainWindowFin", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213 \321\202\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\262\320\275\320\270\321\217:", nullptr));
        text_4->setText(QCoreApplication::translate("MainWindowFin", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\320\264\320\265\320\273\320\260\320\275\320\275\321\213\321\205 \320\267\320\260\320\264\320\260\320\275\320\270\320\271:", nullptr));
        part_prog->setText(QCoreApplication::translate("MainWindowFin", "<html><head/><body><p align=\"center\">12</p></body></html>", nullptr));
        text_5->setText(QCoreApplication::translate("MainWindowFin", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202 \321\200\320\260\320\261\320\276\321\202\321\213:", nullptr));
        text_6->setText(QCoreApplication::translate("MainWindowFin", "\320\230\321\202\320\276\320\263\320\276\320\262\320\260\321\217 \320\276\321\206\320\265\320\275\320\272\320\260:", nullptr));
        part_ov->setText(QCoreApplication::translate("MainWindowFin", "<html><head/><body><p align=\"center\">12</p></body></html>", nullptr));
        part_groups->setText(QCoreApplication::translate("MainWindowFin", "\320\235\320\276\320\274\320\265\321\200 \320\223\321\200\321\203\320\277\320\277\321\213:", nullptr));
        part_kol->setText(QCoreApplication::translate("MainWindowFin", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\320\264\320\265\320\273\320\260\320\275\320\275\321\213\321\205 \320\267\320\260\320\264\320\260\320\275\320\270\320\271:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowFin: public Ui_MainWindowFin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWFIN_H
