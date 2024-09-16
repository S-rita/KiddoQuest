#ifndef ALLGAMESWINDOW_H
#define ALLGAMESWINDOW_H

#include <QMainWindow>
#include "settingwindow.h"
#include "geographywindow.h"
#include "mathwindow.h"
#include "englishwindow.h"
#include "members.h"

namespace Ui {
class AllGamesWindow;
}

class AllGamesWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AllGamesWindow(Members& member, int index, QWidget *parent = nullptr);
    ~AllGamesWindow();

private slots:

    void on_settingButton_clicked();

    void on_geographyButton_clicked();

    void on_englishButton_clicked();

    void on_mathButton_clicked();

private:
    Ui::AllGamesWindow *ui;
    SettingWindow *settingwindow;
    GeographyWindow *geographywindow;
    MathWindow *mathwindow;
    EnglishWindow *englishwindow;
    Members member;
    int index;
};

#endif // ALLGAMESWINDOW_H
