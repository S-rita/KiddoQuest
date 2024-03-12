#include "spellerplay_game.h"
#include <QKeyEvent>
#include <QMessageBox>
#include <QPixmap>
#include "gamecomplete.h"
#include "speller_game.h"
#include "ui_spellerplay_game.h"
#include <cstdlib>
#include <ctime>
#include <vector>

SpellerPlay_game::SpellerPlay_game(Members &member,int index, std::vector<Objects> VecWord, int type, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SpellerPlay_game)
    , member(member)
    , index(index)
    , VecWord(VecWord)
    , type(type)
{
    ui->setupUi(this);
    std::vector<QPixmap> Vecbg = {QPixmap(":/image for c++ project/Background/AnimalSpeller"),
                                  QPixmap(":/image for c++ project/Background/FoodSpeller"),
                                  QPixmap(":/image for c++ project/Background/JobSpeller"),
                                  QPixmap(":/image for c++ project/Background/PlaceSpeller"),
                                  QPixmap(":/image for c++ project/Background/ThingSpeller")};
    ui->Background->setPixmap(Vecbg[type].scaled(ui->Background->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    timer.start();

    srand(time(NULL));
    word = VecWord[rand() % (VecWord.size())];
    while (word.getObjectPath() == "-") {
        word = VecWord[rand() % (VecWord.size())];
    }
    QPixmap wordPic(QString::fromStdString(word.getObjectPath()));
    ui->wordPic->setPixmap(
        wordPic.scaled(ui->wordPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

SpellerPlay_game::~SpellerPlay_game()
{
    delete ui;
}

void SpellerPlay_game::on_submitButton_clicked()
{
    srand(time(NULL));

    std::string ans = ui->inputAnswer->text().toStdString();

    // Convert answer to lowercase
    std::transform(ans.begin(), ans.end(), ans.begin(), [](unsigned char c) {
        return std::tolower(c);
    });

    // Check if the game is finished and the score is 0
    if (currentRound >= totalRounds && totalScore == 0) {
        qint64 playtime = timer.elapsed();
        member.addSpellerProgress(playtime, totalScore, index);
        GameComplete SpellerLose;
        SpellerLose.setModal(true);
        SpellerLose.setScore(totalScore);
        SpellerLose.setTime(playtime);
        SpellerLose.lose();
        SpellerLose.exec();
        close();
        Speller_game *spellergame = new Speller_game(member, index, this);
        spellergame->show();
    }

    // Check if the guess is correct
    if (word.getObjectName() == ans) {
        totalScore += (attemptsRemaining[currentRound] == 1) ? 2 : 1;
        currentRound++;

        // Check if the game has ended with a positive score
        if (currentRound >= totalRounds && totalScore > 0) {
            qint64 playtime = timer.elapsed();
            member.addSpellerProgress(playtime, totalScore, index);
            GameComplete SpellerComplete;
            SpellerComplete.setModal(true);
            SpellerComplete.setScore(totalScore);
            SpellerComplete.setTime(playtime);
            SpellerComplete.exec();
            close(); // Close the current window
            Speller_game *spellergame = new Speller_game(member, index, this);
            spellergame->show();
        }

        // Display number of question & score
        ui->guessLeftLabel->setText("You have 2 guesses left.");
        ui->scoreNumber->setText(QString::number(totalScore));          // Update score UI
        ui->questionNumber->setText(QString::number(currentRound + 1)); // Update question number UI

        // Display the next animal picture
        word = VecWord[rand() % (VecWord.size())];
        while (word.getObjectPath() == "-") {
            word = VecWord[rand() % (VecWord.size())];
        }
        QPixmap animalpic(QString::fromStdString(word.getObjectPath()));
        ui->wordPic->setPixmap(
            animalpic.scaled(ui->wordPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else {
        // Check if there are no more attempts left
        if (attemptsRemaining[currentRound] == 0) {
            ui->guessLeftLabel->setText("No more guesses left");
            std::string showAnswer = "Answer: " + word.getObjectName();
            QMessageBox::information(this, tr("Answer"), tr(showAnswer.c_str()));

            // Display number of question & score
            ui->guessLeftLabel->setText("You have 2 guesses left.");
            ui->scoreNumber->setText(QString::number(totalScore));
            ui->questionNumber->setText(QString::number(currentRound + 2));

            // Display the next animal picture
            ui->guessLeftLabel->setText("You have 2 guesses left.");
            word = VecWord[rand() % (VecWord.size())];
            while (word.getObjectPath() == "-") {
                word = VecWord[rand() % (VecWord.size())];
            }
            QPixmap animalpic(QString::fromStdString(word.getObjectPath()));
            ui->wordPic->setPixmap(animalpic.scaled(ui->wordPic->size(),
                                                    Qt::KeepAspectRatio,
                                                    Qt::SmoothTransformation));

            currentRound++; // Move to the next round

            // Check if the game has ended
            if (currentRound >= totalRounds && totalScore == 0) {
                qint64 playtime = timer.elapsed();
                member.addSpellerProgress(playtime, totalScore, index);
                GameComplete SpellerLose;
                SpellerLose.setModal(true);
                SpellerLose.lose();
                SpellerLose.setScore(totalScore);
                SpellerLose.setTime(playtime);
                SpellerLose.exec();
                close();
                Speller_game *spellergame = new Speller_game(member, index, this);
                spellergame->show();
            } else if (currentRound >= totalRounds && totalScore > 0) {
                qint64 playtime = timer.elapsed();
                member.addSpellerProgress(playtime, totalScore, index);
                GameComplete SpellerWin;
                SpellerWin.setModal(true);
                SpellerWin.setScore(totalScore);
                SpellerWin.setTime(playtime);
                SpellerWin.exec();
                close();
                Speller_game *spellergame = new Speller_game(member, index, this);
                spellergame->show();
            }
        } else {
            // Reduce the number of attempts left and inform the user
            attemptsRemaining[currentRound]--;
            ui->guessLeftLabel->setText("You have 1 guess left.");
        }
    }

    // Clear the guess entry
    ui->inputAnswer->clear();
}

void SpellerPlay_game::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this,
                                  "Exit",
                                  "Are you sure you want to quit the game?",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        SpellerPlay_game::close();
        Speller_game *spellerwindow = new Speller_game(member, index, this);
        spellerwindow->show();
    }
}

void SpellerPlay_game::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return) {
        event->accept();
        on_submitButton_clicked();
    } else if (event->key() == Qt::Key_Escape) {
        event->accept();
        on_exitButton_clicked();
    } else {
        QMainWindow::keyPressEvent(event);
    }
}
