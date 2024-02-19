#ifndef GAMECOMPLETE_H
#define GAMECOMPLETE_H

#include <QDialog>

namespace Ui {
class GameComplete;
}

class GameComplete : public QDialog
{
    Q_OBJECT

public:
    explicit GameComplete(QWidget *parent = nullptr);
    ~GameComplete();
    void setScore(int score);
    void setTime(int time);
    void lose();

private slots:
    void on_buttonBox_accepted();


private:
    Ui::GameComplete *ui;
};

#endif // GAMECOMPLETE_H

