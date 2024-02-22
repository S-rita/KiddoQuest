#ifndef JOBSPELLER_GAME_H
#define JOBSPELLER_GAME_H

#include <QMainWindow>
#include "objects.h"

namespace Ui {
class JobSpeller_game;
}

class JobSpeller_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit JobSpeller_game(QWidget *parent = nullptr);
    ~JobSpeller_game();

private slots:
    void on_submitButton_clicked();

private:
    Ui::JobSpeller_game *ui;
    std::vector<Objects> VecJob;
    Objects job;
};

#endif // JOBSPELLER_GAME_H

