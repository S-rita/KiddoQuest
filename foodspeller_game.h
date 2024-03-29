#ifndef FOODSPELLER_GAME_H
#define FOODSPELLER_GAME_H

#include <QMainWindow>
#include "objects.h"
#include "members.h"
#include <QElapsedTimer>
namespace Ui {
class FoodSpeller_game;
}

class FoodSpeller_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit FoodSpeller_game(Members& member, int index, QWidget *parent = nullptr);
    ~FoodSpeller_game();

protected:
    void keyPressEvent(QKeyEvent *event) override;

private slots:
    void on_submitButton_clicked();
    void on_exitButton_clicked();

private:
    Ui::FoodSpeller_game *ui;
    std::vector<Objects> VecFood;
    Objects food;
    Members member;
    int index;
    int currentRound = 0;
    const int totalRounds = 5;
    const int maxAttempts = 1;
    int totalScore = 0;
    int attemptsRemaining[5] = { maxAttempts, maxAttempts, maxAttempts, maxAttempts, maxAttempts };
    QElapsedTimer timer;
};

#endif // FOODSPELLER_GAME_H
