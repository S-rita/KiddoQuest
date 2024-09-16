#ifndef MAPPER_GAME_H
#define MAPPER_GAME_H

#include <QMainWindow>
#include "country.h"
#include "members.h"
#include <QElapsedTimer>

namespace Ui {
class Mapper_game;
}

class Mapper_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit Mapper_game(Members& member, int index, QWidget *parent = nullptr);
    ~Mapper_game();
    QPixmap showPicMap(bool check);

private slots:
    void on_submitButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::Mapper_game *ui;
    std::vector<Country> VecMap;
    Country country;
    Members member;
    int index;    
    int RoundGame = 1;
    QElapsedTimer timer;
};

#endif // MAPPER_GAME_H
