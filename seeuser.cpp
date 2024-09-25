#include "seeuser.h"
#include "ui_seeuser.h"

seeUser::seeUser(Members &member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::seeUser)
    , member(member)
    , index(index)
{
    ui->setupUi(this);
    member.loadData();

    tuple<string, int, double> bestgame = member.getUsers()[index].getBestGame();

    ui->bestgameLabel->setText(QString::fromStdString(get<0>(bestgame)));
    ui->bestscoreLabel->setText(QString::fromStdString(to_string(get<2>(bestgame))));
    ui->besttimeLabel->setText(QString::fromStdString(displayTime(get<1>(bestgame))));

    ui->flaghscore->setText(QString::fromStdString("Highest score: " + to_string(member.getUsers()[index].getAllProgress()[0].getBestScore())));
    ui->flagavgscore->setText(QString::fromStdString("Average score: " + to_string(member.getUsers()[index].getAllProgress()[0].getAvgScore())));
    ui->flagbtime->setText(QString::fromStdString("Best time: " + displayTime(member.getUsers()[index].getAllProgress()[0].getBestTime())));
    ui->flagavgtime->setText(QString::fromStdString("Average time: " + displayTime(member.getUsers()[index].getAllProgress()[0].getAvgTime())));

    ui->maphscore->setText(QString::fromStdString("Highest score: " + to_string(member.getUsers()[index].getAllProgress()[1].getBestScore())));
    ui->mapavgscore->setText(QString::fromStdString("Average score: " + to_string(member.getUsers()[index].getAllProgress()[1].getAvgScore())));
    ui->mapbtime->setText(QString::fromStdString("Best time: " + displayTime(member.getUsers()[index].getAllProgress()[1].getBestTime())));
    ui->mapavgtime->setText(QString::fromStdString("Average time: " + displayTime(member.getUsers()[index].getAllProgress()[1].getAvgTime())));

    ui->timehscore->setText(QString::fromStdString("Highest score: " + to_string(member.getUsers()[index].getAllProgress()[2].getBestScore())));
    ui->timeavgscore->setText(QString::fromStdString("Average score: " + to_string(member.getUsers()[index].getAllProgress()[2].getAvgScore())));
    ui->timebtime->setText(QString::fromStdString("Best time: " + displayTime(member.getUsers()[index].getAllProgress()[2].getBestTime())));
    ui->timeavgtime->setText(QString::fromStdString("Average time: " + displayTime(member.getUsers()[index].getAllProgress()[2].getAvgTime())));

    ui->quickhscore->setText(QString::fromStdString("Highest score: " + to_string(member.getUsers()[index].getAllProgress()[3].getBestScore())));
    ui->quickavgscore->setText(QString::fromStdString("Average score: " + to_string(member.getUsers()[index].getAllProgress()[3].getAvgScore())));
    ui->quickbtime->setText(QString::fromStdString("Best time: " + displayTime(member.getUsers()[index].getAllProgress()[3].getBestTime())));
    ui->quickavgtime->setText(QString::fromStdString("Average time: " + displayTime(member.getUsers()[index].getAllProgress()[3].getAvgTime())));

    ui->hanghscore->setText(QString::fromStdString("Highest score: " + to_string(member.getUsers()[index].getAllProgress()[4].getBestScore())));
    ui->hangavgscore->setText(QString::fromStdString("Average score: " + to_string(member.getUsers()[index].getAllProgress()[4].getAvgScore())));
    ui->hangbtime->setText(QString::fromStdString("Best time: " + displayTime(member.getUsers()[index].getAllProgress()[4].getBestTime())));
    ui->hangavgtime->setText(QString::fromStdString("Average time: " + displayTime(member.getUsers()[index].getAllProgress()[4].getAvgTime())));


    ui->spellhscore->setText(QString::fromStdString("Highest score: " + to_string(member.getUsers()[index].getAllProgress()[5].getBestScore())));
    ui->spellavgscore->setText(QString::fromStdString("Average score: " + to_string(member.getUsers()[index].getAllProgress()[5].getAvgScore())));
    ui->spellbtime->setText(QString::fromStdString("Best time: " + displayTime(member.getUsers()[index].getAllProgress()[5].getBestTime())));
    ui->spellavgtime->setText(QString::fromStdString("Average time: " + displayTime(member.getUsers()[index].getAllProgress()[5].getAvgTime())));

    if (member.getUsers()[index].getArchivement()[0]) {
        ui->ACMchampion->setStyleSheet("QLabel {"
                                       "image: url(:/image for c++ project/Background/trophy(color).png);"
                                       "}"
                                       "QLabel:hover {"
                                       "image: url(:/image for c++ project/Background/trophy(color-hover).png);"
                                       "}");
    } else {
        bool champion = true;
        for (Progress game: member.getUsers()[index].getAllProgress()) {
            if (game.getBestScore() != 10) {
                champion = false;
            }
        }
        if (champion) {
            ui->ACMchampion->setStyleSheet("QLabel {"
                                           "image: url(:/image for c++ project/Background/trophy(color).png);"
                                           "}"
                                           "QLabel:hover {"
                                           "image: url(:/image for c++ project/Background/trophy(color-hover).png);"
                                           "}");
            member.setUserArchivement(index, 0);
            member.saveData(member.getUsers()[index].getUsername());
        }
    }

    if (member.getUsers()[index].getArchivement()[1]) {
        ui->ACMspeedrun->setStyleSheet("QLabel {"
                                       "image: url(:/image for c++ project/Background/time(color).png);"
                                       "}"
                                       "QLabel:hover {"
                                       "image: url(:/image for c++ project/Background/time(color-hover).png);"
                                       "}");
    } else {
        bool speedrun = true;
        for (Progress game: member.getUsers()[index].getAllProgress()) {
            if (game.getBestTime() > 60 || game.getBestTime() == 0) {
                speedrun = false;
            }
        }
        if (speedrun) {
            ui->ACMspeedrun->setStyleSheet("QLabel {"
                                           "image: url(:/image for c++ project/Background/time(color).png);"
                                           "}"
                                           "QLabel:hover {"
                                           "image: url(:/image for c++ project/Background/time(color-hover).png);"
                                           "}");
            member.setUserArchivement(index, 1);
            member.saveData(member.getUsers()[index].getUsername());
        }
    }

    if (member.getUsers()[index].getArchivement()[2]) {
        ui->ACMdontgiveup->setStyleSheet("QLabel {"
                                         "image: url(:/image for c++ project/Background/dontgiveup(color).png);"
                                         "}"
                                         "QLabel:hover {"
                                         "image: url(:/image for c++ project/Background/dontgiveup(color-hover).png);"
                                         "}");
    } else {
        bool giveup = false;
        for (Progress game: member.getUsers()[index].getAllProgress()) {
            if (game.getWorstScore() == 0) {
                giveup = true;
            }
        }
        if (giveup) {
            ui->ACMdontgiveup->setStyleSheet("QLabel {"
                                             "image: url(:/image for c++ project/Background/dontgiveup(color).png);"
                                             "}"
                                             "QLabel:hover {"
                                             "image: url(:/image for c++ project/Background/dontgiveup(color-hover).png);"
                                             "}");
            member.setUserArchivement(index, 2);
            member.saveData(member.getUsers()[index].getUsername());
        }
    }

    if (member.getUsers()[index].getArchivement()[3]) {
        ui->ACMturtle->setStyleSheet("QLabel {"
                                     "image: url(:/image for c++ project/Background/turtle(color).png);"
                                     "}"
                                     "QLabel:hover {"
                                     "image: url(:/image for c++ project/Background/turtle(color-hover).png);"
                                     "}");
    } else {
        bool turtle = false;
        for (Progress game: member.getUsers()[index].getAllProgress()) {
            if (game.getWorstTime() > 120) {
                turtle = true;
            }
        }
        if (turtle) {
            ui->ACMturtle->setStyleSheet("QLabel {"
                                         "image: url(:/image for c++ project/Background/turtle(color).png);"
                                         "}"
                                         "QLabel:hover {"
                                         "image: url(:/image for c++ project/Background/turtle(color-hover).png);"
                                         "}");
            member.setUserArchivement(index, 3);
            member.saveData(member.getUsers()[index].getUsername());
        }
    }

///Users/gnar_p
    Objects profilepic1 ("girl 1", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/Background/profilePic1.png");
    Objects profilepic2 ("girl 2", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/Background/profilePic2.png");
    Objects profilepic3 ("girl 3", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/Background/profilePic3.png");
    Objects profilepic4 ("boy 1", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/Background/profilePic4.png");
    Objects profilepic5 ("boy 2", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/Background/profilePic5.png");
    Objects profilepic6 ("boy 3", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/Background/profilePic6.png");

    VecProfilepic = {profilepic1, profilepic2, profilepic3, profilepic4, profilepic5, profilepic6};

    changeProfilePicture(member.getUsers()[index].getProfilePic());

    connect(ui->profilePicComboBox, QOverload<int>::of(&QComboBox::activated),
            this, &seeUser::changeProfilePicture);

    for (int i = 0; i < VecProfilepic.size(); ++i) {
        ui->profilePicComboBox->addItem(QString::fromStdString(VecProfilepic[i].getObjectName()));
    }

}

void seeUser::changeProfilePicture(int order)
{
    if (order >= 0 && order < VecProfilepic.size()) {
        QPixmap pic(QString::fromStdString(VecProfilepic[order].getObjectPath()));
        ui->profilePic->setPixmap(pic.scaled(ui->profilePic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
        member.setUserProfilePic(index, order);
        member.saveData(member.getUsers()[index].getUsername());
    }
}

seeUser::~seeUser()
{
    delete ui;
}

void seeUser::on_exitButton_clicked()
{
    hide();
}

string seeUser::displayTime(int time) {
    int hour = time / 3600;
    int min = (time % 3600) / 60;
    int sec = (time % 3600) % 60;

    std::string hour_text = (hour < 10) ? "0" + std::to_string(hour) : std::to_string(hour);
    std::string min_text = (min < 10) ? "0" + std::to_string(min) : std::to_string(min);
    std::string sec_text = (sec < 10) ? "0" + std::to_string(sec) : std::to_string(sec);

    std::string word = hour_text + ":" + min_text + ":" + sec_text;

    return word;
}






