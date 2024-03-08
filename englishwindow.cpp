#include "englishwindow.h"
#include "ui_englishwindow.h"
#include "allgameswindow.h"

EnglishWindow::EnglishWindow(Members &member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EnglishWindow)
    , member(member)
    , index(index)
{
    ui->setupUi(this);
}

EnglishWindow::~EnglishWindow()
{
    delete ui;
}

void EnglishWindow::on_goBackButton_clicked()
{
    hide();
    AllGamesWindow *allgamesWindow = new AllGamesWindow(member, index, this);
    allgamesWindow->show();
}


void EnglishWindow::on_SpellerButton_clicked()
{
    hide();
    spellergame = new Speller_game(member, index, this);
    spellergame->show();
}


void EnglishWindow::on_HangmanButton_clicked()
{
    hide();
    hangmangame = new Hangman_game(member, index, this);
    hangmangame->show();
}

void EnglishWindow::on_Info_hangman_clicked()
{
    howtoplay = new Howto(this);
    howtoplay->showDescription("You have to guess the word within 10 guesses.\n"
                               "Difficulty levels: B1, B2, and C1.\n\n"
                               "Wrong letter: 1 strike.\n"
                               "Correct letter: automaticly fill the line\n"
                               "and marked as used.");
    howtoplay->show();
}


void EnglishWindow::on_Info_speller_clicked()
{
    howtoplay = new Howto(this);
    howtoplay->showDescription("There will be 5 pictures.\n"
                               "You can choose 5 topics:\nAnimals, Foods, Jobs, Places, or Objects.\n\n"
                               "You can guess up to 2 times.\n"
                               "2 points: Correct guess in 1st time.\n"
                               "1 point:  Correct guess in 2nd time.\n"
                               "0 point:  Failed to guess correctly.\n");
    howtoplay->show();
}

