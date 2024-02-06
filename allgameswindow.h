#ifndef ALLGAMESWINDOW_H
#define ALLGAMESWINDOW_H

#include <QMainWindow>
#include "settingwindow.h"

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

private:
    Ui::AllGamesWindow *ui;
    SettingWindow *settingwindow;
};

#endif // ALLGAMESWINDOW_H
