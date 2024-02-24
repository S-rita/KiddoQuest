#ifndef EASYPLUSMINUS_GAME_H
#define EASYPLUSMINUS_GAME_H

#include <QMainWindow>
#include <QElapsedTimer>
#include "members.h"


namespace Ui {
class easyPlusMinus_game;
}

class easyPlusMinus_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit easyPlusMinus_game(Members& member, int index, QWidget *parent = nullptr);
    ~easyPlusMinus_game();
    void GenerateNum();
    void checkAnswers();

public slots:
    void DoneButton_clicked();

private slots:
    void on_exitButton_clicked();

private:
    Ui::easyPlusMinus_game *ui;
    QElapsedTimer TimeTeller;
    int result;
    int currentScore = 0;
    int RoundGame = 0;
    Members member;
    int index;
};

#endif // EASYPLUSMINUS_GAME_H