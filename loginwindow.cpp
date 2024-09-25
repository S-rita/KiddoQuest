#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>
#include <string>
#include "members.h"
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
    Members member;
    member.loadData();
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    string usernameString = username.toStdString();
    string passwordString = password.toStdString();


    if (member.login(usernameString, passwordString).first) {
        QMessageBox::information(this, "Success", "Welcome back!");
        member.saveData(usernameString);
        hide();
        allgameswindow = new AllGamesWindow(member, member.login(usernameString, passwordString).second, this);
        allgameswindow->show();

    } else if (usernameString.empty() || passwordString.empty()){
        QMessageBox::warning(this, "Invalid", "Please input both username and password.");

    } else {
        QMessageBox::warning(this, "Invalid", "Incorrect username / password");
    }
}


void LoginWindow::on_signupButton_clicked()
{
    hide();
    signupwindow = new SignupWindow(this);
    signupwindow->show();
}


