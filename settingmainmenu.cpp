#include "settingmainmenu.h"
#include "ui_settingmainmenu.h"
#include <QSettings>
#include <QKeyEvent>

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

    QSettings settings;
    int savedVolume = settings.value("volume", 50).toInt();
    ui->musicSlider->setValue(savedVolume);
    backgroundMusicManager.setVolume(savedVolume);

    connect(ui->musicSlider, &QSlider::valueChanged, this, &SettingMainMenu::adjustVolume);
}

SettingMainMenu::~SettingMainMenu()
{
    QSettings settings;
    settings.setValue("volume", ui->musicSlider->value());
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

void SettingMainMenu::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Escape) {
        event->accept();
        on_pushButton_clicked();
    } else {
        QMainWindow::keyPressEvent(event);
    }
}
