#ifndef FOODSPELLER_GAME_H
#define FOODSPELLER_GAME_H

#include <QMainWindow>
#include "objects.h"
#include "members.h"

namespace Ui {
class FoodSpeller_game;
}

class FoodSpeller_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit FoodSpeller_game(Members& member, int index, QWidget *parent = nullptr);
    ~FoodSpeller_game();

private slots:

    void on_submitButton_clicked();

private:
    Ui::FoodSpeller_game *ui;
    std::vector<Objects> VecFood;
    Objects food;
    Members member;
    int index;
};

#endif // FOODSPELLER_GAME_H
