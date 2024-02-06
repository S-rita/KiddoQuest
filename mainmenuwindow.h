#ifndef MAINMENUWINDOW_H
#define MAINMENUWINDOW_H

#include <QMainWindow>
#include "loginwindow.h"



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

private:
    Ui::MainMenuWindow *ui;
    LoginWindow *loginwindow;
};

#endif // MAINMENUWINDOW_H
