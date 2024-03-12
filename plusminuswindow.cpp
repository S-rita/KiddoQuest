#include "plusminuswindow.h"
#include "ui_plusminuswindow.h"
#include "quickmathwindow.h"
#include <QKeyEvent>

PlusMinusWindow::PlusMinusWindow(Members& member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PlusMinusWindow)
{
    ui->setupUi(this);
}

PlusMinusWindow::~PlusMinusWindow()
{
    delete ui;
}

void PlusMinusWindow::on_easyButton_clicked()
{
    hide();
    plusminusgame = new PlusMinusPlay_game(member, index, 100, this);
    plusminusgame->show();
}


void PlusMinusWindow::on_hardButton_clicked()
{
    hide();
    plusminusgame = new PlusMinusPlay_game(member, index, 100000, this);
    plusminusgame->show();
}


void PlusMinusWindow::on_goBackButton_clicked()
{
    hide();
    QuickMathWindow *quickmathgame = new QuickMathWindow(member, index, this);
    quickmathgame->show();
}

void PlusMinusWindow::on_Info_normal_clicked()
{
    howtoplay = new Howto(this);
    howtoplay->showDescription("You have one chance\n"
                               "to answer the right solution.\n"
                               "The numbers are within 3 digits.");
    howtoplay->show();
}

void PlusMinusWindow::on_Info_hard_clicked()
{
    howtoplay = new Howto(this);
    howtoplay->showDescription("You have one chance\n"
                               "to answer the right solution.\n"
                               "The numbers are within 5 digits.");
    howtoplay->show();
}

void PlusMinusWindow::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Shift) {
        event->accept();
        on_goBackButton_clicked();
    } else {
        QMainWindow::keyPressEvent(event);
    }
}

