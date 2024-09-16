#include "easyplusminus_game.h"
#include "ui_easyplusminus_game.h"
#include "plusminuswindow.h"
#include "gamecomplete.h"
#include <QRandomGenerator>
#include <QString>
#include <QElapsedTimer>
#include <QMessageBox>

using namespace std;

easyPlusMinus_game::easyPlusMinus_game(Members& member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::easyPlusMinus_game)
{
    ui->setupUi(this);

    TimeTeller.start();
    GenerateNum();
    connect(ui->doneButton, &QPushButton::clicked, this, &easyPlusMinus_game::DoneButton_clicked);
}

easyPlusMinus_game::~easyPlusMinus_game()
{
    delete ui;
}

void easyPlusMinus_game::checkAnswers()
{
    QString userInput = ui->userInput->text();

    if (RoundGame < 10) {
        if (userInput == QString::number(result)) {
            currentScore += 1;

        }
        RoundGame++;
    }

    ui->questionUpdate->setText(QString::number(RoundGame +1) + " / 10");
    ui->scoreUpdate->setText(QString::number(currentScore));
    ui->userInput->clear();

    if (RoundGame == 10) {
        ui->questionUpdate->setText("10 / 10");
        qint64 playtime = TimeTeller.elapsed();
        GameComplete FoodSpellerComplete;
        FoodSpellerComplete.setModal(true);
        FoodSpellerComplete.setScore(currentScore);
        FoodSpellerComplete.setTime(playtime);
        FoodSpellerComplete.exec();
        close();
        PlusMinusWindow *plusminuswindow = new PlusMinusWindow(member, index, this);
        plusminuswindow->show();
        RoundGame = 0;
        currentScore = 0;
    }
}

void easyPlusMinus_game::GenerateNum()
{
    if (RoundGame < 10) {

        int augend = QRandomGenerator::global()->bounded(1, 1001);
        int addend = QRandomGenerator::global()->bounded(1, 1001);
        int operation = QRandomGenerator::global()->bounded(2);

        if (operation == 0) {
            result = augend + addend;
            if (result > 1000) {
                while (result > 1000) {
                    augend = QRandomGenerator::global()->bounded(1, 1001);
                    addend = QRandomGenerator::global()->bounded(1, 1001);
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

void easyPlusMinus_game::DoneButton_clicked()
{
    checkAnswers();
    GenerateNum();
}



void easyPlusMinus_game::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Exit", "Are you sure you want to quit the game?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        easyPlusMinus_game::close();
        PlusMinusWindow *plusminuswindow = new PlusMinusWindow(member, index, this);
        plusminuswindow->show();
    }
}

