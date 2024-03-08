#include "foodspeller_game.h"
#include "ui_foodspeller_game.h"
#include "speller_game.h"
#include "gamecomplete.h"
#include <QMessageBox>
#include <QPixmap>
#include <cstdlib>
#include <ctime>
#include <vector>

FoodSpeller_game::FoodSpeller_game(Members &member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FoodSpeller_game)
    , member(member)
    , index(index)
{
    ui->setupUi(this);
    timer.start();

    srand(time(NULL));
    food = VecFood[rand()%(VecFood.size())];
    while (food.getObjectPath() == "-") {
        food = VecFood[rand()%(VecFood.size())];
    }
    QPixmap foodpic(QString::fromStdString(food.getObjectPath()));
    ui->foodPic->setPixmap(foodpic.scaled(ui->foodPic->size(), Qt::KeepAspectRatio));
}

FoodSpeller_game::~FoodSpeller_game()
{
    delete ui;
}

void FoodSpeller_game::on_submitButton_clicked()
{
    srand(time(NULL));

    std::string ans = ui->inputFood->text().toStdString();

    std::transform(ans.begin(), ans.end(), ans.begin(),
                   [](unsigned char c) { return std::tolower(c); });


    if (currentRound >= totalRounds && totalScore == 0) {
        QMessageBox::information(this, tr("Game Over"), tr("You have completed all rounds!"));
        close();
        Speller_game *spellergame = new Speller_game(member, index, this);
        spellergame->show();
        currentRound = 0;
        totalScore = 0;
    }

    if (food.getObjectName() == ans) {
        totalScore += (attemptsRemaining[currentRound] == 1) ? 2 : 1;
        currentRound++;

        if (currentRound >= totalRounds && totalScore > 0) {
            qint64 playtime = timer.elapsed();
            member.addSpellerProgress(playtime, totalScore, index);
            GameComplete FoodSpellerComplete;
            FoodSpellerComplete.setModal(true);
            FoodSpellerComplete.setScore(totalScore);
            FoodSpellerComplete.setTime(playtime);
            FoodSpellerComplete.exec() ;
            close();
            Speller_game *spellergame = new Speller_game(member, index, this);
            spellergame->show();
            currentRound = 0;
            totalScore = 0;
        }

        ui->guessLeftLabel->setText("You have 2 guesses left.");
        ui->scoreNumber->setText(QString::number(totalScore));
        ui->questionNumber->setText(QString::number(currentRound + 2));

        food = VecFood[rand()%(VecFood.size())];
        while (food.getObjectPath() == "-") {
            food = VecFood[rand()%(VecFood.size())];
        }
        QPixmap foodpic(QString::fromStdString(food.getObjectPath()));
        ui->foodPic->setPixmap(foodpic.scaled(ui->foodPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else {
        if (attemptsRemaining[currentRound] == 0) {
            ui->guessLeftLabel->setText("No more guesses left");
            std::string showAnswer = "Answer: " + food.getObjectName();
            QMessageBox::information(this, tr("Answer"), tr(showAnswer.c_str()));

            ui->guessLeftLabel->setText("You have 2 guesses left.");
            ui->scoreNumber->setText(QString::number(totalScore)); // Update score UI
            ui->questionNumber->setText(QString::number(currentRound + 2)); // Update question number UI

            ui->guessLeftLabel->setText("You have 2 guesses left.");
            food = VecFood[rand()%(VecFood.size())];
            while (food.getObjectPath() == "-") {
                food = VecFood[rand()%(VecFood.size())];
            }
            QPixmap foodpic(QString::fromStdString(food.getObjectPath()));
            ui->foodPic->setPixmap(foodpic.scaled(ui->foodPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

            currentRound++;

            if (currentRound >= totalRounds) {
                qint64 playtime = timer.elapsed();
                member.addSpellerProgress(playtime, totalScore, index);
                GameComplete FoodSpellerComplete;
                FoodSpellerComplete.setModal(true);
                FoodSpellerComplete.setScore(totalScore);
                FoodSpellerComplete.setTime(playtime);
                FoodSpellerComplete.exec();
                close();
                Speller_game *spellergame = new Speller_game(member, index, this);
                spellergame->show();
                currentRound = 0;
                totalScore = 0;
            }
        } else {
            attemptsRemaining[currentRound]--;
            ui->guessLeftLabel->setText("You have 1 guess left.");
        }
    }
    ui->inputFood->clear();
}

void FoodSpeller_game::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Exit", "Are you sure you want to quit the game?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        FoodSpeller_game::close();
        Speller_game *spellerwindow = new Speller_game(member, index, this);
        spellerwindow->show();
    }
}
