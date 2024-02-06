#include "geographywindow.h"
#include "ui_geographywindow.h"

GeographyWindow::GeographyWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GeographyWindow)
{
    ui->setupUi(this);
}

GeographyWindow::~GeographyWindow()
{
    delete ui;
}
