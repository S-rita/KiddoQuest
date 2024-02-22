#ifndef ANIMALSPELLER_GAME_H
#define ANIMALSPELLER_GAME_H

#include <QMainWindow>
#include "objects.h"
#include "members.h"

namespace Ui {
class AnimalSpeller_game;
}

class AnimalSpeller_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit AnimalSpeller_game(Members& member, int index, QWidget *parent = nullptr);
    ~AnimalSpeller_game();

private slots:
    void on_submitButton_clicked();

private:
    Ui::AnimalSpeller_game *ui;
    std::vector<Objects> VecAnimal;
    Objects animal;
    Members member;
    int index;
};

#endif // ANIMALSPELLER_GAME_H


