#include "howto.h"
#include "ui_howto.h"

Howto::Howto(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Howto)
{
    ui->setupUi(this);

}

Howto::~Howto()
{
    delete ui;
}


void Howto::showDescription(const QString &text)
{
    ui->description->setText(text);
}

void Howto::on_okButton_clicked()
{
    hide();
}
