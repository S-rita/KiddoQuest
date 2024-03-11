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
    explicit easyPlusMinus_game(Members &member, int index, QWidget *parent = nullptr);
    ~easyPlusMinus_game();

public slots:
    void DoneButton_clicked();

protected:
    void keyPressEvent(QKeyEvent *event) override;

private slots:
    void on_exitButton_clicked();

private:
    Ui::easyPlusMinus_game *ui;
    QElapsedTimer EasyPlusMinus;
    int result;
    int currentScore = 0;
    int RoundGame = 0;
    Members member;
    int index;
    void GenerateNum();
    void checkAnswers(QString userInput);
};

#endif // EASYPLUSMINUS_GAME_H
