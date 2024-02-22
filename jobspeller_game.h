#ifndef JOBSPELLER_GAME_H
#define JOBSPELLER_GAME_H

#include <QMainWindow>
#include "objects.h"
#include "members.h"

namespace Ui {
class JobSpeller_game;
}

class JobSpeller_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit JobSpeller_game(Members& member, int index, QWidget *parent = nullptr);
    ~JobSpeller_game();

private slots:
    void on_submitButton_clicked();

private:
    Ui::JobSpeller_game *ui;
    std::vector<Objects> VecJob;
    Objects job;
    Members member;
    int index;
};

#endif // JOBSPELLER_GAME_H

