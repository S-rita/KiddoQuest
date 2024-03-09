#ifndef SETTINGWINDOW_H
#define SETTINGWINDOW_H

#include <QMainWindow>
#include "seeuser.h"
#include "members.h"
#include "backgroundmusicmanager.h"

namespace Ui {
class SettingWindow;
}

class SettingWindow : public QMainWindow
{
    Q_OBJECT

public:
    SettingWindow(Members& member, int index, QWidget *parent = nullptr);
    ~SettingWindow();

private slots:
    void on_quitButton_clicked();
    void on_pushButton_clicked();
    void on_userButton_clicked();
    void on_signoutButton_clicked();
    void adjustVolume(int volume);

private:
    Ui::SettingWindow *ui;
    seeUser *seeuser;
    Members& member;
    int index;
    BackgroundMusicManager& backgroundMusicManager;

    // Declare a global instance of BackgroundMusicManager
    static BackgroundMusicManager globalBackgroundMusicManager;
};

#endif // SETTINGWINDOW_H
