#include "settingwindow.h"
#include "ui_settingwindow.h"
#include "mainmenuwindow.h"
#include <QMessageBox>
#include <QSettings>
#include <QKeyEvent>

// Define the global instance of BackgroundMusicManager
BackgroundMusicManager SettingWindow::globalBackgroundMusicManager;

SettingWindow::SettingWindow(Members& member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SettingWindow)
    , member(member)
    , index(index)
    , backgroundMusicManager(globalBackgroundMusicManager)
{
    ui->setupUi(this);
    ui->kiddoEmailLink->setText("<a href=\"mailto:kiddoquest.se@gmail.com\">kiddoquest.se@gmail.com</a>");
    ui->kiddoEmailLink->setTextFormat(Qt::RichText);
    ui->kiddoEmailLink->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->kiddoEmailLink->setOpenExternalLinks(true);
    ui->languagecomboBox->addItem("English");

    QSettings settings;
    int savedVolume = settings.value("volume", 50).toInt(); // Default volume is 50
    ui->musicSlider->setValue(savedVolume);
    backgroundMusicManager.setVolume(savedVolume);

    connect(ui->musicSlider, &QSlider::valueChanged, this, &SettingWindow::adjustVolume);
}

SettingWindow::~SettingWindow()
{
    QSettings settings;
    settings.setValue("volume", ui->musicSlider->value());
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
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Sign Out", "Are you sure you want to sign out?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        member.saveData();
        QList<QWidget *> widgets = qApp->topLevelWidgets();
        for (auto widget : widgets) {
            widget->close();
        }
        MainMenuWindow *mainmenu = new MainMenuWindow(this);
        mainmenu->show();
    }
}

void SettingWindow::adjustVolume(int volume)
{
    backgroundMusicManager.setVolume(volume);
}

void SettingWindow::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Escape) {
        event->accept();
        on_pushButton_clicked();
    } else {
        QMainWindow::keyPressEvent(event);
    }
}
