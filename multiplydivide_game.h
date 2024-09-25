#ifndef MULTIPLYDIVIDE_GAME_H
#define MULTIPLYDIVIDE_GAME_H

#include <QMainWindow>
#include <QElapsedTimer>
#include "members.h"


namespace Ui {
class MultiplyDivide_game;
}

class MultiplyDivide_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit MultiplyDivide_game(Members &member, int index, QWidget *parent = nullptr);

    ~MultiplyDivide_game();
    void GenerateNum();
    void checkAnswers();

public slots:
    void DoneButton_clicked();

private slots:
    void on_exitButton_clicked();

private:
    Ui::MultiplyDivide_game *ui;
    QElapsedTimer timeTeller;
    int result;
    int currentScore = 0;
    int RoundGame = 0;
    Members member;
    int index;
};

#endif // EASYPLUSMINUS_GAME_H
