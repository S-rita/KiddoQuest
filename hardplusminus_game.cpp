#include "hardplusminus_game.h"
#include "ui_hardplusminus_game.h"
#include "gamecomplete.h"
#include "plusminuswindow.h"
#include <QRandomGenerator>
#include <QString>
#include <QElapsedTimer>
#include <QMessageBox>

using namespace std;

hardPlusMinus_game::hardPlusMinus_game(Members &member, int index,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::hardPlusMinus_game)
{
    ui->setupUi(this);

    timer.start();
    GenerateNum();
    connect(ui->doneButton, &QPushButton::clicked, this, &hardPlusMinus_game::DoneButton_clicked);
}

hardPlusMinus_game::~hardPlusMinus_game()
{
    delete ui;
}

void hardPlusMinus_game::checkAnswers(QString userInput)
{

    if (RoundGame < 10) {
        if (userInput == QString::number(result)) {
            currentScore += 1;

        }
        RoundGame++;
    }

    ui->questionUpdate->setText(QString::number(RoundGame+1) + " / 10");
    ui->scoreUpdate->setText(QString::number(currentScore));
    ui->userInput->clear();

    if (RoundGame == 10 && currentScore > 0) {
        ui->questionUpdate->setText("10 / 10");
        qint64 playtime = timer.elapsed();
        GameComplete FoodSpellerWin;
        FoodSpellerWin.setModal(true);
        FoodSpellerWin.setScore(currentScore);
        FoodSpellerWin.setTime(playtime);
        FoodSpellerWin.exec();
        close();
        PlusMinusWindow *plusminuswindow = new PlusMinusWindow(member, index, this);
        plusminuswindow->show();
    } else if (RoundGame == 10 && currentScore == 0) {
        ui->questionUpdate->setText("10 / 10");
        qint64 playtime = timer.elapsed();
        GameComplete FoodSpellerLose;
        FoodSpellerLose.setModal(true);
        FoodSpellerLose.lose();
        FoodSpellerLose.setScore(currentScore);
        FoodSpellerLose.setTime(playtime);
        FoodSpellerLose.exec();
        close();
        PlusMinusWindow *plusminuswindow = new PlusMinusWindow(member, index, this);
        plusminuswindow->show();
    }
}

void hardPlusMinus_game::GenerateNum()
{
    if (RoundGame < 10) {

        int augend = QRandomGenerator::global()->bounded(1, 100001);
        int addend = QRandomGenerator::global()->bounded(1, 100001);
        int operation = QRandomGenerator::global()->bounded(2);

        if (operation == 0) {
            result = augend + addend;
            if (result > 100000) {
                while (result > 100000) {
                    augend = QRandomGenerator::global()->bounded(1, 100001);
                    addend = QRandomGenerator::global()->bounded(1, 100001);
                    result = augend + addend;
                }
            }
            ui->augend->setText(QString::number(augend));
            ui->addend->setText(QString::number(addend));
            ui->operandSymbol->setText("+");
        } else {
            if (augend < addend) {
                swap(augend, addend);
            }
            result = augend - addend;
            ui->augend->setText(QString::number(augend));
            ui->addend->setText(QString::number(addend));
            ui->operandSymbol->setText("-");
        }
    }
}

void hardPlusMinus_game::DoneButton_clicked()
{
    QString userInput = ui->userInput->text();

    if (!userInput.isEmpty() && userInput.toInt()) {
        checkAnswers(userInput);
        GenerateNum();
    } else {
        QMessageBox::warning(this, "Warning", "Please enter only numeric values.");
        ui->userInput->clear();
    }
}

void hardPlusMinus_game::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Exit", "Are you sure you want to quit the game?",QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        hardPlusMinus_game::close();
        PlusMinusWindow *plusminuswindow = new PlusMinusWindow(member, index, this);
        plusminuswindow->show();
    }
}


