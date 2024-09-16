#ifndef SETTINGWINDOW_H
#define SETTINGWINDOW_H

#include <QMainWindow>
#include "seeuser.h"
#include "members.h"

namespace Ui {
class SettingWindow;
}

class SettingWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SettingWindow(Members &member, int index, QWidget *parent = nullptr);
    ~SettingWindow();

private slots:
    void on_quitButton_clicked();

    void on_pushButton_clicked();

    void on_userButton_clicked();

    void on_signoutButton_clicked();

private:
    Ui::SettingWindow *ui;
    seeUser *seeuser;
    Members member;
    int index;
};

#endif // SETTINGWINDOW_H
