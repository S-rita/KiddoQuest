#ifndef PLACESPELLER_GAME_H
#define PLACESPELLER_GAME_H

#include <QMainWindow>
#include "objects.h"

namespace Ui {
class PlaceSpeller_game;
}

class PlaceSpeller_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlaceSpeller_game(QWidget *parent = nullptr);
    ~PlaceSpeller_game();

private slots:
    void on_submitButton_clicked();

private:
    Ui::PlaceSpeller_game *ui;
    std::vector<Objects> VecPlace;
    Objects place;
};

#endif // PLACESPELLER_GAME_H
