#ifndef SETTINGMAINMENU_H
#define SETTINGMAINMENU_H

#include <QMainWindow>
#include "backgroundmusicmanager.h"

namespace Ui {
class SettingMainMenu;
}

class SettingMainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit SettingMainMenu(QWidget *parent = nullptr);
    ~SettingMainMenu();

private slots:
    void on_pushButton_clicked();
    void adjustVolume(int volume);

private:
    Ui::SettingMainMenu *ui;
    BackgroundMusicManager& backgroundMusicManager;

    static BackgroundMusicManager globalBackgroundMusicManager;

};

#endif // SETTINGMAINMENU_H
