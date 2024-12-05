#include "signupwindow.h"
#include "ui_signupwindow.h"
#include "members.h"
#include "email.h"
#include <regex>
#include <QMessageBox>
#include <QKeyEvent>
#include <string>

using namespace std;

SignupWindow::SignupWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SignupWindow)
{
    ui->setupUi(this);

    ui->emailLineEdit->installEventFilter(this);
    ui->usernameLineEdit->installEventFilter(this);
    ui->passwordLineEdit->installEventFilter(this);

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
    member.loadData();
    const std::regex emailPattern(R"(^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{3,}$)");

    QString userEmail = ui->emailLineEdit->text();
    QString userName = ui->usernameLineEdit->text();
    QString userPassword = ui->passwordLineEdit->text();

    string userEmail_String = userEmail.toStdString();
    string username_String = userName.toStdString();
    string userPassword_String = userPassword.toStdString();

    if (userEmail_String.empty() || username_String.empty() || userPassword_String.empty()) {
        QMessageBox::warning(this, "Invalid", "Please enter all information");
    } else if (!std::regex_match(userEmail_String, emailPattern)) {
        QMessageBox::warning(this, "Sign up", "Invalid email!");
    } else if (member.foundUsername(username_String)) {
        QMessageBox::warning(this, "Sign up", "Username already exists.");
    } else {
        srand(time(NULL));
        int code = rand() % 1000000;
        std::string sentCode = std::to_string(code);
        while (sentCode.size() < 6) {
            sentCode += std::to_string(rand()%9);
        }
        hide();
        verifyMail(userEmail_String, username_String, sentCode);
        verify = new SignupVerify(userEmail_String, username_String, userPassword_String, sentCode, member, this);
        verify->show();
    }
}

void SignupWindow::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Return) {
        event->accept();
        on_signupButton_clicked();
    } else {
        QMainWindow::keyPressEvent(event);
    }
}

bool SignupWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (obj == ui->usernameLineEdit || obj == ui->passwordLineEdit || obj == ui->emailLineEdit) {
        if (event->type() == QEvent::KeyPress) {
            QKeyEvent *keyEvent = static_cast<QKeyEvent*>(event);
            if (keyEvent->key() == Qt::Key_Up) {
                // Handle Up arrow key press
                QWidget *currentLineEdit = qobject_cast<QWidget *>(obj);
                if (currentLineEdit == ui->usernameLineEdit) {
                    ui->emailLineEdit->setFocus();
                } else if (currentLineEdit == ui->passwordLineEdit) {
                    ui->usernameLineEdit->setFocus();
                } else if (obj == ui->emailLineEdit) {
                    ui->passwordLineEdit->setFocus();
                }
            } else if (keyEvent->key() == Qt::Key_Down) {
                // Handle Down arrow key press
                QWidget *currentLineEdit = qobject_cast<QWidget *>(obj);
                if (currentLineEdit == ui->usernameLineEdit) {
                    ui->passwordLineEdit->setFocus();
                } else if (currentLineEdit == ui->passwordLineEdit) {
                    ui->emailLineEdit->setFocus();
                } else if (obj == ui->emailLineEdit) {
                    ui->usernameLineEdit->setFocus();
                }
            }
        }
    }
    return QMainWindow::eventFilter(obj, event);
}

