#include "signupresend.h"
#include "ui_signupresend.h"
#include "email.h"

SignupResend::SignupResend(std::string user_email, std::string username, std::string password, std::string sentCode, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SignupResend)
    , user_email(user_email)
    , username(username)
    , password(password)
    , sentCode(sentCode)
{
    ui->setupUi(this);
}

SignupResend::~SignupResend()
{
    delete ui;
}

void SignupResend::on_gotitButton_clicked()
{
    close();
}


void SignupResend::on_gotitButton_2_clicked()
{
    verifyMail(user_email, username, sentCode);
    close();
}

