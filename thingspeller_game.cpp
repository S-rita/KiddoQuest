#include "thingspeller_game.h"
#include "ui_thingspeller_game.h"
#include "speller_game.h"
#include "gamecomplete.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <QMessageBox>
#include <QPixmap>


ThingSpeller_game::ThingSpeller_game(Members &member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ThingSpeller_game)
    , member(member)
    , index(index)
{

    ui->setupUi(this);
    timer.start();

    srand(time(NULL));
    thing = VecThing[rand()%(VecThing.size())];
    while (thing.getObjectPath() == "-") {
        thing = VecThing[rand()%(VecThing.size())];
    }
    QPixmap thingpic(QString::fromStdString(thing.getObjectPath()));
    ui->thingPic->setPixmap(thingpic.scaled(ui->thingPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

ThingSpeller_game::~ThingSpeller_game()
{
    delete ui;
}

void ThingSpeller_game::on_submitButton_clicked()
{
    srand(time(NULL));

    std::string ans = ui->inputThing->text().toStdString();

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

    if (thing.getObjectName() == ans) {
        totalScore += (attemptsRemaining[currentRound] == 1) ? 2 : 1;
        currentRound++;

        if (currentRound >= totalRounds && totalScore > 0) {
            qint64 playtime = timer.elapsed();
            member.addHangmanProgress(playtime, totalScore, index);
            GameComplete AnimalSpellerComplete;
            AnimalSpellerComplete.setModal(true);
            AnimalSpellerComplete.setScore(totalScore);
            AnimalSpellerComplete.setTime(playtime);
            AnimalSpellerComplete.exec() ;
            close();
            Speller_game *spellergame = new Speller_game(member, index, this);
            spellergame->show();
            currentRound = 0;
            totalScore = 0;
        }

        ui->guessLeftLabel->setText("You have 2 guesses left.");
        ui->scoreNumber->setText(QString::number(totalScore));
        ui->questionNumber->setText(QString::number(currentRound + 2));

        thing = VecThing[rand()%(VecThing.size())];
        while (thing.getObjectPath() == "-") {
            thing = VecThing[rand()%(VecThing.size())];
        }
        QPixmap thingPic(QString::fromStdString(thing.getObjectPath()));
        ui->thingPic->setPixmap(thingPic.scaled(ui->thingPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else {
        if (attemptsRemaining[currentRound] == 0) {
            ui->guessLeftLabel->setText("No more guesses left");
            std::string showAnswer = "Answer: " + thing.getObjectName();
            QMessageBox::information(this, tr("Answer"), tr(showAnswer.c_str()));

            ui->guessLeftLabel->setText("You have 2 guesses left.");
            ui->scoreNumber->setText(QString::number(totalScore));
            ui->questionNumber->setText(QString::number(currentRound + 2));

            ui->guessLeftLabel->setText("You have 2 guesses left.");
            thing = VecThing[rand()%(VecThing.size())];
            while (thing.getObjectPath() == "-") {
                thing = VecThing[rand()%(VecThing.size())];
            }
            QPixmap thingPic(QString::fromStdString(thing.getObjectPath()));
            ui->thingPic->setPixmap(thingPic.scaled(ui->thingPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

            currentRound++;

            if (currentRound >= totalRounds) {
                qint64 playtime = timer.elapsed();
                member.addHangmanProgress(playtime, totalScore, index);
                GameComplete AnimalSpellerComplete;
                AnimalSpellerComplete.setModal(true);
                AnimalSpellerComplete.setScore(totalScore);
                AnimalSpellerComplete.setTime(playtime);
                AnimalSpellerComplete.exec();
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
    ui->inputThing->clear();
}

void ThingSpeller_game::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Exit", "Are you sure you want to quit the game?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        ThingSpeller_game::close();
        Speller_game *spellerwindow = new Speller_game(member, index, this);
        spellerwindow->show();
    }
}

