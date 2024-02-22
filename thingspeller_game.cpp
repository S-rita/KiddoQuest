#include "thingspeller_game.h"
#include "ui_thingspeller_game.h"
#include <QElapsedTimer>
#include <QMessageBox>
#include <QPixmap>
#include "speller_game.h"
#include "gamecomplete.h"
#include <cstdlib>
#include <ctime>
#include <vector>


int currentRound_t = 0;
const int totalRounds_t = 5;
const int maxAttempts_t = 1;
int totalScore_t = 0;
int attemptsRemaining_t[totalRounds_t] = { maxAttempts_t, maxAttempts_t, maxAttempts_t, maxAttempts_t, maxAttempts_t };
QElapsedTimer timerThing;

ThingSpeller_game::ThingSpeller_game(Members& member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ThingSpeller_game)
    , member(member)
    , index(index)
{

    ui->setupUi(this);
    timerThing.start();
    Objects t1("anchor", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/anchor.jpeg");
    Objects t2("apron", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/apron.jpeg");
    Objects t3("backpack", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/backpack.jpeg");
    Objects t4("baseball", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/baseball.jpeg");
    Objects t5("basketball", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/basketball.jpeg");
    Objects t6("bicycle", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/bicycle.jpeg");
    Objects t7("camera", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/camera.jpeg");
    Objects t8("candle", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/candle.jpeg");
    Objects t9("clock", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/clock.jpeg");
    Objects t10("computer", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/computer.jpeg");
    Objects t11("diamond", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/diamond.jpeg");
    Objects t12("dice", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/dice.jpeg");
    Objects t13("drum", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/drum.jpeg");
    Objects t14("fireworks", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/fireworks.jpeg");
    Objects t15("football", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/football.jpeg");
    Objects t16("gift", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/gift.jpeg");
    Objects t17("glasses", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/glasses.jpeg");
    Objects t18("gloves", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/gloves.jpeg");
    Objects t19("hammer", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/hammer.jpeg");
    Objects t20("igloo", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/igloo.jpeg");
    Objects t21("ink", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/ink.jpeg");
    Objects t22("jewelry", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/jewelry.jpeg");
    Objects t23("jigsaw puzzle", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/jigsaw puzzle.jpeg");
    Objects t24("kettle", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/kettle.jpeg");
    Objects t25("keyboard", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/keyboard.jpeg");
    Objects t26("kite", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/kite.jpeg");
    Objects t27("lamborghini", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/lamborghini.jpeg");
    Objects t28("lantern", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/lantern.jpeg");
    Objects t29("lava", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/lava.jpeg");
    Objects t30("mailbox", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/mailbox.jpeg");
    Objects t31("mirror", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/mirror.jpeg");
    Objects t32("money", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/money.jpeg");
    Objects t33("printer", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/printer.jpeg");
    Objects t34("raft", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/raft.jpeg");
    Objects t35("saddle", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/saddle.jpeg");
    Objects t36("scissors", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/scissors.jpeg");
    Objects t37("tape", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/tape.jpeg");
    Objects t38("throne", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/throne.jpeg");
    Objects t39("tie", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/tie.jpeg");
    Objects t40("umbrella", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/umbrella.jpeg");
    Objects t41("xylophone", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/xylophone.jpeg");
    Objects t42("zipper", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/zipper.jpeg");
    Objects t43("key", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/key.jpeg");
    Objects t44("lamp", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/lamp.jpeg");
    Objects t45("radio", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/radio.jpeg");
    Objects t46("toaster", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/toaster.jpeg");
    Objects t47("telescope", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/telescope.jpeg");
    Objects t48("vase", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/vase.jpeg");
    Objects t49("helmet", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/helmet.jpeg");
    Objects t50("satellite", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Things/satellite.jpeg");


    VecThing = {t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20,
                t21, t22, t23, t24, t25, t26, t27, t28, t29, t30, t31, t32, t33, t34, t35, t36, t37, t38, t39, t40,
                t41, t42, t45, t46, t47, t48, t49, t50};

    srand(time(NULL));
    thing = VecThing[rand()%(VecThing.size())];
    while (thing.getObjectPath() == "-") {
        thing = VecThing[rand()%(VecThing.size())];
    }
    QPixmap thingpic(QString::fromStdString(thing.getObjectPath()));
    ui->thingPic->setPixmap(thingpic.scaled(ui->thingPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

ThingSpeller_game::~ThingSpeller_game()
{
    delete ui;
}

void ThingSpeller_game::on_submitButton_clicked()
{
    srand(time(NULL));

    std::string ans = ui->inputThing->text().toStdString();

    std::transform(ans.begin(), ans.end(), ans.begin(),
                   [](unsigned char c) { return std::tolower(c); });


    if (currentRound_t >= totalRounds_t && totalScore_t == 0) {
        QMessageBox::information(this, tr("Game Over"), tr("You have completed all rounds!"));
        close();
        Speller_game *spellergame = new Speller_game(member, index, this);
        spellergame->show();
        currentRound_t = 0;
        totalScore_t = 0;
    }

    if (thing.getObjectName() == ans) {
        totalScore_t += (attemptsRemaining_t[currentRound_t] == 1) ? 2 : 1;
        currentRound_t++;

        if (currentRound_t >= totalRounds_t && totalScore_t > 0) {
            qint64 playtime = timerThing.elapsed();
            member.addHangmanProgress(playtime, totalScore_t, index);
            GameComplete AnimalSpellerComplete;
            AnimalSpellerComplete.setModal(true);
            AnimalSpellerComplete.setScore(totalScore_t);
            AnimalSpellerComplete.setTime(playtime);
            AnimalSpellerComplete.exec() ;
            close();
            Speller_game *spellergame = new Speller_game(member, index, this);
            spellergame->show();
            currentRound_t = 0;
            totalScore_t = 0;
        }

        ui->guessLeftLabel->setText("You have 2 guesses left.");
        ui->scoreNumber->setText(QString::number(totalScore_t));
        ui->questionNumber->setText(QString::number(currentRound_t + 1));

        thing = VecThing[rand()%(VecThing.size())];
        while (thing.getObjectPath() == "-") {
            thing = VecThing[rand()%(VecThing.size())];
        }
        QPixmap thingPic(QString::fromStdString(thing.getObjectPath()));
        ui->thingPic->setPixmap(thingPic.scaled(ui->thingPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else {
        if (attemptsRemaining_t[currentRound_t] == 0) {
            ui->guessLeftLabel->setText("No more guesses left");
            std::string showAnswer = "Answer: " + thing.getObjectName();
            QMessageBox::information(this, tr("Answer"), tr(showAnswer.c_str()));

            ui->guessLeftLabel->setText("You have 2 guesses left.");
            ui->scoreNumber->setText(QString::number(totalScore_t));
            ui->questionNumber->setText(QString::number(currentRound_t + 1));

            ui->guessLeftLabel->setText("You have 2 guesses left.");
            thing = VecThing[rand()%(VecThing.size())];
            while (thing.getObjectPath() == "-") {
                thing = VecThing[rand()%(VecThing.size())];
            }
            QPixmap thingPic(QString::fromStdString(thing.getObjectPath()));
            ui->thingPic->setPixmap(thingPic.scaled(ui->thingPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

            currentRound_t++;

            if (currentRound_t >= totalRounds_t) {
                qint64 playtime = timerThing.elapsed();
                member.addHangmanProgress(playtime, totalScore_t, index);
                GameComplete AnimalSpellerComplete;
                AnimalSpellerComplete.setModal(true);
                AnimalSpellerComplete.setScore(totalScore_t);
                AnimalSpellerComplete.setTime(playtime);
                AnimalSpellerComplete.exec();
                close();
                Speller_game *spellergame = new Speller_game(member, index, this);
                spellergame->show();
                currentRound_t = 0;
                totalScore_t = 0;
            }
        } else {
            attemptsRemaining_t[currentRound_t]--;
            ui->guessLeftLabel->setText("You have 1 guess left.");
        }
    }
    ui->inputThing->clear();
}

