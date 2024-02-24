#ifndef QUICKMATHWINDOW_H
#define QUICKMATHWINDOW_H

#include <QMainWindow>
#include "plusminuswindow.h"
#include "multiplydivide_game.h"
#include "members.h"

namespace Ui {
class QuickMathWindow;
}

class QuickMathWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QuickMathWindow(Members& member, int index, QWidget *parent = nullptr);
    ~QuickMathWindow();

private slots:
    void on_plus_minusButton_clicked();

    void on_multiply_divideButton_clicked();

    void on_goBackButton_clicked();

private:
    Ui::QuickMathWindow *ui;
    PlusMinusWindow *plusminuswindow;
    MultiplyDivide_game *multiplydividegame;
    Members member;
    int index;
};

#endif // QUICKMATHWINDOW_H
