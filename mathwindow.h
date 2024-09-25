#ifndef MATHWINDOW_H
#define MATHWINDOW_H

#include <QMainWindow>
#include "timeteller_game.h"
#include "quickmathwindow.h"
#include "members.h"
#include "howto.h"

namespace Ui {
class MathWindow;
}

class MathWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MathWindow(Members &member, int index, QWidget *parent = nullptr);
    ~MathWindow();

private slots:
    void on_goBackButton_clicked();

    void on_QuickMathButton_clicked();

    void on_TimeTellerButton_clicked();

    void on_Info_timeteller_clicked();

    void on_Info_quickmath_clicked();

private:
    Ui::MathWindow *ui;
    QuickMathWindow *quickmathwindow;
    TimeTeller_game *timetellergame;
    Members member;
    int index;
    Howto *howtoplay;
};

#endif // MATHWINDOW_H
