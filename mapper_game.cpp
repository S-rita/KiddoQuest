#include "mapper_game.h"
#include "ui_mapper_game.h"
#include "country.h"
#include "geographywindow.h"
#include "gamecomplete.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <QPixmap>
#include <QMessageBox>

Mapper_game::Mapper_game(Members &member, int index, std::vector<Country>& VecCountry, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Mapper_game)
    , member(member)
    , index(index)
    , VecCountry(VecCountry)
{
    ui->setupUi(this);
    timer.start();
    ui->guessShapecomboBox->setEditable(true);

    for (int i = 0; i < VecCountry.size(); ++i) {
        ui->guessShapecomboBox->addItem(QString::fromStdString(VecCountry[i].getCountryName()));
    }

    srand(time(NULL));
    country = VecCountry[rand()%(VecCountry.size())];
    while (country.getPathShape() == "-") {
        country = VecCountry[rand()%(VecCountry.size())];
    }
    QPixmap countrypic(QString::fromStdString(country.getPathShape()));
    ui->country_shape->setPixmap(countrypic.scaled(ui->country_shape->size(), Qt::KeepAspectRatio));
}

Mapper_game::~Mapper_game()
{
    delete ui;
}

void Mapper_game::on_submitButton_clicked()
{
    bool found = false;
    std::string ans = ui->guessShapecomboBox->currentText().toStdString();
    for (Country i: VecCountry) {
        if (i.getCountryName() == ans) {
            found = true;
            Country check = i;
            if (country.getCountryName() == ans) {
                qint64 playtime = timer.elapsed();
                member.addMapperProgress(playtime, 10-RoundGame+1, index);
                GameComplete gamecomplete;
                QMessageBox::information(this, tr("Show Answer"), tr(country.getCountryName().c_str()));
                gamecomplete.setModal(true);
                gamecomplete.setScore(10-RoundGame+1);
                gamecomplete.setTime(playtime);
                gamecomplete.exec();
                RoundGame = 0;
                Mapper_game::close();
                GeographyWindow *geographyWindow = new GeographyWindow(member, index, this);
                geographyWindow->show();
            } else {
                std::string name = std::to_string(RoundGame) + ") " + check.getCountryName();
                bool continent = country.sameContinent(check);
                bool language = country.sameLanguage(check);
                std::string border = country.checkBorder(check);
                switch(RoundGame) {
                case 1 :
                    ui->country1->setText(QString::fromStdString(name));
                    ui->continent1->setPixmap(showPicMap(continent));
                    ui->lang1->setPixmap(showPicMap(language));
                    ui->border1->setText(QString::fromStdString(border));
                    ui->AlreadyGuessed->setText("You have guessed 1 contry");
                    ui->scoreLabel->setText("Score: 9");
                    break;
                case 2 :
                    ui->country2->setText(QString::fromStdString(name));
                    ui->continent2->setPixmap(showPicMap(continent));
                    ui->lang2->setPixmap(showPicMap(language));
                    ui->border2->setText(QString::fromStdString(border));
                    ui->AlreadyGuessed->setText("You have guessed 2 contries");
                    ui->scoreLabel->setText("Score: 8");
                    break;
                case 3 :
                    ui->country3->setText(QString::fromStdString(name));
                    ui->continent3->setPixmap(showPicMap(continent));
                    ui->lang3->setPixmap(showPicMap(language));
                    ui->border3->setText(QString::fromStdString(border));
                    ui->AlreadyGuessed->setText("You have guessed 3 contries");
                    ui->scoreLabel->setText("Score: 7");
                    break;
                case 4 :
                    ui->country4->setText(QString::fromStdString(name));
                    ui->continent4->setPixmap(showPicMap(continent));
                    ui->lang4->setPixmap(showPicMap(language));
                    ui->border4->setText(QString::fromStdString(border));
                    ui->AlreadyGuessed->setText("You have guessed 4 contries");
                    ui->scoreLabel->setText("Score: 6");
                    break;
                case 5 :
                    ui->country5->setText(QString::fromStdString(name));
                    ui->continent5->setPixmap(showPicMap(continent));
                    ui->lang5->setPixmap(showPicMap(language));
                    ui->border5->setText(QString::fromStdString(border));
                    ui->AlreadyGuessed->setText("You have guessed 5 contries");
                    ui->scoreLabel->setText("Score: 5");
                    break;
                case 6 :
                    ui->country6->setText(QString::fromStdString(name));
                    ui->continent6->setPixmap(showPicMap(continent));
                    ui->lang6->setPixmap(showPicMap(language));
                    ui->border6->setText(QString::fromStdString(border));
                    ui->AlreadyGuessed->setText("You have guessed 6 contries");
                    ui->scoreLabel->setText("Score: 4");
                    break;
                case 7 :
                    ui->country7->setText(QString::fromStdString(name));
                    ui->continent7->setPixmap(showPicMap(continent));
                    ui->lang7->setPixmap(showPicMap(language));
                    ui->border7->setText(QString::fromStdString(border));
                    ui->AlreadyGuessed->setText("You have guessed 7 contries");
                    ui->scoreLabel->setText("Score: 3");
                    break;
                case 8 :
                    ui->country8->setText(QString::fromStdString(name));
                    ui->continent8->setPixmap(showPicMap(continent));
                    ui->lang8->setPixmap(showPicMap(language));
                    ui->border8->setText(QString::fromStdString(border));
                    ui->AlreadyGuessed->setText("You have guessed 8 contries");
                    ui->scoreLabel->setText("Score: 2");
                    break;
                case 9 :
                    ui->country9->setText(QString::fromStdString(name));
                    ui->continent9->setPixmap(showPicMap(continent));
                    ui->lang9->setPixmap(showPicMap(language));
                    ui->border9->setText(QString::fromStdString(border));
                    ui->AlreadyGuessed->setText("You have guessed 9 contries");
                    ui->scoreLabel->setText("Score: 1");
                    break;
                case 10 :
                    ui->country10->setText(QString::fromStdString(name));
                    ui->continent10->setPixmap(showPicMap(continent));
                    ui->lang10->setPixmap(showPicMap(language));
                    ui->border10->setText(QString::fromStdString(border));
                    ui->AlreadyGuessed->setText("You have guessed 10 contries");
                    ui->scoreLabel->setText("Score: 0");
                    qint64 playtime = timer.elapsed();
                    member.addMapperProgress(playtime, 10-RoundGame+1, index);
                    GameComplete gamecomplete;
                    QMessageBox::information(this, tr("Show Answer"), tr(country.getCountryName().c_str()));
                    gamecomplete.setModal(true);
                    gamecomplete.setScore(0);
                    gamecomplete.setTime(playtime);
                    gamecomplete.lose();
                    gamecomplete.exec();
                    RoundGame = 0;
                    Mapper_game::close();
                    GeographyWindow *geographyWindow = new GeographyWindow(member, index, this);
                    geographyWindow->show();
                    break;
                }
                ++RoundGame;
                break;
            }
        }
    }
    if (!found) {
        QMessageBox::information(this, tr("Warning"), tr("Invalid value."));
    }
}

QPixmap Mapper_game::showPicMap(bool check) {
    QPixmap green(QString::fromStdString(":/image for c++ project/Background/green.png"));
    QPixmap gray(QString::fromStdString(":/image for c++ project/Background/gray.png"));
    if (check) {
        return green;
    } else {
        return gray;
    }
}


void Mapper_game::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;


    reply = QMessageBox::question(this, "Exit", "Are you sure you want to quit the game?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        Mapper_game::close();
        GeographyWindow *geographyWindow = new GeographyWindow(member, index, this);
        geographyWindow->show();
    }
}
