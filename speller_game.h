#ifndef SPELLER_GAME_H
#define SPELLER_GAME_H

#include <QMainWindow>
#include "spellerplay_game.h"
#include "foodspeller_game.h"
#include "jobspeller_game.h"
#include "placespeller_game.h"
#include "thingspeller_game.h"
#include "members.h"
#include "howto.h"
#include "objects.h"

namespace Ui {
class Speller_game;
}

class Speller_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit Speller_game(Members &member, int index, QWidget *parent = nullptr);
    ~Speller_game();

private slots:
    void on_goBackButton_clicked();

    void on_animalButton_clicked();

    void on_foodButton_clicked();

    void on_jobButton_clicked();

    void on_placeButton_clicked();

    void on_thingButton_clicked();

    void on_Info_flaggle_clicked();

private:
    Ui::Speller_game *ui;
    SpellerPlay_game *animalspeller;
    SpellerPlay_game *foodspeller;
    SpellerPlay_game *jobspeller;
    SpellerPlay_game *placespeller;
    SpellerPlay_game *thingspeller;
    Howto *howtoplay;
    Members member;
    int index;
    std::vector<Objects> VecAnimal;
    std::vector<Objects> VecFood;
    std::vector<Objects> VecJob;
    std::vector<Objects> VecPlace;
    std::vector<Objects> VecThing;
};

#endif // SPELLER_GAME_H
