#ifndef PLUSMINUSWINDOW_H
#define PLUSMINUSWINDOW_H

#include <QMainWindow>
#include "easyplusminus_game.h"
#include "hardplusminus_game.h"
#include "members.h"
#include "howto.h"

namespace Ui {
class PlusMinusWindow;
}

class PlusMinusWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlusMinusWindow(Members& member, int index, QWidget *parent = nullptr);
    ~PlusMinusWindow();

protected:
    void keyPressEvent(QKeyEvent *event) override;

private slots:
    void on_easyButton_clicked();
    void on_hardButton_clicked();
    void on_goBackButton_clicked();
    void on_Info_normal_clicked();
    void on_Info_hard_clicked();

private:
    Ui::PlusMinusWindow *ui;
    easyPlusMinus_game *easyplusminusgame;
    hardPlusMinus_game *hardplusminusgame;
    Members member;
    int index;
    Howto *howtoplay;
};

#endif // PLUSMINUSWINDOW_H
