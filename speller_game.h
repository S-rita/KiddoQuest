#ifndef SPELLER_GAME_H
#define SPELLER_GAME_H

#include <QMainWindow>
#include "animalspeller_game.h"
#include "foodspeller_game.h"
#include "jobspeller_game.h"
#include "placespeller_game.h"
#include "thingspeller_game.h"



namespace Ui {
class Speller_game;
}

class Speller_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit Speller_game(QWidget *parent = nullptr);
    ~Speller_game();

private slots:
    void on_goBackButton_clicked();

    void on_animalButton_clicked();

    void on_foodButton_clicked();

    void on_jobButton_clicked();

    void on_placeButton_clicked();

    void on_thingButton_clicked();


private:
    Ui::Speller_game *ui;
    AnimalSpeller_game *animalspeller;
    FoodSpeller_game *foodspeller;
    JobSpeller_game *jobspeller;
    PlaceSpeller_game *placespeller;
    ThingSpeller_game *thingspeller;

};

#endif // SPELLER_GAME_H
