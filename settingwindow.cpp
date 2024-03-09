#include "settingwindow.h"
#include "ui_settingwindow.h"
#include "mainmenuwindow.h"
#include <QMessageBox>

// Define the global instance of BackgroundMusicManager
BackgroundMusicManager SettingWindow::globalBackgroundMusicManager;

SettingWindow::SettingWindow(Members& member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SettingWindow)
    , member(member)
    , index(index)
    , backgroundMusicManager(globalBackgroundMusicManager) // Initialize with the global instance
{
    ui->setupUi(this);
    ui->kiddoEmailLink->setText("<a href=\"mailto:kiddoquest.se@gmail.com\">kiddoquest.se@gmail.com</a>");
    ui->kiddoEmailLink->setTextFormat(Qt::RichText);
    ui->kiddoEmailLink->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->kiddoEmailLink->setOpenExternalLinks(true);
    ui->languagecomboBox->addItem("English");

    connect(ui->musicSlider, &QSlider::valueChanged, this, &SettingWindow::adjustVolume);
}

SettingWindow::~SettingWindow()
{
    delete ui;
}

void SettingWindow::on_quitButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Exit", "Are you sure you want to quit?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QApplication::quit();
    }
}

void SettingWindow::on_pushButton_clicked()
{
    hide();
}

void SettingWindow::on_userButton_clicked()
{
    seeuser = new seeUser(member, index, this);
    seeuser->show();
}

void SettingWindow::on_signoutButton_clicked()
{
    member.saveData();
    QList<QWidget *> widgets = qApp->topLevelWidgets();
    for (auto widget : widgets) {
        widget->close();
    }
    MainMenuWindow *mainmenu = new MainMenuWindow(this);
    mainmenu->show();
}

void SettingWindow::adjustVolume(int volume)
{
    backgroundMusicManager.setVolume(volume);
}
