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
    explicit Mapper_game(Members& member, int index, std::vector<Country> VecCountry, QWidget *parent = nullptr);
    ~Mapper_game();

protected:
    void keyPressEvent(QKeyEvent *event) override;

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
    QPixmap showPicMap(bool check);

};

#endif // MAPPER_GAME_H
