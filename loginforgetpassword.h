#ifndef LOGINFORGETPASSWORD_H
#define LOGINFORGETPASSWORD_H

#include <QMainWindow>
#include "members.h"

namespace Ui {
class LoginForgetPassword;
}

class LoginForgetPassword : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginForgetPassword(Members &member, QWidget *parent = nullptr);
    ~LoginForgetPassword();

protected:
    void keyPressEvent(QKeyEvent *event) override;

private slots:
    void on_exitButton_clicked();
    void on_recoverButton_clicked();

private:
    Ui::LoginForgetPassword *ui;
    Members member;
};

#endif // LOGINFORGETPASSWORD_H
