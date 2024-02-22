#include "signupwindow.h"
#include "ui_signupwindow.h"
#include "members.h"
#include <regex>
#include <QMessageBox>
#include <string>
#include "managedata.h"

using namespace std;

SignupWindow::SignupWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SignupWindow)
{
    ui->setupUi(this);
}

SignupWindow::~SignupWindow()
{
    delete ui;
}


void SignupWindow::on_loginButton_clicked()
{
    this->hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void SignupWindow::on_signupButton_clicked()
{
    Members member;
    //member.loadData();
    const std::regex emailPattern(R"(^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{3,}$)");

    QString userEmail = ui -> emailLineEdit -> text();
    QString userName = ui->usernameLineEdit->text();
    QString userPassword = ui->passwordLineEdit->text();

    string userEmail_String = userEmail.toStdString();
    string username_String = userName.toStdString();
    string userPassword_String = userPassword.toStdString();

    if (userEmail_String.empty() || username_String.empty() || userPassword_String.empty()) {
        QMessageBox::warning(this, "Invalid", "Please enter all information");

    } else if (std::regex_match(userEmail_String, emailPattern) || !member.foundUsername(username_String)) {
        QMessageBox::information(this, "Successful", "Sign up successfully");

        User newuser(userEmail_String, username_String, userPassword_String);
        member.addUser(newuser);
        member.saveData();

        hide();
        allgameswindow = new AllGamesWindow(member, member.getUsers().size()-1, this);
        allgameswindow->show();
    } else if (!std::regex_match(userEmail_String, emailPattern)){
        QMessageBox::warning(this, "Sign up", "Invalid email!");
    } else if (member.foundUsername(username_String)) {
        QMessageBox::warning(this, "Sign up", "Username already exist.");
    }
}


