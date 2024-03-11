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

public slots:
    void DoneButton_clicked();

protected:
    void keyPressEvent(QKeyEvent *event) override;

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
    void GenerateNum();
    void checkAnswers(QString userInput);
};

#endif // EASYPLUSMINUS_GAME_H
