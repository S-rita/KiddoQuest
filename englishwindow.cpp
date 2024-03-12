#include "englishwindow.h"
#include "ui_englishwindow.h"
#include "allgameswindow.h"
#include <QKeyEvent>

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

void EnglishWindow::on_Info_hangman_clicked()
{
    howtoplay = new Howto(this);
    howtoplay->showDescription("You have to guess the word within 10 attempts.\n"
                               "Difficulty levels: B1 and B2.\n\n"
                               "Wrong letter: 1 strike.\n"
                               "Correct letter: automatically fill the line\n"
                               "and be marked as used.");
    howtoplay->show();
}


void EnglishWindow::on_Info_speller_clicked()
{
    howtoplay = new Howto(this);
    howtoplay->showDescription("You can choose 5 topics:\nAnimals, Foods, Jobs, Places, or Objects.\n"
                               "For each game, there're 5 pictures.\n\n"
                               "You can guess up to 2 times.\n"
                               "2 points: Correct guess in 1st try.\n"
                               "1 point:  Correct guess in 2nd try.\n"
                               "0 point:  Failed to guess correctly.\n");
    howtoplay->show();
}

void EnglishWindow::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Shift) {
        event->accept();
        on_goBackButton_clicked();
    } else {
        QMainWindow::keyPressEvent(event);
    }
}
