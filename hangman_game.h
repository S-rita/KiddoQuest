#ifndef HANGMAN_GAME_H
#define HANGMAN_GAME_H

#include <QMainWindow>
#include "hangmanb1_game.h"
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
    Hangman_game(Members& member, int index, QWidget *parent = nullptr);
    ~Hangman_game();

private slots:
    void on_B1Button_clicked();

    void on_B2Button_clicked();

    void on_goBackButton_clicked();

private:
    Ui::Hangman_game *ui;
    HangmanB1_game *b1;
    HangmanB2_game *b2;
    Members member;
    int index;
};
#endif // HANGMAN_GAME_H
