#ifndef PLACESPELLER_GAME_H
#define PLACESPELLER_GAME_H

#include <QMainWindow>
#include "objects.h"
#include "members.h"
#include <QElapsedTimer>

namespace Ui {
class PlaceSpeller_game;
}

class PlaceSpeller_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlaceSpeller_game(Members& member, int index, QWidget *parent = nullptr);
    ~PlaceSpeller_game();

private slots:
    void on_submitButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::PlaceSpeller_game *ui;
    std::vector<Objects> VecPlace;
    Objects place;
    Members member;
    int index;
    int currentRound = 0;
    const int totalRounds = 5;
    const int maxAttempts = 1;
    int totalScore = 0;
    int attemptsRemaining[5] = { maxAttempts, maxAttempts, maxAttempts, maxAttempts, maxAttempts };
    QElapsedTimer timer;
};

#endif // PLACESPELLER_GAME_H
