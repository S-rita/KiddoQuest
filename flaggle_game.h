#ifndef FLAGGLE_GAME_H
#define FLAGGLE_GAME_H

#include <QMainWindow>
#include "country.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class flaggle_game;
}
QT_END_NAMESPACE

class flaggle_game : public QMainWindow
{
    Q_OBJECT

public:
    flaggle_game(QWidget *parent = nullptr);
    ~flaggle_game();

private slots:
    void on_pushButton_clicked();

private:
    Ui::flaggle_game *ui;
    std::vector<Country> VecFlag;
    Country flag;

};
#endif // FLAGGLE_GAME_H
