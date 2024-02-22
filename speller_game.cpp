#include "speller_game.h"
#include "ui_speller_game.h"
#include "englishwindow.h"

Speller_game::Speller_game(Members& member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Speller_game)
    , member(member)
    , index(index)
{
    ui->setupUi(this);
}

Speller_game::~Speller_game()
{
    delete ui;
}

void Speller_game::on_goBackButton_clicked()
{
    hide();
    EnglishWindow *englishwindow = new EnglishWindow(member, index, this);
    englishwindow->show();
}


void Speller_game::on_animalButton_clicked()
{
    hide();
    animalspeller = new AnimalSpeller_game(member, index, this);
    animalspeller->show();
}

void Speller_game::on_foodButton_clicked()
{
    hide();
    foodspeller = new FoodSpeller_game(member, index, this);
    foodspeller->show();
}

void Speller_game::on_jobButton_clicked()
{
    hide();
    jobspeller = new JobSpeller_game(member, index, this);
    jobspeller->show();
}

void Speller_game::on_placeButton_clicked()
{
    hide();
    placespeller = new PlaceSpeller_game(member, index, this);
    placespeller->show();
}

void Speller_game::on_thingButton_clicked()
{
    hide();
    thingspeller = new ThingSpeller_game(member, index, this);
    thingspeller->show();
}

