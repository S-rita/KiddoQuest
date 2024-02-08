#ifndef ALLGAMESWINDOW_H
#define ALLGAMESWINDOW_H

#include <QMainWindow>
#include "settingwindow.h"
#include "geographywindow.h"
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

    void on_englishButton_3_clicked();

private:
    Ui::AllGamesWindow *ui;
    SettingWindow *settingwindow;
    GeographyWindow *geographywindow;
};

#endif // ALLGAMESWINDOW_H
