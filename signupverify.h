#ifndef SIGNUPVERIFY_H
#define SIGNUPVERIFY_H

#include <QMainWindow>
#include <QLineEdit>
#include "signupresend.h"
#include "members.h"
#include "allgameswindow.h"

namespace Ui {
class SignupVerify;
}

class SignupVerify : public QMainWindow
{
    Q_OBJECT

public:
    explicit SignupVerify(std::string user_email, std::string username, std::string password, std::string sentcode, Members &member, QWidget *parent = nullptr);
    ~SignupVerify();

private slots:
    void onTextChanged(const QString &text);
    void on_continueButton_clicked();
    void on_resendButton_clicked();

private:
    Ui::SignupVerify *ui;
    QList<QLineEdit*> lineEdits;
    SignupResend *resend;
    std::string sentCode;
    std::string user_email;
    std::string username;
    std::string password;
    Members member;
    AllGamesWindow *allgameswindow;

};

#endif // SIGNUPVERIFY_H
