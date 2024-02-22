#include "howtomapper.h"
#include "ui_howtomapper.h"
#include "geographywindow.h"

HowtoMapper::HowtoMapper(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HowtoMapper)
{
    ui->setupUi(this);
}

HowtoMapper::~HowtoMapper()
{
    delete ui;
}

void HowtoMapper::on_pushButton_clicked()
{
    hide();
}

