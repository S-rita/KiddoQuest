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




void AllGamesWindow::on_englishButton_3_clicked()
{
    hide();
    geographywindow = new GeographyWindow(this);
    geographywindow->show();
}

