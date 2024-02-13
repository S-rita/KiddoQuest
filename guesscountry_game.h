#ifndef GUESSCOUNTRY_GAME_H
#define GUESSCOUNTRY_GAME_H

#include <QMainWindow>
#include "country.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class GuessCountry_game;
}
QT_END_NAMESPACE

class GuessCountry_game : public QMainWindow
{
    Q_OBJECT

public:
    GuessCountry_game(QWidget *parent = nullptr);
    ~GuessCountry_game();
    QPixmap showPic(bool check);

private slots:
    void on_pushButton_clicked();

private:
    Ui::GuessCountry_game *ui;
    std::vector<Country> VecCountry;
    Country country;
};
#endif // GUESSCOUNTRY_GAME_H
