#ifndef ENGLISHWINDOW_H
#define ENGLISHWINDOW_H

#include <QMainWindow>
#include "speller_game.h"
#include "hangman_game.h"
#include "members.h"
#include "howto.h"

namespace Ui {
class EnglishWindow;
}

class EnglishWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EnglishWindow(Members &member, int index, QWidget *parent = nullptr);
    ~EnglishWindow();

private slots:
    void on_goBackButton_clicked();

    void on_SpellerButton_clicked();

    void on_HangmanButton_clicked();

    void on_Info_hangman_clicked();

    void on_Info_speller_clicked();

private:
    Ui::EnglishWindow *ui;
    Speller_game *spellergame;
    Hangman_game *hangmangame;
    Members member;
    int index;
    Howto *howtoplay;
};

#endif // ENGLISHWINDOW_H
