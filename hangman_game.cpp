#include "hangman_game.h"
#include "./ui_hangman_game.h"
#include "englishwindow.h"
#include<QKeyEvent>

Hangman_game::Hangman_game(Members& member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Hangman_game)
    , member(member)
    , index(index)
{
    ui->setupUi(this);
}

Hangman_game::~Hangman_game()
{
    delete ui;
}

void Hangman_game::on_B1Button_clicked()
{
    hide();
    b1 = new HangmanB1_game(member, index, this);
    b1 -> show();
}


void Hangman_game::on_B2Button_clicked()
{
    hide();
    b2 = new HangmanB2_game(member, index, this);
    b2 -> show();
}

void Hangman_game::on_goBackButton_clicked()
{
    hide();
    EnglishWindow *englishwindow = new EnglishWindow(member, index, this);
    englishwindow->show();
}

void Hangman_game::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Shift) {
        event->accept();
        on_goBackButton_clicked();
    } else {
        QMainWindow::keyPressEvent(event);
    }
}
