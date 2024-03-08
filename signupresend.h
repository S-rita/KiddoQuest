#ifndef SIGNUPRESEND_H
#define SIGNUPRESEND_H

#include <QDialog>

namespace Ui {
class SignupResend;
}

class SignupResend : public QDialog
{
    Q_OBJECT

public:
    explicit SignupResend(std::string user_email, std::string username, std::string password, std::string code, QWidget *parent = nullptr);
    ~SignupResend();

private slots:
    void on_gotitButton_clicked();

    void on_gotitButton_2_clicked();

private:
    Ui::SignupResend *ui;
    std::string sentCode;
    std::string user_email;
    std::string username;
    std::string password;
};

#endif // SIGNUPRESEND_H
