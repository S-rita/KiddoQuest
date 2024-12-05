#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>
#include <QKeyEvent>
#include <string>
#include "members.h"
using namespace std;

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

    // Install event filter on usernameLineEdit
    ui->usernameLineEdit->installEventFilter(this);

    // Install event filter on passwordLineEdit
    ui->passwordLineEdit->installEventFilter(this);

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

void LoginWindow::on_signupButton_2_clicked()
{
    Members member;
    member.loadData();
    forgetpassword = new LoginForgetPassword(member, this);
    forgetpassword->show();
}

void LoginWindow::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Return) {
        event->accept();
        on_loginButton_clicked();
    } else {
        QMainWindow::keyPressEvent(event);
    }
}

bool LoginWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (obj == ui->usernameLineEdit || obj == ui->passwordLineEdit) {
        if (event->type() == QEvent::KeyPress) {
            QKeyEvent *keyEvent = static_cast<QKeyEvent*>(event);
            if (keyEvent->key() == Qt::Key_Up) {
                // Handle Up arrow key press
                QWidget *currentLineEdit = qobject_cast<QWidget *>(obj);
                if (currentLineEdit == ui->usernameLineEdit) {
                    ui->passwordLineEdit->setFocus();
                } else if (currentLineEdit == ui->passwordLineEdit) {
                    ui->usernameLineEdit->setFocus();
                }
            } else if (keyEvent->key() == Qt::Key_Down) {
                // Handle Down arrow key press
                QWidget *currentLineEdit = qobject_cast<QWidget *>(obj);
                if (currentLineEdit == ui->usernameLineEdit) {
                    ui->passwordLineEdit->setFocus();
                } else if (currentLineEdit == ui->passwordLineEdit) {
                    ui->usernameLineEdit->setFocus();
                }
            }
        }
    }
    return QMainWindow::eventFilter(obj, event);
}


