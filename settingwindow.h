#ifndef SETTINGWINDOW_H
#define SETTINGWINDOW_H

#include <QMainWindow>

namespace Ui {
class SettingWindow;
}

class SettingWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SettingWindow(QWidget *parent = nullptr);
    ~SettingWindow();

private slots:
    void on_quitButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::SettingWindow *ui;
};

#endif // SETTINGWINDOW_H
