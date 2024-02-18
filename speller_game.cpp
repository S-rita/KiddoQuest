#include "speller_game.h"
#include "ui_speller_game.h"
#include "englishwindow.h"

Speller_game::Speller_game(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Speller_game)
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
    EnglishWindow *englishwindow = new EnglishWindow(this);
    englishwindow->show();
}


void Speller_game::on_animalButton_clicked()
{
    hide();
    animalspeller = new AnimalSpeller_game(this);
    animalspeller->show();
}

void Speller_game::on_foodButton_clicked()
{
    hide();
    foodspeller = new FoodSpeller_game(this);
    foodspeller->show();
}

void Speller_game::on_jobButton_clicked()
{
    hide();
    jobspeller = new JobSpeller_game(this);
    jobspeller->show();
}

void Speller_game::on_placeButton_clicked()
{
    hide();
    placespeller = new PlaceSpeller_game(this);
    placespeller->show();
}

void Speller_game::on_thingButton_clicked()
{
    hide();
    thingspeller = new ThingSpeller_game(this);
    thingspeller->show();
}

