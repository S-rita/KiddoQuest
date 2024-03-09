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
    ui->scoreLabel->setText(QString::fromStdString(word));
}

void GameComplete::setTime(int time)
{
    time /= 1000;

    int hour = time / 3600;
    int min = (time % 3600) / 60;
    int sec = (time % 3600) % 60;

    std::string hour_text = (hour < 10) ? "0" + std::to_string(hour) : std::to_string(hour);
    std::string min_text = (min < 10) ? "0" + std::to_string(min) : std::to_string(min);
    std::string sec_text = (sec < 10) ? "0" + std::to_string(sec) : std::to_string(sec);

    std::string word = "Time: " + hour_text + ":" + min_text + ":" + sec_text;
    ui->timeLabel->setText(QString::fromStdString(word));
}

void GameComplete::lose()
{
    ui->winLabel->setText("YOU LOSE");
}

void GameComplete::on_buttonBox_accepted()
{
    GameComplete::close();
}
