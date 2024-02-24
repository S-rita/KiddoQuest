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

void GeographyWindow::on_Info_flaggle_clicked()
{
    howtoplay = new Howto(this);
    howtoplay->showDescription("From the unknown flag, you’ve 10 guesses\n"
                               "to ENTER the correct COUNTRY.\n\n"
                               "The more you guessed,\n"
                               "the more flag will be revealed.\n");
    howtoplay->show();
}

void GeographyWindow::on_Info_mapper_clicked()
{
    howtoplay = new Howto(this);
    howtoplay->showDescription("From the unknown shape, you’ve 10 guesses\n"
                               "to ENTER the correct COUNTRY.\n\n"
                               "Each guess will give hints for\n"
                               "the correct continent, language,\n"
                               "and neighbor country.");
    howtoplay->show();
}
