#ifndef SIGNUPWINDOW_H
#define SIGNUPWINDOW_H

#include <QMainWindow>
#include "allgameswindow.h"
#include "user.h"
#include "signupverify.h"

namespace Ui {
class SignupWindow;
}

class SignupWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SignupWindow(QWidget *parent = nullptr);
    ~SignupWindow();

protected:
    void keyPressEvent(QKeyEvent *event) override;
    bool eventFilter(QObject *obj, QEvent *event) override;

private slots:
    void on_loginButton_clicked();

    void on_signupButton_clicked();

private:
    Ui::SignupWindow *ui;
    AllGamesWindow *allgameswindow;
    SignupVerify *verify;
};

#endif // SIGNUPWINDOW_H
