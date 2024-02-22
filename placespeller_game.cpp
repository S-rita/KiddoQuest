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

PlaceSpeller_game::PlaceSpeller_game(Members& member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PlaceSpeller_game)
    , member(member)
    , index(index)
{

    ui->setupUi(this);
    timerPlace.start();
    Objects p1("airport", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/airport.jpeg");
    Objects p2("amusement park", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/amusement park.jpeg");
    Objects p3("aquarium", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/aquarium.jpeg");
    Objects p4("art gallery", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/art gallery.jpeg");
    Objects p5("bakery", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/bakery.jpeg");
    Objects p6("beach", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/beach.jpeg");
    Objects p7("bookstore", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/bookstore.jpeg");
    Objects p8("bowling alley", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/bowling alley.jpeg");
    Objects p9("bridge", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/bridge.jpeg");
    Objects p10("bus station", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/bus station.jpeg");
    Objects p11("cafe", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/cafe.jpeg");
    Objects p12("cathedral", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/cathedral.jpeg");
    Objects p13("church", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/church.jpeg");
    Objects p14("cinema", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/cinema.jpeg");
    Objects p15("convenient store", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/convenient store.jpeg");
    Objects p16("cruise", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/cruise.jpeg");
    Objects p17("desert", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/desert.jpeg");
    Objects p18("electronics store", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/electronics store.jpeg");
    Objects p19("factory", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/factory.jpeg");
    Objects p20("farm", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/farm.jpeg");
    Objects p21("fire station", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/fire station.jpeg");
    Objects p22("forest", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/forest.jpeg");
    Objects p23("furniture store", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/furniture store.jpeg");
    Objects p24("gas station", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/gas station.jpeg");
    Objects p25("greenhouse", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/greenhouse.jpeg");
    Objects p26("gym", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/gym.jpeg");
    Objects p27("hair salon", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/hair salon.jpeg");
    Objects p28("hospital", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/hospital.jpeg");
    Objects p29("hotel", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/hotel.jpeg");
    Objects p30("house", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/house.jpeg");
    Objects p31("lecture hall", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/lecture hall.jpeg");
    Objects p32("libraby", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/libraby.jpeg");
    Objects p33("mall", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/mall.jpeg");
    Objects p34("musuem", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/musuem.jpeg");
    Objects p35("nightclub", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/nightclub.jpeg");
    Objects p36("office", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/office.jpeg");
    Objects p37("palace", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/palace.jpeg");
    Objects p38("park", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/park.jpeg");
    Objects p39("pet shop", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/pet shop.jpeg");
    Objects p40("pharmacy", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/pharmacy.jpeg");
    Objects p41("play ground", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/play ground.jpeg");
    Objects p42("police station", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/police station.jpeg");
    Objects p43("port", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/port.jpeg");
    Objects p44("post office", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/post office.jpeg");
    Objects p45("restaurant", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/restaurant.jpeg");
    Objects p46("school", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/school.jpeg");
    Objects p47("shoe store", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/shoe store.jpeg");
    Objects p48("skyscraper", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/skyscraper.jpeg");
    Objects p49("spa", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/spa.jpeg");
    Objects p50("stadium", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/stadium.jpeg");
    Objects p51("supermarket", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/supermarket.jpeg");
    Objects p52("temple", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/temple.jpeg");
    Objects p53("theater", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/theater.jpeg");
    Objects p54("tree house", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/tree house.jpeg");
    Objects p55("university", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/university.jpeg");
    Objects p56("zoo", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/zoo.jpeg");
    Objects p57("nail salon", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/nail salon.jpeg");
    Objects p58("national park", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/national park.jpeg");
    Objects p59("grooming salon", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/grooming salon.jpeg");
    Objects p60("laundromat", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Places/laundromat.jpeg");


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
        Speller_game *spellergame = new Speller_game(member, index, this);
        spellergame->show();
        currentRound_p = 0;
        totalScore_p = 0;
    }

    if (place.getObjectName() == ans) {
        totalScore_p += (attemptsRemaining_p[currentRound_p] == 1) ? 2 : 1;
        currentRound_p++;

        if (currentRound_p >= totalRounds_p && totalScore_p > 0) {
            qint64 playtime = timerPlace.elapsed();
            member.addHangmanProgress(playtime, totalScore_p, index);
            GameComplete AnimalSpellerComplete;
            AnimalSpellerComplete.setModal(true);
            AnimalSpellerComplete.setScore(totalScore_p);
            AnimalSpellerComplete.setTime(playtime);
            AnimalSpellerComplete.exec() ;
            close();
            Speller_game *spellergame = new Speller_game(member, index, this);
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
                member.addHangmanProgress(playtime, totalScore_p, index);
                GameComplete AnimalSpellerComplete;
                AnimalSpellerComplete.setModal(true);
                AnimalSpellerComplete.setScore(totalScore_p);
                AnimalSpellerComplete.setTime(playtime);
                AnimalSpellerComplete.exec();
                close();
                Speller_game *spellergame = new Speller_game(member, index, this);
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

