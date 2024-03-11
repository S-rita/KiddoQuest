#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "signupwindow.h"
#include "allgameswindow.h"
#include "loginforgetpassword.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginWindow;
}
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

protected:
    void keyPressEvent(QKeyEvent *event) override;
    bool eventFilter(QObject *obj, QEvent *event) override;

private slots:
    void on_loginButton_clicked();
    void on_signupButton_clicked();
    void on_signupButton_2_clicked();

private:
    Ui::LoginWindow *ui;
    SignupWindow *signupwindow;
    AllGamesWindow *allgameswindow;
    LoginForgetPassword *forgetpassword;
};
#endif // LOGINWINDOW_H
