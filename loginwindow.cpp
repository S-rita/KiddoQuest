#include "loginwindow.h"
#include "./ui_loginwindow.h"
#include <QMessageBox>
#include <String>
using namespace std;


LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}


void LoginWindow::on_loginButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    string usernameString = username.toStdString();
    string passwordString = password.toStdString();


    if (!(usernameString.empty()) && !(passwordString.empty())) {
        hide();
        allgameswindow = new AllGamesWindow(this);
        allgameswindow->show();
    } else if (usernameString.empty() || passwordString.empty()){
        QMessageBox::warning(this, "Login", "Please input both username and password.");
    } else {
        QMessageBox::warning(this, "Login", "Incorrect username / password");
    }
}


void LoginWindow::on_signupButton_clicked()
{
    hide();
    signupwindow = new SignupWindow(this);
    signupwindow->show();
}
