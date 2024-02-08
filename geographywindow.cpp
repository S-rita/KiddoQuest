#include "geographywindow.h"
#include "ui_geographywindow.h"
#include "allgameswindow.h"

GeographyWindow::GeographyWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GeographyWindow)
{
    ui->setupUi(this);
}

GeographyWindow::~GeographyWindow()
{
    delete ui;
}

void GeographyWindow::on_FlaggleButton_clicked()
{
    hide();
    flagglegame = new flaggle_game(this);
    flagglegame->show();
}


void GeographyWindow::on_goBackButton_clicked()
{
    hide();
    AllGamesWindow *allgamesWindow = new AllGamesWindow(this);
    allgamesWindow->show();
}

