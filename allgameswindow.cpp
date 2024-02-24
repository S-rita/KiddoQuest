#include "allgameswindow.h"
#include "ui_allgameswindow.h"

AllGamesWindow::AllGamesWindow(Members& member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AllGamesWindow)
    , member(member)
    , index(index)
{
    ui->setupUi(this);
}

AllGamesWindow::~AllGamesWindow()
{
    delete ui;
}

void AllGamesWindow::on_settingButton_clicked()
{
    settingwindow = new SettingWindow(this);
    settingwindow->show();
}


void AllGamesWindow::on_geographyButton_clicked()
{
    hide();
    geographywindow = new GeographyWindow(member, index, this);
    geographywindow->show();
}


void AllGamesWindow::on_englishButton_clicked()
{
    hide();
    englishwindow = new EnglishWindow(member, index, this);
    englishwindow->show();
}

void AllGamesWindow::on_mathButton_clicked()
{
    hide();
    mathwindow = new MathWindow(member, index, this);
    mathwindow->show();
}
