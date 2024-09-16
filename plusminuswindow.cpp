#include "plusminuswindow.h"
#include "ui_plusminuswindow.h"
#include "quickmathwindow.h"

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
    easyplusminusgame = new easyPlusMinus_game(member, index, this);
    easyplusminusgame->show();
}


void PlusMinusWindow::on_hardButton_clicked()
{
    hide();
    hardplusminusgame = new hardPlusMinus_game(member, index, this);
    hardplusminusgame->show();
}


void PlusMinusWindow::on_goBackButton_clicked()
{
    hide();
    QuickMathWindow *quickmathgame = new QuickMathWindow(member, index, this);
    quickmathgame->show();
}

