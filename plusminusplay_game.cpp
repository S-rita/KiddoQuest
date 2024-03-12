#include "plusminusplay_game.h"
#include <QElapsedTimer>
#include <QKeyEvent>
#include <QMessageBox>
#include <QRandomGenerator>
#include <QString>
#include "gamecomplete.h"
#include "plusminuswindow.h"
#include "ui_plusminusplay_game.h"

using namespace std;

PlusMinusPlay_game::PlusMinusPlay_game(Members &member, int index, int scope, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PlusMinusPlay_game)
    , scope(scope)
{
    ui->setupUi(this);

    timer.start();
    GenerateNum();
    connect(ui->doneButton, &QPushButton::clicked, this, &PlusMinusPlay_game::DoneButton_clicked);
}

PlusMinusPlay_game::~PlusMinusPlay_game()
{
    delete ui;
}

void PlusMinusPlay_game::checkAnswers(QString userInput)
{
    if (RoundGame < 10) {
        if (userInput == QString::number(result)) {
            currentScore += 1;
        }
        RoundGame++;
    }

    ui->questionUpdate->setText(QString::number(RoundGame + 1) + " / 10");
    ui->scoreUpdate->setText(QString::number(currentScore));
    ui->userInput->clear();

    if (RoundGame == 10 && currentScore > 0) {
        ui->questionUpdate->setText("10 / 10");
        qint64 playtime = timer.elapsed();
        GameComplete PlusMinusWin;
        PlusMinusWin.setModal(true);
        PlusMinusWin.setScore(currentScore);
        PlusMinusWin.setTime(playtime);
        PlusMinusWin.exec();
        close();
        PlusMinusWindow *plusminuswindow = new PlusMinusWindow(member, index, this);
        plusminuswindow->show();
    } else if (RoundGame == 10 && currentScore == 0) {
        ui->questionUpdate->setText("10 / 10");
        qint64 playtime = timer.elapsed();
        GameComplete PlusMinusLose;
        PlusMinusLose.setModal(true);
        PlusMinusLose.lose();
        PlusMinusLose.setScore(currentScore);
        PlusMinusLose.setTime(playtime);
        PlusMinusLose.exec();
        close();
        PlusMinusWindow *plusminuswindow = new PlusMinusWindow(member, index, this);
        plusminuswindow->show();
    }
}

void PlusMinusPlay_game::GenerateNum()
{
    if (RoundGame < 10) {
        int augend = QRandomGenerator::global()->bounded(1, scope + 1);
        int addend = QRandomGenerator::global()->bounded(1, scope + 1);
        int operation = QRandomGenerator::global()->bounded(2);

        if (operation == 0) {
            result = augend + addend;
            if (result > scope) {
                while (result > scope) {
                    augend = QRandomGenerator::global()->bounded(1, scope + 1);
                    addend = QRandomGenerator::global()->bounded(1, scope + 1);
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

void PlusMinusPlay_game::DoneButton_clicked()
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

void PlusMinusPlay_game::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this,
                                  "Exit",
                                  "Are you sure you want to quit the game?",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        PlusMinusPlay_game::close();
        PlusMinusWindow *plusminuswindow = new PlusMinusWindow(member, index, this);
        plusminuswindow->show();
    }
}

void PlusMinusPlay_game::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return) {
        event->accept();
        DoneButton_clicked();
    } else if (event->key() == Qt::Key_Escape) {
        event->accept();
        on_exitButton_clicked();
    } else {
        QMainWindow::keyPressEvent(event);
    }
}
