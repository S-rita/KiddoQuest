#include "quickmathwindow.h"
#include "ui_quickmathwindow.h"
#include "mathwindow.h"

QuickMathWindow::QuickMathWindow(Members &member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QuickMathWindow)
    , member(member)
    , index(index)
{
    ui->setupUi(this);
}

QuickMathWindow::~QuickMathWindow()
{
    delete ui;
}

void QuickMathWindow::on_plus_minusButton_clicked()
{
    hide();
    plusminuswindow = new PlusMinusWindow(member, index, this);
    plusminuswindow->show();
}


void QuickMathWindow::on_multiply_divideButton_clicked()
{
    hide();
    multiplydividegame = new MultiplyDivide_game(member, index, this);
    multiplydividegame->show();
}

void QuickMathWindow::on_goBackButton_clicked()
{
    hide();
    MathWindow *mathwindow = new MathWindow(member, index, this);
    mathwindow->show();
}

