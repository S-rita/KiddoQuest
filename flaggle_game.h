#ifndef FLAGGLE_GAME_H
#define FLAGGLE_GAME_H

#include <QMainWindow>
#include "country.h"

namespace Ui {
class Flaggle_game;
}

class Flaggle_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit Flaggle_game(QWidget *parent = nullptr);
    ~Flaggle_game();

private slots:
    void on_submitButton_clicked();
    void showPic(bool check);

    void on_pushButton_clicked();

private:
    Ui::Flaggle_game *ui;
    std::vector<Country> VecFlag;
    Country flag;
};

#endif // FLAGGLE_GAME_H
