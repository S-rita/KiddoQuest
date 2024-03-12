#ifndef SPELLERPLAY_GAME_H
#define SPELLERPLAY_GAME_H

#include <QElapsedTimer>
#include <QMainWindow>
#include <QTimer>
#include "members.h"
#include "objects.h"
namespace Ui {
class SpellerPlay_game;
}

class SpellerPlay_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit SpellerPlay_game(Members &member,int index, std::vector<Objects> VecWord, int type, QWidget *parent = nullptr);
    ~SpellerPlay_game();

protected:
    void keyPressEvent(QKeyEvent *event) override;

private slots:
    void on_submitButton_clicked();
    void on_exitButton_clicked();

private:
    Ui::SpellerPlay_game *ui;
    std::vector<Objects> VecWord;
    Objects word;
    Members member;
    int index;
    int currentRound = 0;
    const int totalRounds = 5;
    const int maxAttempts = 1;
    int totalScore = 0;
    int attemptsRemaining[5] = {maxAttempts, maxAttempts, maxAttempts, maxAttempts, maxAttempts};
    QElapsedTimer timer;
    int type;
    QTimer *covertime;
};

#endif // SPELLERPLAY_GAME_H
