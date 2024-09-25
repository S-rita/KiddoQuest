#include "mainmenuwindow.h"
#include "ui_mainmenuwindow.h"
#include <QMessageBox>


MainMenuWindow::MainMenuWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainMenuWindow)
{
    ui->setupUi(this);

    animation = new QPropertyAnimation(ui->gameName, "geometry");
    animation->setDuration(2000); // Adjust the duration as needed
    animation->setLoopCount(-1); // Set loop count to -1 for infinite loop

    // Define start and end values for the animation
    QRect startValue(20, 20, 820, 300);
    QRect endValue(20, 50, 820, 300); // Adjust the y-coordinate for the end position

    animation->setKeyValueAt(0, startValue);
    animation->setKeyValueAt(0.5, endValue);
    animation->setKeyValueAt(1, startValue);

    animation->start();

}


MainMenuWindow::~MainMenuWindow()
{
    delete ui;
}

void MainMenuWindow::on_startButton_clicked()
{
    hide();
    Members member;
    std::string username = member.loadData();
    if (username == "none" || username == "") {
        loginwindow = new LoginWindow(this);
        loginwindow->show();
    } else {
        for (int i = 0; i < member.getUsers().size(); ++i) {
            if (username == member.getUsers()[i].getUsername()) {
                allgameswindow = new AllGamesWindow(member, i, this);
                allgameswindow->show();
            }
        }
    }

}

void MainMenuWindow::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Exit", "Are you sure you want to quit the game?",
                            QMessageBox::Yes|QMessageBox::No);


    if (reply == QMessageBox::Yes) {
        QApplication::quit();
    }
}


void MainMenuWindow::on_settingButton_clicked()
{
    //settingwindow = new SettingWindow(this);
    //settingwindow->show();
}

