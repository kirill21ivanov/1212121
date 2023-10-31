#include "mainwindoutest.h"
#include "ui_mainwindoutest.h"

MainWindouTest::MainWindouTest(const QString &name, const QString &group, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindouTest)
{
    ui->setupUi(this);
    this->ui->part_name->setText(name);
    names = name; // Store in member variable
    groups = group; // Store in member variable
    this->ui->part_group->setText(group);

    timer = new QTimer(this);
    timeRemaining = QTime(0, 20, 0);

    connect(timer, SIGNAL(timeout()), this, SLOT(updateTimerDisplay()));

    timer->start(1000);
}

void MainWindouTest::on_exit_clicked() {
    qDebug() << "Имя : " << names;
    this->hide(); // скрыть тестирование
    a = new MainWindowFin(names, groups, userScore);
    a->setWindowState(Qt::WindowNoState);
    a->show();
}

MainWindouTest::~MainWindouTest()
{
    delete ui;
}

// Создайте слот для обновления отображаемого времени
void MainWindouTest::updateTimerDisplay() {
    timeRemaining = timeRemaining.addSecs(-1);  // Уменьшаем время на 1 секунду
    if (timeRemaining == QTime(0, 0)) {
        // Таймер истек, выполните нужные действия
        timer->stop();
    }
    this->ui->timer->setText(timeRemaining.toString("mm:ss"));
}

void MainWindouTest::shuffleOptions(QString &option1, QString &option2, QString &option3) {
    QStringList optionsList;
    optionsList << option1 << option2 << option3;
    std::shuffle(optionsList.begin(), optionsList.end(), std::mt19937(std::random_device()()));
    option1 = optionsList[0];
    option2 = optionsList[1];
    option3 = optionsList[2];
}

void MainWindouTest::on_but_1_clicked() {
    // Вопросы
    if (!question1Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Каких списков нет в текстовом редакторе?");
        // Ответы
        QString option1 = "Нумерованных";
        QString option2 = "Точечных"; // Правильный ответ
        QString option3 = "Маркированных";
        // Перемешиваем ответы
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;

        // Подключаем обработчики событий для кнопок awin
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);

        // Помечаем, что вопрос ещё не был отвечен
        question1Answered = false;
    }
}

void MainWindouTest::on_but_2_clicked() {
    if (!question2Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        //вопросы
        this->ui->win_start->setText("При задании параметров страницы в текстовом редакторе устанавливаются");
        //варианты ответов
        QString option1 = "Интервал между абзацами и вид шрифта";
        QString option2 = "Поля, ориентация и размер страницы";  //  +
        QString option3 = "Фон и границы страницы, отступ";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        // Помечаем, что вопрос ещё не был отвечен
        question2Answered = false;
    }
}

void MainWindouTest::on_but_3_clicked() {
    //вопросы
    if (!question3Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Какую комбинацию клавиш следует применить, чтобы вставить в документ сегодняшнюю дату? ");
        //варианты ответов
        QString option1 = "Ctrl + Alt + A";
        QString option2 = "Shift + Alt + D";  //  +
        QString option3 = "Shift + Ctrl + V";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question3Answered = false;
    }
}
void MainWindouTest::on_but_4_clicked() {
    //вопросы
    if (!question4Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Какое из этих утверждений правильное? ");
        //варианты ответов
        QString option1 = "Если пароль к защищенному документу утрачен, его можно восстановить с помощью ключевого слова.";
        QString option2 = "Кернинг – это изменение интервала между буквами одного слова.";  //  +
        QString option3 = "Сочетание клавиш Shift + Home переносит на первую страницу документа.";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question4Answered = false;
    }
}
void MainWindouTest::on_but_5_clicked() {
    //вопросы
    if (!question5Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Какое из этих утверждений неправильное? ");
        //варианты ответов
        QString option1 = "Большую букву можно напечатать двумя способами.";
        QString option2 = "Клавиша Delete удаляет знак перед мигающим курсором.";  //  +
        QString option3 = "При помощи клавиши Tab можно сделать красную строку.";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question5Answered = false;
    }
}
void MainWindouTest::on_but_6_clicked() {
    //вопросы
    if (!question6Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("На какую клавишу нужно нажать, чтобы напечатать запятую, когда на компьютере установлен английский алфавит? ");
        //варианты ответов
        QString option1 = "где написана русская буква Ю";
        QString option2 = "где написана русская буква Б";  //  +
        QString option3 = "где написана русская буква Ж.";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question6Answered = false;
    }
}
void MainWindouTest::on_but_7_clicked() {
    //вопросы
    if (!question7Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Колонтитул – это: ");
        //варианты ответов
        QString option1 = "внешний вид печатных знаков, который пользователь видит в окне текстового редактора;";
        QString option2 = "область, которая находится в верхнем и нижнем поле и предназначается для помещения названия работы над текстом каждой страницы;";  //  +
        QString option3 = "верхняя строка окна редактора Word, которая содержит в себе панель команд (например, «Вставка», «Конструктор», «Макет» и т. д.).";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question7Answered = false;
    }
}
void MainWindouTest::on_but_8_clicked() {
    //вопросы
    if (!question8Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Чтобы в текстовый документ вставить ссылку, нужно перейти по следующим вкладкам: ");
        //варианты ответов
        QString option1 = "Вставка – Вставить ссылку – Создание источника;";
        QString option2 = "Ссылки – Вставить ссылку – Добавить новый источник.";  //  +
        QString option3 = "Файл – Параметры страницы – Вставить ссылку";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question8Answered = false;
    }
}
void MainWindouTest::on_but_9_clicked() {
    //вопросы
    if (!question9Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Какой шрифт по умолчанию установлен в Word 2007?");
        //варианты ответов
        QString option1 = "Times New Roman;";
        QString option2 = "Calibri";  //  +
        QString option3 = "Microsoft Ya Hei";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question9Answered = false;
    }
}
void MainWindouTest::on_but_10_clicked() {
    //вопросы
    if (!question10Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("В верхней строке панели задач изображена иконка с дискетой. Что произойдет, если на нее нажать? ");
        //варианты ответов
        QString option1 = "документ удалится;";
        QString option2 = "документ сохранится;";  //  +
        QString option3 = "документ запишется на диск или флешку, вставленные в компьютер";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question10Answered = false;
    }
}
void MainWindouTest::on_but_11_clicked() {
    //вопросы
    if (!question11Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Какую клавишу нужно удерживать при копировании разных элементов текста одного документа? ");
        //варианты ответов
        QString option1 = "Alt";
        QString option2 = "Ctrl";  //  +
        QString option3 = "Shift";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question11Answered = false;
    }
}
void MainWindouTest::on_but_12_clicked() {
    //вопросы
    if (!question12Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Что можно сделать с помощью двух изогнутых стрелок, размещенных в верхней строке над страницей текста? ");
        //варианты ответов
        QString option1 = "перейти на одну букву вправо или влево (в зависимости от того, на какую стрелку нажать);";
        QString option2 = "перейти на одно совершенное действие назад или вперед (в зависимости от того, на какую стрелку нажать).";  //  +
        QString option3 = "перейти на одну строку вверх или вниз (в зависимости от того, на какую стрелку нажать);";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question12Answered = false;
    }
}
void MainWindouTest::on_but_13_clicked() {
    //вопросы
    if (!question13Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Что позволяет увидеть включенная кнопка «Непечатаемые символы»? ");
        //варианты ответов
        QString option1 = "все знаки препинания;";
        QString option2 = "пробелы между словами и конец абзаца";  //  +
        QString option3 = "ошибки в тексте.";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question13Answered = false;
    }
}
void MainWindouTest::on_but_14_clicked() {
    //вопросы
    if (!question14Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Объединить или разбить ячейки нарисованной таблицы возможно во вкладке: ");
        //варианты ответов
        QString option1 = "«Конструктор»";
        QString option2 = "«Макет»";  //  +
        QString option3 = "«Параметры таблицы»";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question14Answered = false;
    }
}
void MainWindouTest::on_but_15_clicked() {
    //вопросы
    if (!question15Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Что позволяет сделать наложенный на текстовый документ водяной знак?");
        //варианты ответов
        QString option1 = "он защищает документ от поражения вирусами;";
        QString option2 = "он делает документ уникальным";  //  +
        QString option3 = "он разрешает сторонним пользователям копировать размещенный в документе текст";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question15Answered = false;
    }
}
void MainWindouTest::on_but_16_clicked() {
    //вопросы
    if (!question16Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Чтобы включить автоматическую расстановку переносов, нужно перейти по следующим вкладкам: ");
        //варианты ответов
        QString option1 = "Вставка – Текст – Вставка переносов";
        QString option2 = "Макет – Параметры страницы – Расстановка переносов";  //  +
        QString option3 = "Ссылки – Дополнительные материалы – Вставить перенос";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question16Answered = false;
    }
}
void MainWindouTest::on_but_17_clicked() {
    //вопросы
    if (!question17Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Чтобы создать новую страницу, необходимо одновременно нажать на такие клавиши: ");
        //варианты ответов
        QString option1 = "Shift и пробел";
        QString option2 = "Ctrl и Enter";  //  +
        QString option3 = "Shift и Enter";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question17Answered = false;
    }
}
void MainWindouTest::on_but_18_clicked() {
    //вопросы
    if (!question18Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Чтобы быстро вставить скопированный элемент, следует воспользоваться такой комбинацией клавиш: ");
        //варианты ответов
        QString option1 = "Ctrl + C";
        QString option2 = "Ctrl + V";  //  +
        QString option3 = "Ctrl + X";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question18Answered = false;
    }
}
void MainWindouTest::on_but_19_clicked() {
    //вопросы
    if (!question19Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Перечень инструкций, который сообщает Word записанный заранее порядок действий для достижения определенной цели, называется: ");
        //варианты ответов
        QString option1 = "колонтитулом";
        QString option2 = "макросом";  //  +
        QString option3 = "инструкцией";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question19Answered = false;
    }
}
void MainWindouTest::on_but_20_clicked() {
    //вопросы
    if (!question20Answered) {
        ui->awin_1->setEnabled(true);
        ui->awin_2->setEnabled(true);
        ui->awin_3->setEnabled(true);
        this->ui->win_start->setText("Чтобы сделать содержание в документе, необходимо выполнить ряд следующих действий: ");
        //варианты ответов
        QString option1 = "выделить несколько слов в тексте с помощью клавиши Ctrl (они будут заглавиями), перейти на вкладку «Вставка» и нажать на иконку «Содержание»;";
        QString option2 = "выделить в тексте заголовки, перейти на вкладку «Ссылки» и там нажать на иконку «Оглавление»;";  //  +
        QString option3 = "каждую новую главу начать с новой страницы, перейти на вкладку «Вставка», найти там иконку «Вставить содержание» и нажать на нее.";
        QStringList options;
        options << option1 << option2 << option3;
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(options.begin(), options.end(), g);
        this->ui->awin_1->setText(options[0]);
        this->ui->awin_2->setText(options[1]);
        this->ui->awin_3->setText(options[2]);
        correctAnswer = option2;
        connect(ui->awin_1, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_2, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        connect(ui->awin_3, &QPushButton::clicked, this, &MainWindouTest::checkAnswer);
        question20Answered = false;
    }
}

void MainWindouTest::checkAnswer() {
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
    QString selectedAnswer = clickedButton->text();
    if (clickedButton) {
        if (selectedAnswer == "Нумерованных" || selectedAnswer == "Точечных" || selectedAnswer == "Маркированных") {
            ui->but_1->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_1->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question1Answered = true;
                if(question1 == false){
                    userScore += 1;
                }
                question1 = true;
                qDebug() << "Начислен балл 1";
            } else {
                // Логика для неправильного ответа на первый вопрос
            }
        } else if (selectedAnswer == "Интервал между абзацами и вид шрифта" || selectedAnswer == "Поля, ориентация и размер страницы" || selectedAnswer == "Фон и границы страницы, отступ") {
            ui->but_2->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_2->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question2Answered = true;
                if(question2 == false){
                    userScore += 1;
                }
                question2 = true;
                qDebug() << "Начислен балл 2";
            } else {
                // Логика для неправильного ответа на второй вопрос
            }
        } else if (selectedAnswer == "Shift + Ctrl + V" || selectedAnswer == "Shift + Alt + D" || selectedAnswer == "Ctrl + Alt + A") {
            ui->but_3->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_3->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question3Answered = true;
                if(question3 == false){
                    userScore += 1;
                }
                question3 = true;
                qDebug() << "Начислен балл 3";
            } else {
                // Логика для неправильного ответа на второй вопрос
            }
        }else if (selectedAnswer == "Если пароль к защищенному документу утрачен, его можно восстановить с помощью ключевого слова." || selectedAnswer == "Кернинг – это изменение интервала между буквами одного слова." || selectedAnswer == "Сочетание клавиш Shift + Home переносит на первую страницу документа.") {
            ui->but_4->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_4->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question4Answered = true;
                if(question4 == false){
                    userScore += 1;
                }
                question4 = true;
                qDebug() << "Начислен балл 4";
            } else {
                // Логика для неправильного ответа на второй вопрос
            }
        }else if (selectedAnswer == "Большую букву можно напечатать двумя способами." || selectedAnswer == "Клавиша Delete удаляет знак перед мигающим курсором." || selectedAnswer == "При помощи клавиши Tab можно сделать красную строку.") {
            ui->but_5->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_5->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question5Answered = true;
                if(question5 == false){
                    userScore += 1;
                }
                question5 = true;
                qDebug() << "Начислен балл 5";
            } else {
                // Логика для неправильного ответа на второй вопрос
            }
        }else if (selectedAnswer == "где написана русская буква Ю" || selectedAnswer == "где написана русская буква Б" || selectedAnswer == "где написана русская буква Ж.") {
            ui->but_6->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_6->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question6Answered = true;
                if(question6 == false){
                    userScore += 1;
                }
                question6 = true;
                qDebug() << "Начислен балл 6";
            } else {
                // Логика для неправильного ответа на второй вопрос
            }
        }else if (selectedAnswer == "внешний вид печатных знаков, который пользователь видит в окне текстового редактора;" || selectedAnswer == "область, которая находится в верхнем и нижнем поле и предназначается для помещения названия работы над текстом каждой страницы;" || selectedAnswer == "верхняя строка окна редактора Word, которая содержит в себе панель команд (например, «Вставка», «Конструктор», «Макет» и т. д.).") {
            ui->but_7->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_7->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question7Answered = true;
                if(question7 == false){
                    userScore += 1;
                }
                question7 = true;
                qDebug() << "Начислен балл 7";
            } else {
                // Логика для неправильного ответа на второй вопрос
            }
        }else if (selectedAnswer == "Вставка – Вставить ссылку – Создание источника;" || selectedAnswer == "Ссылки – Вставить ссылку – Добавить новый источник." || selectedAnswer == "Файл – Параметры страницы – Вставить ссылку") {
            ui->but_8->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_8->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question8Answered = true;
                if(question8 == false){
                    userScore += 1;
                }
                question8 = true;
                qDebug() << "Начислен балл 8";
            } else {
                // Логика для неправильного ответа на второй вопрос
            }
        }else if (selectedAnswer == "Times New Roman;" || selectedAnswer == "Calibri" || selectedAnswer == "Microsoft Ya Hei") {
            ui->but_9->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_9->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question9Answered = true;
                if(question9 == false){
                    userScore += 1;
                }
                question9 = true;
                qDebug() << "Начислен балл 9";
            } else {
                // Логика для неправильного ответа на второй вопрос
            }
        }else if (selectedAnswer == "документ удалится;" || selectedAnswer == "документ сохранится;" || selectedAnswer == "документ запишется на диск или флешку, вставленные в компьютер") {
            ui->but_10->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_10->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question10Answered = true;
                if(question10 == false){
                    userScore += 1;
                }
                question10 = true;
                qDebug() << "Начислен балл 10";
            } else {
                // Логика для неправильного ответа на второй вопрос
            }
        }else if (selectedAnswer == "Alt" || selectedAnswer == "Ctrl" || selectedAnswer == "Shift") {
            ui->but_11->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_11->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question11Answered = true;
                if(question11 == false){
                    userScore += 1;
                }
                question11 = true;
                qDebug() << "Начислен балл 11";
            } else {
                // Логика для неправильного ответа на второй вопрос
            }
        }else if (selectedAnswer == "перейти на одну букву вправо или влево (в зависимости от того, на какую стрелку нажать);" || selectedAnswer == "перейти на одно совершенное действие назад или вперед (в зависимости от того, на какую стрелку нажать)." || selectedAnswer == "перейти на одну строку вверх или вниз (в зависимости от того, на какую стрелку нажать);") {
            ui->but_12->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_12->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question12Answered = true;
                if(question12 == false){
                    userScore += 1;
                }
                question12 = true;
                qDebug() << "Начислен балл 12";
            } else {
                // Логика для неправильного ответа на второй вопрос
            }
        }else if (selectedAnswer == "все знаки препинания;" || selectedAnswer == "пробелы между словами и конец абзаца" || selectedAnswer == "ошибки в тексте.") {
            ui->but_13->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_13->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question13Answered = true;
                if(question13 == false){
                    userScore += 1;
                }
                question13 = true;
                qDebug() << "Начислен балл 13";
            } else {
                // Логика для неправильного ответа на второй вопрос
            }
        }else if (selectedAnswer == "«Конструктор»" || selectedAnswer == "«Макет»" || selectedAnswer == "«Параметры таблицы»") {
            ui->but_14->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_14->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question14Answered = true;
                if(question14 == false){
                    userScore += 1;
                }
                question14 = true;
                qDebug() << "Начислен балл 14";
            } else {
                // Логика для неправильного ответа на второй вопрос
            }
        }else if (selectedAnswer == "он защищает документ от поражения вирусами;" || selectedAnswer == "он делает документ уникальным" || selectedAnswer == "он разрешает сторонним пользователям копировать размещенный в документе текст") {
            ui->but_15->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_15->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question15Answered = true;
                if(question15 == false){
                    userScore += 1;
                }
                question15 = true;
                qDebug() << "Начислен балл 15";
            } else {
                // Логика для неправильного ответа на второй вопрос
            }
        }else if (selectedAnswer == "Вставка – Текст – Вставка переносов" || selectedAnswer == "Макет – Параметры страницы – Расстановка переносов" || selectedAnswer == "Ссылки – Дополнительные материалы – Вставить перенос") {
            ui->but_16->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_16->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question16Answered = true;
                if(question16 == false){
                    userScore += 1;
                }
                question16 = true;
                qDebug() << "Начислен балл 16";
            } else {
                // Логика для неправильного ответа на второй вопрос
            }
        }else if (selectedAnswer == "Shift и пробел" || selectedAnswer == "Ctrl и Enter" || selectedAnswer == "Shift и Enter") {
            ui->but_17->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_17->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question17Answered = true;
                if(question17 == false){
                    userScore += 1;
                }
                question17 = true;
                qDebug() << "Начислен балл 17";
            } else {
                // Логика для неправильного ответа на второй вопрос
            }
        }else if (selectedAnswer == "Ctrl + C" || selectedAnswer == "Ctrl + V" || selectedAnswer == "Ctrl + X") {
            ui->but_18->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_18->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question18Answered = true;
                if(question18 == false){
                    userScore += 1;
                }
                question18 = true;
                qDebug() << "Начислен балл 18";
            } else {
                // Логика для неправильного ответа на второй вопрос
            }
        }else if (selectedAnswer == "колонтитулом" || selectedAnswer == "макросом" || selectedAnswer == "инструкцией") {
            ui->but_19->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_19->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question19Answered = true;
                if(question19 == false){
                    userScore += 1;
                }
                question19 = true;
                qDebug() << "Начислен балл 19";
            } else {
                // Логика для неправильного ответа на второй вопрос
            }
        }else if (selectedAnswer == "выделить несколько слов в тексте с помощью клавиши Ctrl (они будут заглавиями), перейти на вкладку «Вставка» и нажать на иконку «Содержание»;" || selectedAnswer == "выделить в тексте заголовки, перейти на вкладку «Ссылки» и там нажать на иконку «Оглавление»;" || selectedAnswer == "каждую новую главу начать с новой страницы, перейти на вкладку «Вставка», найти там иконку «Вставить содержание» и нажать на нее.") {
            ui->but_20->setEnabled(false);
            ui->awin_1->setEnabled(false);
            ui->awin_2->setEnabled(false);
            ui->awin_3->setEnabled(false);
            ui->but_20->setStyleSheet("background-color: gray; border-radius: 10px;");
            if (selectedAnswer == correctAnswer) {
                question20Answered = true;
                if(question20 == false){
                    userScore += 1;
                }
                question20 = true;
                qDebug() << "Начислен балл 20";
            } else {
                // Логика для неправильного ответа на второй вопрос
            }
        }
        // Проверяем, все ли вопросы были отвечены
        if (question1Answered && question2Answered && question3Answered) {
            qDebug() << "Итог тестирвования: " << userScore;
        }
    }
}

