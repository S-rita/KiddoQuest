#include "gamecomplete.h"
#include "ui_gamecomplete.h"

GameComplete::GameComplete(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GameComplete)
{
    ui->setupUi(this);
}

GameComplete::~GameComplete()
{
    delete ui;
}

void GameComplete::setScore(int score)
{
    std::string word = "Score: " + std::to_string(score);
    ui->label_2->setText(QString::fromStdString(word));
}

// void GameComplete::setTime(int time)
// {

//     int hour = time/3600;
//     int min = (time%3600)/60;
//     int sec = ((time%3600)%60);
//     std::string word = "Time: " + std::to_string(hour) + ":" + std::to_string(min) + ":" + std::to_string(sec);
//     ui->label_3->setText(QString::fromStdString(word));

// }
