#include "mainmenuwindow.h"
#include "ui_mainmenuwindow.h"
#include <QMessageBox>


MainMenuWindow::MainMenuWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainMenuWindow)
{
    ui->setupUi(this);
}

MainMenuWindow::~MainMenuWindow()
{
    delete ui;
}

void MainMenuWindow::on_startButton_clicked()
{
    hide();
    loginwindow = new LoginWindow(this);
    loginwindow->show();
}


void MainMenuWindow::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Exit", "Are you sure you want to quit?",
                            QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QApplication::quit();
    }
}


void MainMenuWindow::on_settingButton_clicked()
{
    settingwindow = new SettingWindow(this);
    settingwindow->show();
}

