#include "flaggle_game.h"
#include "ui_flaggle_game.h"
#include "country.h"
#include "gamecomplete.h"
#include "geographywindow.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <QPixmap>
#include <QMessageBox>
#include <QKeyEvent>


Flaggle_game::Flaggle_game(Members& member, int index, std::vector<Country> VecFlag, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Flaggle_game),
    member(member),
    index(index),
    VecFlag(VecFlag)
{
    ui->setupUi(this);
    timer.start();

    ui->guessFlagcomboBox->setEditable(true);

    for (int i = 0; i < VecFlag.size(); ++i) {
        ui->guessFlagcomboBox->addItem(QString::fromStdString(VecFlag[i].getCountryName()));
    }

    srand((unsigned) time(NULL));
    flag = VecFlag[rand()%(VecFlag.size())];
    QPixmap flagpic(QString::fromStdString(flag.getPathFlag()));
    ui->flag->setPixmap(flagpic.scaled(ui->flag->size(), Qt::IgnoreAspectRatio));
    QPixmap picgray(":/image for c++ project/Geography/Flags/images.png");
    ui->gray1_1->setPixmap(picgray.scaled(ui->gray1_1->size(), Qt::IgnoreAspectRatio));
    ui->gray1_2->setPixmap(picgray.scaled(ui->gray1_2->size(), Qt::IgnoreAspectRatio));
    ui->gray1_3->setPixmap(picgray.scaled(ui->gray1_3->size(), Qt::IgnoreAspectRatio));
    ui->gray1_4->setPixmap(picgray.scaled(ui->gray1_4->size(), Qt::IgnoreAspectRatio));
    ui->gray2_1->setPixmap(picgray.scaled(ui->gray2_1->size(), Qt::IgnoreAspectRatio));
    ui->gray2_2->setPixmap(picgray.scaled(ui->gray2_2->size(), Qt::IgnoreAspectRatio));
    ui->gray2_3->setPixmap(picgray.scaled(ui->gray2_3->size(), Qt::IgnoreAspectRatio));
    ui->gray2_4->setPixmap(picgray.scaled(ui->gray2_4->size(), Qt::IgnoreAspectRatio));
    ui->gray3_1->setPixmap(picgray.scaled(ui->gray3_1->size(), Qt::IgnoreAspectRatio));
    ui->gray3_2->setPixmap(picgray.scaled(ui->gray3_2->size(), Qt::IgnoreAspectRatio));
    ui->gray3_3->setPixmap(picgray.scaled(ui->gray3_3->size(), Qt::IgnoreAspectRatio));
    ui->gray3_4->setPixmap(picgray.scaled(ui->gray3_4->size(), Qt::IgnoreAspectRatio));
    showPic(true);
    ui->gray1_2->hide();
    ui->gray2_4->hide();
    ui->gray3_1->hide();
}

Flaggle_game::~Flaggle_game()
{
    delete ui;
}

void Flaggle_game::on_submitButton_clicked()
{
    bool found = false;
    std::string ans = ui->guessFlagcomboBox->currentText().toStdString();

    for (Country i: VecFlag) {
        if (i.getCountryName() == ans) {
            found = true;

            if (flag.getCountryName() == ans) {
                qint64 playtime = timer.elapsed();
                showPic(false);
                std::string finishedScore = "Score: " + std::to_string(totalScore);
                ui->scoreLabel->setText(QString::fromStdString(finishedScore));
                member.addFlaggleProgress(playtime, totalScore, index);
                GameComplete FlaggleWin;
                FlaggleWin.setModal(true);
                FlaggleWin.setScore(totalScore);
                FlaggleWin.setTime(playtime);
                FlaggleWin.exec();
                Flaggle_game::close();
                RoundGame = 9;
                totalScore = 10;
                showPic(true);
                GeographyWindow *geographyWindow = new GeographyWindow(member, index, this);
                geographyWindow->show();

            } else if (RoundGame == 0) {
                totalScore -= 1;
                qint64 playtime = timer.elapsed();
                ans = "10) " + ans;
                ui->ans5_2->setText(QString::fromStdString(ans));
                ui->AlreadyGuessed->setText("You have guessed 10 contries");
                ui->scoreLabel->setText("Score: 0");
                QMessageBox::information(this, tr("Show Answer"), tr(flag.getCountryName().c_str()));
                member.addFlaggleProgress(playtime, totalScore, index);
                GameComplete FlaggleLose;
                FlaggleLose.setModal(true);
                FlaggleLose.setScore(totalScore);
                FlaggleLose.setTime(playtime);
                FlaggleLose.lose();
                FlaggleLose.exec();
                Flaggle_game::close();
                RoundGame = 9;
                totalScore = 10;
                GeographyWindow *geographyWindow = new GeographyWindow(member, index, this);
                geographyWindow->show();

            } else {
                switch(RoundGame) {
                case 1 :
                    ui->gray1_1->hide();
                    ans = "9) " + ans;
                    ui->ans4_2->setText(QString::fromStdString(ans));
                    ui->AlreadyGuessed->setText("You have guessed 9 contries");
                    ui->scoreLabel->setText("Score: 1");
                    break;
                case 2 :
                    ui->gray2_3->hide();
                    ans = "8) " + ans;
                    ui->ans3_2->setText(QString::fromStdString(ans));
                    ui->AlreadyGuessed->setText("You have guessed 8 contries");
                    ui->scoreLabel->setText("Score: 2");
                    break;
                case 3 :
                    ui->gray3_4->hide();
                    ans = "7) " + ans;
                    ui->ans2_2->setText(QString::fromStdString(ans));
                    ui->AlreadyGuessed->setText("You have guessed 7 contries");
                    ui->scoreLabel->setText("Score: 3");
                    break;
                case 4 :
                    ui->gray2_1->hide();
                    ans = "6) " + ans;
                    ui->ans1_2->setText(QString::fromStdString(ans));
                    ui->AlreadyGuessed->setText("You have guessed 6 contries");
                    ui->scoreLabel->setText("Score: 4");
                    break;
                case 5 :
                    ui->gray3_2->hide();
                    ans = "5) " + ans;
                    ui->ans5->setText(QString::fromStdString(ans));
                    ui->AlreadyGuessed->setText("You have guessed 5 contries");
                    ui->scoreLabel->setText("Score: 5");
                    break;
                case 6 :
                    ui->gray1_4->hide();
                    ans = "4) " + ans;
                    ui->ans4->setText(QString::fromStdString(ans));
                    ui->AlreadyGuessed->setText("You have guessed 4 contries");
                    ui->scoreLabel->setText("Score: 6");
                    break;
                case 7 :
                    ui->gray2_2->hide();
                    ans = "3) " + ans;
                    ui->ans3->setText(QString::fromStdString(ans));
                    ui->AlreadyGuessed->setText("You have guessed 3 contries");
                    ui->scoreLabel->setText("Score: 7");
                    break;
                case 8 :
                    ui->gray1_3->hide();
                    ans = "2) " + ans;
                    ui->ans2->setText(QString::fromStdString(ans));
                    ui->AlreadyGuessed->setText("You have guessed 2 countries");
                    ui->scoreLabel->setText("Score: 8");
                    break;
                case 9 :
                    ui->gray3_3->hide();
                    ans = "1) " + ans;
                    ui->ans1->setText(QString::fromStdString(ans));
                    ui->AlreadyGuessed->setText("You have guessed 1 country");
                    ui->scoreLabel->setText("Score: 9");
                    break;
                }
                totalScore -= 1;
                RoundGame -= 1;
                break;
            }
        }
    }
    if (found == false) {
        QMessageBox::information(this, tr("Warning"), tr("The country doesn't exist."));
    }
}

void Flaggle_game::showPic(bool set) {
    ui->gray1_1->setVisible(set);
    ui->gray1_2->setVisible(set);
    ui->gray1_3->setVisible(set);
    ui->gray1_4->setVisible(set);
    ui->gray2_1->setVisible(set);
    ui->gray2_2->setVisible(set);
    ui->gray2_3->setVisible(set);
    ui->gray2_4->setVisible(set);
    ui->gray3_1->setVisible(set);
    ui->gray3_2->setVisible(set);
    ui->gray3_3->setVisible(set);
    ui->gray3_4->setVisible(set);
}


void Flaggle_game::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Exit", "Are you sure you want to quit the game?",
                            QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        Flaggle_game::close();
        GeographyWindow *geographyWindow = new GeographyWindow(member, index, this);
        geographyWindow->show();
    }
}

void Flaggle_game::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Return) {
        event->accept();
        on_submitButton_clicked();
    } else if (event->key() == Qt::Key_Escape) {
        event->accept();
        on_exitButton_clicked();
    } else {
        QMainWindow::keyPressEvent(event);
    }
}
