#include "allgameswindow.h"
#include "ui_allgameswindow.h"

AllGamesWindow::AllGamesWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AllGamesWindow)
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
    geographywindow = new GeographyWindow(this);
    geographywindow->show();
}


void AllGamesWindow::on_englishButton_clicked()
{
    hide();
    englishwindow = new EnglishWindow(this);
    englishwindow->show();
}

