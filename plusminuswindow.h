#ifndef PLUSMINUSWINDOW_H
#define PLUSMINUSWINDOW_H

#include <QMainWindow>
#include "easyplusminus_game.h"
#include "hardplusminus_game.h"
#include "members.h"


namespace Ui {
class PlusMinusWindow;
}

class PlusMinusWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlusMinusWindow(Members& member, int index, QWidget *parent = nullptr);
    ~PlusMinusWindow();

private slots:
    void on_easyButton_clicked();

    void on_hardButton_clicked();

    void on_goBackButton_clicked();

private:
    Ui::PlusMinusWindow *ui;
    easyPlusMinus_game *easyplusminusgame;
    hardPlusMinus_game *hardplusminusgame;
    Members member;
    int index;

};

#endif // PLUSMINUSWINDOW_H
