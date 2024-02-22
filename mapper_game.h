#ifndef MAPPER_GAME_H
#define MAPPER_GAME_H

#include <QMainWindow>
#include "country.h"
#include "members.h"

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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Mapper_game *ui;
    std::vector<Country> VecMap;
    Country country;
    Members member;
    int index;
};

#endif // MAPPER_GAME_H
