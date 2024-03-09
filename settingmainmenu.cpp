#include "settingmainmenu.h"
#include "ui_settingmainmenu.h"

BackgroundMusicManager SettingMainMenu::globalBackgroundMusicManager;

SettingMainMenu::SettingMainMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SettingMainMenu)
    , backgroundMusicManager(globalBackgroundMusicManager)
{
    ui->setupUi(this);
    ui->kiddoEmailLink->setText("<a href=\"mailto:kiddoquest.se@gmail.com\">kiddoquest.se@gmail.com</a>");
    ui->kiddoEmailLink->setTextFormat(Qt::RichText);
    ui->kiddoEmailLink->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->kiddoEmailLink->setOpenExternalLinks(true);
    ui->languagecomboBox->addItem("English");

    connect(ui->musicSlider, &QSlider::valueChanged, this, &SettingMainMenu::adjustVolume);
}

SettingMainMenu::~SettingMainMenu()
{
    delete ui;
}

void SettingMainMenu::on_pushButton_clicked()
{
    hide();
}

void SettingMainMenu::adjustVolume(int volume)
{
    backgroundMusicManager.setVolume(volume);
}
