#ifndef FLAGGLE_GAME_H
#define FLAGGLE_GAME_H

#include <QMainWindow>
#include "country.h"
#include "members.h"
#include "QElapsedTimer"

namespace Ui {
class Flaggle_game;
}

class Flaggle_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit Flaggle_game(Members &member, int index, std::vector<Country>& VecCountry, QWidget *parent = nullptr);
    ~Flaggle_game();

private slots:
    void on_submitButton_clicked();
    void showPic(bool check);

    void on_exitButton_clicked();

private:
    Ui::Flaggle_game *ui;
    Members member;
    int index;
    int RoundGame = 9;
    int totalScore = 10;
    QElapsedTimer timer;
    std::vector<Country> VecCountry;
    Country flag;
};

#endif // FLAGGLE_GAME_H
