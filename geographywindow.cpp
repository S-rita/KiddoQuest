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
    flagglegame = new Flaggle_game(this);
    flagglegame->show();
}


void GeographyWindow::on_goBackButton_clicked()
{
    hide();
    AllGamesWindow *allgamesWindow = new AllGamesWindow(this);
    allgamesWindow->show();
}


void GeographyWindow::on_MapperButton_clicked()
{
    hide();
    mappergame = new Mapper_game(this);
    mappergame->show();
}


void GeographyWindow::on_Info_mapper_clicked()
{
    howtomapper = new HowtoMapper(this);
    howtomapper->show();
}

