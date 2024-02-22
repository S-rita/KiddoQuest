#include "geographywindow.h"
#include "ui_geographywindow.h"
#include "allgameswindow.h"

GeographyWindow::GeographyWindow(Members& member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GeographyWindow)
    , member(member)
    , index(index)
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
    flagglegame = new Flaggle_game(member, index, this);
    flagglegame->show();
}


void GeographyWindow::on_goBackButton_clicked()
{
    hide();
    AllGamesWindow *allgamesWindow = new AllGamesWindow(member, index, this);
    allgamesWindow->show();
}


void GeographyWindow::on_MapperButton_clicked()
{
    hide();
    mappergame = new Mapper_game(member, index, this);
    mappergame->show();
}


void GeographyWindow::on_Info_mapper_clicked()
{
    howtomapper = new HowtoMapper(this);
    howtomapper->show();
}

