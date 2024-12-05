#include "quickmathwindow.h"
#include "ui_quickmathwindow.h"
#include "mathwindow.h"
#include <QKeyEvent>

QuickMathWindow::QuickMathWindow(Members& member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QuickMathWindow)
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

void QuickMathWindow::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Shift) {
        event->accept();
        on_goBackButton_clicked();
    } else {
        QMainWindow::keyPressEvent(event);
    }
}

