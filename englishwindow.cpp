#include "englishwindow.h"
#include "ui_englishwindow.h"
#include "allgameswindow.h"

EnglishWindow::EnglishWindow(Members& member, int index, QWidget *parent)
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

