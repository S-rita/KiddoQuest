#include "loginforgetpassword.h"
#include "ui_loginforgetpassword.h"
#include "members.h"
#include "email.h"
#include <QMessageBox>

LoginForgetPassword::LoginForgetPassword(Members &member, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginForgetPassword)
    , member(member)
{
    ui->setupUi(this);
}

LoginForgetPassword::~LoginForgetPassword()
{
    delete ui;
}

void LoginForgetPassword::on_exitButton_clicked()
{
    close();
}


void LoginForgetPassword::on_recoverButton_clicked()
{
    std::string username = ui->enterUserName->text().toStdString();
    bool found = false;
    for (int i = 0; i < member.getUsers().size(); ++i) {
        if (username == member.getUsers()[i].getUsername()) {
            found = true;
            passwordMail(member.getUsers()[i]);
            QMessageBox::information(this, tr("Sent"), tr("We've sent you the password."));
            close();
        }
    }
    if (!found) {
        QMessageBox::information(this, tr("Warning"), tr("The username doesn't exist."));
    }
}

