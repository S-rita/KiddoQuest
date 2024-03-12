#ifndef PLUSMINUSPLAY_GAME_H
#define PLUSMINUSPLAY_GAME_H

#include <QElapsedTimer>
#include <QMainWindow>
#include "members.h"

namespace Ui {
class PlusMinusPlay_game;
}

class PlusMinusPlay_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlusMinusPlay_game(Members &member, int index, int scope, QWidget *parent = nullptr);
    ~PlusMinusPlay_game();

public slots:
    void DoneButton_clicked();

protected:
    void keyPressEvent(QKeyEvent *event) override;

private slots:
    void on_exitButton_clicked();

private:
    Ui::PlusMinusPlay_game *ui;
    QElapsedTimer timer;
    int result;
    int currentScore = 0;
    int RoundGame = 0;
    Members member;
    int index;
    void GenerateNum();
    void checkAnswers(QString userInput);
    int scope;
};

#endif // EASYPLUSMINUS_GAME_H
