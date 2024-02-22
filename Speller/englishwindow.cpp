#include "englishwindow.h"
#include "ui_englishwindow.h"

EnglishWindow::EnglishWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EnglishWindow)
{
    ui->setupUi(this);
}

EnglishWindow::~EnglishWindow()
{
    delete ui;
}

void EnglishWindow::on_animalsButton_clicked()
{
    hide();
    animalspeller = new AnimalSpeller_game(this);
    animalspeller -> show();
}


void EnglishWindow::on_thingsButton_clicked()
{
    hide();
    thingspeller = new ThingSpeller_game(this);
    thingspeller -> show();
}


void EnglishWindow::on_placesButton_clicked()
{
    hide();
    placespeller = new PlaceSpeller_game(this);
    placespeller -> show();
}


void EnglishWindow::on_jobsButton_clicked()
{
    hide();
    jobspeller = new JobSpeller_game(this);
    jobspeller -> show();
}


void EnglishWindow::on_foodsButton_clicked()
{
    hide();
    foodspeller = new FoodSpeller_game(this);
    foodspeller -> show();
}

