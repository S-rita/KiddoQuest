#include "placespeller_game.h"
#include "ui_placespeller_game.h"
#include <QElapsedTimer>
#include <QMessageBox>
#include <QPixmap>
#include "speller_game.h"
#include "gamecomplete.h"
#include <cstdlib>
#include <ctime>
#include <vector>

int currentRound_p = 0;
const int totalRounds_p = 5;
const int maxAttempts_p = 1; // Maximum attempts allowed for each picture
int totalScore_p = 0;
int attemptsRemaining_p[totalRounds_p] = { maxAttempts_p, maxAttempts_p, maxAttempts_p, maxAttempts_p, maxAttempts_p };
QElapsedTimer timerPlace;

PlaceSpeller_game::PlaceSpeller_game(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PlaceSpeller_game)
{

    ui->setupUi(this);
    timerPlace.start();
    Objects p1("airport", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/airport.jpeg");
    Objects p2("amusement park", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/amusement park.jpeg");
    Objects p3("aquarium", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/aquarium.jpeg");
    Objects p4("art gallery", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/art gallery.jpeg");
    Objects p5("bakery", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/bakery.jpeg");
    Objects p6("beach", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/beach.jpeg");
    Objects p7("bookstore", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/bookstore.jpeg");
    Objects p8("bowling alley", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/bowling alley.jpeg");
    Objects p9("bridge", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/bridge.jpeg");
    Objects p10("bus station", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/bus station.jpeg");
    Objects p11("cafe", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/cafe.jpeg");
    Objects p12("cathedral", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/cathedral.jpeg");
    Objects p13("church", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/church.jpeg");
    Objects p14("cinema", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/cinema.jpeg");
    Objects p15("convenient store", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/convenient store.jpeg");
    Objects p16("cruise", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/cruise.jpeg");
    Objects p17("desert", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/desert.jpeg");
    Objects p18("electronics store", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/electronics store.jpeg");
    Objects p19("factory", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/factory.jpeg");
    Objects p20("farm", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/farm.jpeg");
    Objects p21("fire station", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/fire station.jpeg");
    Objects p22("forest", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/forest.jpeg");
    Objects p23("furniture store", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/furniture store.jpeg");
    Objects p24("gas station", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/gas station.jpeg");
    Objects p25("greenhouse", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/greenhouse.jpeg");
    Objects p26("gym", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/gym.jpeg");
    Objects p27("hair salon", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/hair salon.jpeg");
    Objects p28("hospital", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/hospital.jpeg");
    Objects p29("hotel", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/hotel.jpeg");
    Objects p30("house", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/house.jpeg");
    Objects p31("lecture hall", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/lecture hall.jpeg");
    Objects p32("libraby", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/libraby.jpeg");
    Objects p33("mall", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/mall.jpeg");
    Objects p34("musuem", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/musuem.jpeg");
    Objects p35("nightclub", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/nightclub.jpeg");
    Objects p36("office", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/office.jpeg");
    Objects p37("palace", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/palace.jpeg");
    Objects p38("park", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/park.jpeg");
    Objects p39("pet shop", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/pet shop.jpeg");
    Objects p40("pharmacy", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/pharmacy.jpeg");
    Objects p41("play ground", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/play ground.jpeg");
    Objects p42("police station", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/police station.jpeg");
    Objects p43("port", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/port.jpeg");
    Objects p44("post office", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/post office.jpeg");
    Objects p45("restaurant", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/restaurant.jpeg");
    Objects p46("school", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/school.jpeg");
    Objects p47("shoe store", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/shoe store.jpeg");
    Objects p48("skyscraper", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/skyscraper.jpeg");
    Objects p49("spa", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/spa.jpeg");
    Objects p50("stadium", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/stadium.jpeg");
    Objects p51("supermarket", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/supermarket.jpeg");
    Objects p52("temple", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/temple.jpeg");
    Objects p53("theater", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/theater.jpeg");
    Objects p54("tree house", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/tree house.jpeg");
    Objects p55("university", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/university.jpeg");
    Objects p56("zoo", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/zoo.jpeg");
    Objects p57("nail salon", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/nail salon.jpeg");
    Objects p58("national park", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/national park.jpeg");
    Objects p59("grooming salon", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/grooming salon.jpeg");
    Objects p60("laundromat", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Places/laundromat.jpeg");


    VecPlace = {p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20,
                p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40,
                p41, p42, p43, p44, p45, p46, p47, p48, p49, p50, p51, p52, p53, p54, p55, p56, p57, p58, p59, p60};

    srand(time(NULL));
    place = VecPlace[rand()%(VecPlace.size())];
    while (place.getObjectPath() == "-") {
        place = VecPlace[rand()%(VecPlace.size())];
    }
    QPixmap placepic(QString::fromStdString(place.getObjectPath()));
    ui->placePic->setPixmap(placepic.scaled(ui->placePic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

PlaceSpeller_game::~PlaceSpeller_game()
{
    delete ui;
}

void PlaceSpeller_game::on_submitButton_clicked()
{
    srand(time(NULL));

    std::string ans = ui->inputPlace->text().toStdString();

    std::transform(ans.begin(), ans.end(), ans.begin(),
                   [](unsigned char c) { return std::tolower(c); });


    if (currentRound_p >= totalRounds_p && totalScore_p == 0) {
        QMessageBox::information(this, tr("Game Over"), tr("You have completed all rounds!"));
        close();
        Speller_game *spellergame = new Speller_game(this);
        spellergame->show();
        currentRound_p = 0;
        totalScore_p = 0;
    }

    if (place.getObjectName() == ans) {
        totalScore_p += (attemptsRemaining_p[currentRound_p] == 1) ? 2 : 1;
        currentRound_p++;

        if (currentRound_p >= totalRounds_p && totalScore_p > 0) {
            qint64 playtime = timerPlace.elapsed();
            GameComplete AnimalSpellerComplete;
            AnimalSpellerComplete.setModal(true);
            AnimalSpellerComplete.setScore(totalScore_p);
            AnimalSpellerComplete.setTime(playtime);
            AnimalSpellerComplete.exec() ;
            close();
            Speller_game *spellergame = new Speller_game(this);
            spellergame->show();
            currentRound_p = 0;
            totalScore_p = 0;
        }

        ui->guessLeftLabel->setText("You have 2 guesses left.");
        ui->scoreNumber->setText(QString::number(totalScore_p));
        ui->questionNumber->setText(QString::number(currentRound_p + 1));

        place = VecPlace[rand()%(VecPlace.size())];
        while (place.getObjectPath() == "-") {
            place = VecPlace[rand()%(VecPlace.size())];
        }
        QPixmap animalpic(QString::fromStdString(place.getObjectPath()));
        ui->placePic->setPixmap(animalpic.scaled(ui->placePic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else {
        if (attemptsRemaining_p[currentRound_p] == 0) {
            ui->guessLeftLabel->setText("No more guesses left");
            std::string showAnswer = "Answer: " + place.getObjectName();
            QMessageBox::information(this, tr("Answer"), tr(showAnswer.c_str()));

            ui->guessLeftLabel->setText("You have 2 guesses left.");
            ui->scoreNumber->setText(QString::number(totalScore_p)); // Update score UI
            ui->questionNumber->setText(QString::number(currentRound_p + 1)); // Update question number UI

            ui->guessLeftLabel->setText("You have 2 guesses left.");
            place = VecPlace[rand()%(VecPlace.size())];
            while (place.getObjectPath() == "-") {
                place = VecPlace[rand()%(VecPlace.size())];
            }
            QPixmap animalpic(QString::fromStdString(place.getObjectPath()));
            ui->placePic->setPixmap(animalpic.scaled(ui->placePic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

            currentRound_p++;

            if (currentRound_p >= totalRounds_p) {
                qint64 playtime = timerPlace.elapsed();
                GameComplete AnimalSpellerComplete;
                AnimalSpellerComplete.setModal(true);
                AnimalSpellerComplete.setScore(totalScore_p);
                AnimalSpellerComplete.setTime(playtime);
                AnimalSpellerComplete.exec();
                close();
                Speller_game *spellergame = new Speller_game(this);
                spellergame->show();
                currentRound_p = 0;
                totalScore_p = 0;
            }
        } else {
            attemptsRemaining_p[currentRound_p]--;
            ui->guessLeftLabel->setText("You have 1 guess left.");
        }
    }
    ui->inputPlace->clear();
}

