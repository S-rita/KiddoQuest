#ifndef HANGMAN_GAME_H
#define HANGMAN_GAME_H

#include <QMainWindow>
#include "hangmanplay_game.h"
#include "hangmanb2_game.h"
#include "members.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Hangman_game;
}
QT_END_NAMESPACE

class Hangman_game : public QMainWindow
{
    Q_OBJECT

public:
    Hangman_game(Members &member, int index, QWidget *parent = nullptr);
    ~Hangman_game();

private slots:
    void on_B1Button_clicked();

    void on_B2Button_clicked();

    void on_goBackButton_clicked();

private:
    Ui::Hangman_game *ui;
    HangmanPlay_game *b1;
    HangmanPlay_game *b2;
    Members member;
    int index;
    std::vector<Word> VecB1;
    std::vector<Word> VecB2;
};
#endif // HANGMAN_GAME_H
