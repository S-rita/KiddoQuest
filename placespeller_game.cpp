#include "placespeller_game.h"
#include "ui_placespeller_game.h"
#include "speller_game.h"
#include "gamecomplete.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <QElapsedTimer>
#include <QMessageBox>
#include <QPixmap>

PlaceSpeller_game::PlaceSpeller_game(Members &member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PlaceSpeller_game)
    , member(member)
    , index(index)
{

    ui->setupUi(this);
    timer.start();


    srand(time(NULL));
    place = VecPlace[rand()%(VecPlace.size())];
    while (place.getObjectPath() == "-") {
        place = VecPlace[rand()%(VecPlace.size())];
    }
    QPixmap placepic(QString::fromStdString(place.getObjectPath()));
    ui->placePic->setPixmap(placepic.scaled(ui->placePic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

PlaceSpeller_game::~PlaceSpeller_game()
{
    delete ui;
}

void PlaceSpeller_game::on_submitButton_clicked()
{
    srand(time(NULL));

    std::string ans = ui->inputPlace->text().toStdString();

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

    if (place.getObjectName() == ans) {
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

        place = VecPlace[rand()%(VecPlace.size())];
        while (place.getObjectPath() == "-") {
            place = VecPlace[rand()%(VecPlace.size())];
        }
        QPixmap animalpic(QString::fromStdString(place.getObjectPath()));
        ui->placePic->setPixmap(animalpic.scaled(ui->placePic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else {
        if (attemptsRemaining[currentRound] == 0) {
            ui->guessLeftLabel->setText("No more guesses left");
            std::string showAnswer = "Answer: " + place.getObjectName();
            QMessageBox::information(this, tr("Answer"), tr(showAnswer.c_str()));

            ui->guessLeftLabel->setText("You have 2 guesses left.");
            ui->scoreNumber->setText(QString::number(totalScore)); // Update score UI
            ui->questionNumber->setText(QString::number(currentRound + 2)); // Update question number UI

            ui->guessLeftLabel->setText("You have 2 guesses left.");
            place = VecPlace[rand()%(VecPlace.size())];
            while (place.getObjectPath() == "-") {
                place = VecPlace[rand()%(VecPlace.size())];
            }
            QPixmap animalpic(QString::fromStdString(place.getObjectPath()));
            ui->placePic->setPixmap(animalpic.scaled(ui->placePic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

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
    ui->inputPlace->clear();
}

void PlaceSpeller_game::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Exit", "Are you sure you want to quit the game?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        PlaceSpeller_game::close();
        Speller_game *spellerwindow = new Speller_game(member, index, this);
        spellerwindow->show();
    }
}
