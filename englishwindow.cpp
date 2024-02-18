#include "englishwindow.h"
#include "ui_englishwindow.h"
#include "allgameswindow.h"

EnglishWindow::EnglishWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EnglishWindow)
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
    AllGamesWindow *allgamesWindow = new AllGamesWindow(this);
    allgamesWindow->show();
}


void EnglishWindow::on_SpellerButton_clicked()
{
    hide();
    spellergame = new Speller_game(this);
    spellergame->show();
}


void EnglishWindow::on_HangmanButton_clicked()
{
    hide();
    hangmangame = new Hangman_game(this);
    hangmangame->show();
}

