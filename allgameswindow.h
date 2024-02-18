#ifndef ALLGAMESWINDOW_H
#define ALLGAMESWINDOW_H

#include <QMainWindow>
#include "settingwindow.h"
#include "geographywindow.h"
// #include "mathwindow.h"
#include "englishwindow.h"

namespace Ui {
class AllGamesWindow;
}

class AllGamesWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AllGamesWindow(QWidget *parent = nullptr);
    ~AllGamesWindow();

private slots:

    void on_settingButton_clicked();

    void on_geographyButton_clicked();

    void on_englishButton_clicked();

private:
    Ui::AllGamesWindow *ui;
    SettingWindow *settingwindow;
    GeographyWindow *geographywindow;
    // MathWindow *mathwindow;
    EnglishWindow *englishwindow;
};

#endif // ALLGAMESWINDOW_H
