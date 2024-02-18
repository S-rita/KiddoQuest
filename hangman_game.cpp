#include "hangman_game.h"
#include "./ui_hangman_game.h"
#include "englishwindow.h""
#include "word.h"
#include <vector>

Hangman_game::Hangman_game(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Hangman_game)
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
    b1 = new HangmanB1_game(this);
    b1 -> show();
}


void Hangman_game::on_B2Button_clicked()
{
    hide();
    b2 = new HangmanB2_game(this);
    b2 -> show();
}

void Hangman_game::on_goBackButton_clicked()
{
    hide();
    EnglishWindow *englishwindow = new EnglishWindow(this);
    englishwindow->show();
}

