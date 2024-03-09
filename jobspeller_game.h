#ifndef JOBSPELLER_GAME_H
#define JOBSPELLER_GAME_H

#include <QMainWindow>
#include "objects.h"
#include "members.h"
#include <QElapsedTimer>


namespace Ui {
class JobSpeller_game;
}

class JobSpeller_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit JobSpeller_game(Members& member, int index, QWidget *parent = nullptr);
    ~JobSpeller_game();

private slots:
    void on_submitButton_clicked();
    void on_exitButton_clicked();

private:
    Ui::JobSpeller_game *ui;
    std::vector<Objects> VecJob;
    Objects job;
    Members member;
    int index;
    int currentRound = 0;
    const int totalRounds = 5;
    const int maxAttempts = 1;
    int totalScore = 0;
    int attemptsRemaining[5] = { maxAttempts, maxAttempts, maxAttempts, maxAttempts, maxAttempts };
    QElapsedTimer timer;
};

#endif // JOBSPELLER_GAME_H
