#ifndef MAINMENUWINDOW_H
#define MAINMENUWINDOW_H

#include <QMainWindow>
#include "loginwindow.h"
#include "settingwindow.h"
#include "allgameswindow.h"
#include <QPropertyAnimation>


namespace Ui {
class MainMenuWindow;
}

class MainMenuWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMenuWindow(QWidget *parent = nullptr);
    ~MainMenuWindow();

private slots:
    void on_startButton_clicked();

    void on_exitButton_clicked();

    void on_settingButton_clicked();

private:
    Ui::MainMenuWindow *ui;
    LoginWindow *loginwindow;
    SettingWindow *settingwindow;
    QPropertyAnimation *animation;
    AllGamesWindow *allgameswindow;
};

#endif // MAINMENUWINDOW_H
