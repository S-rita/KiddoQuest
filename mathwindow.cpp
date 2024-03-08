#include "mathwindow.h"
#include "ui_mathwindow.h"
#include "allgameswindow.h"


MathWindow::MathWindow(Members &member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MathWindow)
    , member(member)
    , index(index)
{
    ui->setupUi(this);
}

MathWindow::~MathWindow()
{
    delete ui;
}

void MathWindow::on_goBackButton_clicked()
{
    hide();
    AllGamesWindow *allgamesWindow = new AllGamesWindow(member, index, this);
    allgamesWindow->show();
}

void MathWindow::on_QuickMathButton_clicked()
{
    hide();
    quickmathwindow = new QuickMathWindow(member, index, this);
    quickmathwindow->show();
}

void MathWindow::on_TimeTellerButton_clicked()
{
    hide();
    timetellergame = new TimeTeller_game(member, index, this);
    timetellergame->show();
}

void MathWindow::on_Info_timeteller_clicked()
{
    howtoplay = new Howto(this);
    howtoplay->showDescription("There are 10 rounds for each game.\n\n"
                               "From a random clock shown,\n"
                               "you have to enter the correct time in\n"
                               "12-hour format (00:00),\n"
                               "24-hour format (00:00AM/PM),\n"
                               "and in a sentence.");
    howtoplay->show();
}


void MathWindow::on_Info_quickmath_clicked()
{
    howtoplay = new Howto(this);
    howtoplay->showDescription("There are 10 rounds for each game.\n\n"
                               "For each question,\n"
                               "you need to enter the correct answer\n"
                               "in one try.");
    howtoplay->show();
}

