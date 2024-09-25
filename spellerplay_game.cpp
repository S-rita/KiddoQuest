#include "spellerplay_game.h"
#include <QMessageBox>
#include <QPixmap>
#include "gamecomplete.h"
#include "speller_game.h"
#include "ui_spellerplay_game.h"
#include <cstdlib>
#include <ctime>
#include <vector>

SpellerPlay_game::SpellerPlay_game(Members &member, int index, std::vector<Objects> VecWord, int type, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SpellerPlay_game)
    , member(member)
    , index(index)
    , VecWord(VecWord)
    , type(type)
{
    ui->setupUi(this);
    covertime = new QTimer(this);
    connect(covertime, SIGNAL(timeout()), this, SLOT(moveLabel()));
    covertime->start(60);
    switch (type) {
    case 0 :
        ui->spellBackground->setPixmap(QString::fromStdString(":/image for c++ project/Background/AnimalSpeller"));
        break;
    case 1 :
        ui->spellBackground->setPixmap(QString::fromStdString(":/image for c++ project/Background/FoodSpeller"));
        break;
    case 2 :
        ui->spellBackground->setPixmap(QString::fromStdString(":/image for c++ project/Background/JobSpeller"));
        break;
    case 3 :
        ui->spellBackground->setPixmap(QString::fromStdString(":/image for c++ project/Background/PlaceSpeller"));
        break;
    case 4 :
        ui->spellBackground->setPixmap(QString::fromStdString(":/image for c++ project/Background/ThingSpeller"));
        break;
    }
    timer.start();

    srand(time(NULL));
    word = VecWord[rand() % (VecWord.size())];
    while (word.getObjectPath() == "-") {
        word = VecWord[rand() % (VecWord.size())];
    }
    QPixmap wordpic(QString::fromStdString(word.getObjectPath()));
    ui->wordPic->setPixmap(
        wordpic.scaled(ui->wordPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

SpellerPlay_game::~SpellerPlay_game()
{
    delete ui;
}

void SpellerPlay_game::on_submitButton_clicked()
{
    srand(time(NULL));

    std::string ans = ui->inputWord->text().toStdString();

    // Convert answer to lowercase
    std::transform(ans.begin(), ans.end(), ans.begin(), [](unsigned char c) {
        return std::tolower(c);
    });

    // Check if the game is finished and the score is 0
    if (currentRound >= totalRounds && totalScore == 0) {
        qint64 playtime = timer.elapsed();
        member.addSpellerProgress(playtime, totalScore, index);
        GameComplete SpellerCompleteFailed;
        SpellerCompleteFailed.setModal(true);
        SpellerCompleteFailed.setScore(totalScore);
        SpellerCompleteFailed.setTime(playtime);
        SpellerCompleteFailed.lose();
        SpellerCompleteFailed.exec();
        close(); // Close the current window
        Speller_game *spellergame = new Speller_game(member, index, this);
        spellergame->show();
        currentRound = 0;
        totalScore = 0;
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
            currentRound = 0;
            totalScore = 0;
        }

        // Display number of question & score
        ui->guessLeftLabel->setText("You have 2 guesses left.");
        ui->scoreNumber->setText(QString::number(totalScore));          // Update score UI
        ui->questionNumber->setText(QString::number(currentRound + 2)); // Update question number UI

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
            ui->scoreNumber->setText(QString::number(totalScore)); // Update score UI
            ui->questionNumber->setText(
                QString::number(currentRound + 2)); // Update question number UI

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
            if (currentRound >= totalRounds) {
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
                currentRound = 0;
                totalScore = 0;
            }
        } else {
            // Reduce the number of attempts left and inform the user
            attemptsRemaining[currentRound]--;
            ui->guessLeftLabel->setText("You have 1 guess left.");
        }
    }

    // Clear the guess entry
    ui->inputWord->clear();
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

void SpellerPlay_game::moveLabel()
{
    // Get the current position of the label
    QPoint pos = ui->cover1->pos();

    // Define the boundaries
    int minX = 130;
    int maxX = 600 - ui->cover1->width();
    int minY = 150;
    int maxY = 450 - ui->cover1->height();

    // Update the position of the label
    static int dx = 1; // Change this value to adjust the speed of movement
    static int dy = 1; // Change this value to adjust the speed of movement
    pos.setX(pos.x() + dx);
    pos.setY(pos.y() + dy);

    // Check for boundaries
    if (pos.x() < minX) {
        pos.setX(minX);
        dx = -dx; // Reverse direction when hitting the left boundary
    }
    else if (pos.x() > maxX) {
        pos.setX(maxX);
        dx = -dx; // Reverse direction when hitting the right boundary
    }

    if (pos.y() < minY) {
        pos.setY(minY);
        dy = -dy; // Reverse direction when hitting the top boundary
    }
    else if (pos.y() > maxY) {
        pos.setY(maxY);
        dy = -dy; // Reverse direction when hitting the bottom boundary
    }

    // Update the label's position
    ui->cover1->move(pos);
}
