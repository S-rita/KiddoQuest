#ifndef HARDPLUSMINUS_GAME_H
#define HARDPLUSMINUS_GAME_H

#include <QMainWindow>
#include <QElapsedTimer>
#include "members.h"

namespace Ui {
class hardPlusMinus_game;
}

class hardPlusMinus_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit hardPlusMinus_game(Members &member, int index, QWidget *parent = nullptr);
    ~hardPlusMinus_game();

public slots:
    void DoneButton_clicked();

protected:
    void keyPressEvent(QKeyEvent *event) override;

private slots:
    void on_exitButton_clicked();

private:
    Ui::hardPlusMinus_game *ui;
    QElapsedTimer timer;
    int result;
    int currentScore = 0;
    int RoundGame = 0;
    Members member;
    int index;
    void GenerateNum();
    void checkAnswers(QString userInput);
};

#endif // EASYPLUSMINUS_GAME_H
