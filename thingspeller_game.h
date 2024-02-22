#ifndef THINGSPELLER_GAME_H
#define THINGSPELLER_GAME_H

#include <QMainWindow>
#include "objects.h"
#include "members.h"


namespace Ui {
class ThingSpeller_game;
}

class ThingSpeller_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit ThingSpeller_game(Members& member, int index, QWidget *parent = nullptr);
    ~ThingSpeller_game();

private slots:
    void on_submitButton_clicked();

private:
    Ui::ThingSpeller_game *ui;
    std::vector<Objects> VecThing;
    Objects thing;
    Members member;
    int index;
};

#endif // THINGSPELLER_GAME_H
