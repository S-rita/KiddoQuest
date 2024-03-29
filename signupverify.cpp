#include "signupverify.h"
#include "ui_signupverify.h"
#include <QLineEdit>
#include <QMessageBox>
#include <QKeyEvent>
#include "email.h"

SignupVerify::SignupVerify(std::string user_email, std::string username, std::string password, std::string sentCode, Members &member, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SignupVerify)
    , user_email(user_email)
    , username(username)
    , password(password)
    , sentCode(sentCode)
    , member(member)
{
    ui->setupUi(this);
    ui->text->setText("We emailed you a six-digit code to " + QString::fromStdString(user_email) + "\nEnter the code below to confirm your email address.");
    int x = 50;
    int y = 190;
    int width = 90;
    int height = 100;

    for (int i = 0; i < 6; ++i) {
        QLineEdit *lineEdit = new QLineEdit(this);
        lineEdit->setMaxLength(1); // Allow only one character
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setGeometry(x, y, width, height);
        lineEdit->setFixedWidth(width);
        lineEdit->setFixedHeight(height);
        lineEdit->setFont(QFont("Arial", 16));

        connect(lineEdit, &QLineEdit::textChanged, this, &SignupVerify::onTextChanged);

        x += width + 10;

        lineEdits.append(lineEdit);
    }

    lineEdits.first()->setFocus();
}

SignupVerify::~SignupVerify()
{
    delete ui;
}

void SignupVerify::onTextChanged(const QString &text) {
    QLineEdit *lineEdit = qobject_cast<QLineEdit*>(sender());
    if (!lineEdit)
        return;

    if (text.length() == 1 && text.toInt() >= 0 && text.toInt() <= 9) {
        int index = lineEdits.indexOf(lineEdit);
        if (index < lineEdits.size() - 1)
            lineEdits.at(index + 1)->setFocus();
    }
}

void SignupVerify::on_continueButton_clicked() {
    QString enteredCode;
    for (QLineEdit *lineEdit : lineEdits) {
        enteredCode += lineEdit->text();
    }

    if (enteredCode == QString::fromStdString(sentCode)) {
        QMessageBox::information(this, "Successful", "Sign up successful");

        User newuser(user_email, username, password);
        member.addUser(newuser);
        member.saveData(username);

        allgameswindow = new AllGamesWindow(member, member.getUsers().size()-1);
        allgameswindow->show();
        hide();

    } else {
        QMessageBox::information(this, "Verify Failed", "Make sure you enter correct verify code");
    }
}

void SignupVerify::on_resendButton_clicked()
{
    verifyMail(user_email, username, sentCode);
    resend = new SignupResend(user_email, username, password, sentCode, this);
    resend->show();
}

void SignupVerify::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Return) {
        event->accept();
        on_continueButton_clicked();
    } else {
        QMainWindow::keyPressEvent(event);
    }
}
