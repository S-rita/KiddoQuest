#include "multiplydivide_game.h"
#include "ui_multiplydivide_game.h"
#include "gamecomplete.h"
#include "quickmathwindow.h"
#include <QRandomGenerator>
#include <QString>
#include <QElapsedTimer>
#include <QMessageBox>

using namespace std;

MultiplyDivide_game::MultiplyDivide_game(Members &member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MultiplyDivide_game)
    , member(member)
    , index(index)
{
    ui->setupUi(this);

    timeTeller.start();
    GenerateNum();
    connect(ui->doneButton, &QPushButton::clicked, this, &MultiplyDivide_game::DoneButton_clicked);
}

MultiplyDivide_game::~MultiplyDivide_game()
{
    delete ui;
}

void MultiplyDivide_game::checkAnswers()
{
    QString userInput = ui->userInput->text();

    if (RoundGame < 10) {
        if (userInput == QString::number(result)) {
            currentScore += 1;

        }
        RoundGame++;
    }

    ui->questionUpdate->setText(QString::number(RoundGame+1) + " / 10");
    ui->scoreUpdate->setText(QString::number(currentScore));
    ui->userInput->clear();

    if (RoundGame == 10) {
        ui->questionUpdate->setText("10 / 10");
        qint64 playtime = timeTeller.elapsed();
        member.addCalProgress(playtime, currentScore, index);
        GameComplete FoodSpellerComplete;
        FoodSpellerComplete.setModal(true);
        FoodSpellerComplete.setScore(currentScore);
        FoodSpellerComplete.setTime(playtime);
        FoodSpellerComplete.exec();
        close();
        QuickMathWindow *quickmath = new QuickMathWindow(member, index, this);
        quickmath->show();
        RoundGame = 0;
        currentScore = 0;
    }
}

void MultiplyDivide_game::GenerateNum()
{
    if (RoundGame < 10) {
        int operation = QRandomGenerator::global()->bounded(2);

        if (operation == 0) {
            int augend = QRandomGenerator::global()->bounded(1, 26);
            int multiplier = QRandomGenerator::global()->bounded(1, 26);
            result = augend * multiplier;

            ui->augend->setText(QString::number(augend));
            ui->divisor->setText(QString::number(multiplier));
            ui->operandSymbol->setText("×");

        } else {
            int augend_ = QRandomGenerator::global()->bounded(1, 10001);
            int divisor = QRandomGenerator::global()->bounded(1, 10001);

            while (augend_ % divisor != 0) {
                augend_ = QRandomGenerator::global()->bounded(1, 10001);
                divisor = QRandomGenerator::global()->bounded(1, 10001);
                if (augend_ < divisor) {
                    swap(augend_, divisor);
                }
            }
            result = augend_ / divisor;
            ui->augend->setText(QString::number(augend_));
            ui->divisor->setText(QString::number(divisor));
            ui->operandSymbol->setText("÷");
        }
    }
}

void MultiplyDivide_game::DoneButton_clicked()
{
    checkAnswers();
    GenerateNum();
}



void MultiplyDivide_game::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Exit", "Are you sure you want to quit the game?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        MultiplyDivide_game::close();
        QuickMathWindow *quickmathwindow = new QuickMathWindow(member, index, this);
        quickmathwindow->show();
    }
}

