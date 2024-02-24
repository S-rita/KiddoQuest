#ifndef ANIMALSPELLER_GAME_H
#define ANIMALSPELLER_GAME_H

#include <QMainWindow>
#include "objects.h"
#include "members.h"
#include <QElapsedTimer>
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

    void on_exitButton_clicked();

private:
    Ui::AnimalSpeller_game *ui;
    std::vector<Objects> VecAnimal;
    Objects animal;
    Members member;
    int index;
    int currentRound = 0;
    const int totalRounds = 5;
    const int maxAttempts = 1;
    int totalScore = 0;
    int attemptsRemaining[5] = { maxAttempts, maxAttempts, maxAttempts, maxAttempts, maxAttempts };
    QElapsedTimer timer;

};

#endif // ANIMALSPELLER_GAME_H
