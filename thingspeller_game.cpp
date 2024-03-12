#include "thingspeller_game.h"
#include "ui_thingspeller_game.h"
#include "speller_game.h"
#include "gamecomplete.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <QMessageBox>
#include <QPixmap>
#include <QKeyEvent>

ThingSpeller_game::ThingSpeller_game(Members& member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ThingSpeller_game)
    , member(member)
    , index(index)
{

    ui->setupUi(this);
    timer.start();
    Objects t1("anchor", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/anchor.jpeg");
    Objects t2("apron", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/apron.jpeg");
    Objects t3("backpack", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/backpack.jpeg");
    Objects t4("baseball", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/baseball.jpeg");
    Objects t5("basketball", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/basketball.jpeg");
    Objects t6("bicycle", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/bicycle.jpeg");
    Objects t7("camera", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/camera.jpeg");
    Objects t8("candle", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/candle.jpeg");
    Objects t9("clock", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/clock.jpeg");
    Objects t10("computer", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/computer.jpeg");
    Objects t11("diamond", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/diamond.jpeg");
    Objects t12("dice", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/dice.jpeg");
    Objects t13("drum", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/drum.jpeg");
    Objects t14("fireworks", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/fireworks.jpeg");
    Objects t15("football", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/football.jpeg");
    Objects t16("gift", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/gift.jpeg");
    Objects t17("glasses", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/glasses.jpeg");
    Objects t18("gloves", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/gloves.jpeg");
    Objects t19("hammer", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/hammer.jpeg");
    Objects t20("igloo", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/igloo.jpeg");
    Objects t21("ink", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/ink.jpeg");
    Objects t22("jewelry", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/jewelry.jpeg");
    Objects t23("jigsaw", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/jigsaw puzzle.jpeg");
    Objects t24("kettle", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/kettle.jpeg");
    Objects t25("keyboard", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/keyboard.jpeg");
    Objects t26("kite", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/kite.jpeg");
    Objects t27("lamborghini", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/lamborghini.jpeg");
    Objects t28("lantern", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/lantern.jpeg");
    Objects t29("lava", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/lava.jpeg");
    Objects t30("mailbox", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/mailbox.jpeg");
    Objects t31("mirror", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/mirror.jpeg");
    Objects t32("money", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/money.jpeg");
    Objects t33("printer", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/printer.jpeg");
    Objects t34("raft", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/raft.jpeg");
    Objects t35("saddle", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/saddle.jpeg");
    Objects t36("scissors", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/scissors.jpeg");
    Objects t37("tape", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/tape.jpeg");
    Objects t38("throne", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/throne.jpeg");
    Objects t39("tie", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/tie.jpeg");
    Objects t40("umbrella", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/umbrella.jpeg");
    Objects t41("xylophone", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/xylophone.jpeg");
    Objects t42("zipper", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/zipper.jpeg");
    Objects t43("key", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/key.jpeg");
    Objects t44("lamp", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/lamp.jpeg");
    Objects t45("radio", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/radio.jpeg");
    Objects t46("toaster", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/toaster.jpeg");
    Objects t47("telescope", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/telescope.jpeg");
    Objects t48("vase", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/vase.jpeg");
    Objects t49("helmet", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/helmet.jpeg");
    Objects t50("satellite", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/satellite.jpeg");
    Objects t51("binoculars", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/binoculars.jpeg");
    Objects t52("fishing rod", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/fishing rod.jpeg");
    Objects t53("headphones", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/headphones.jpeg");
    Objects t54("compass", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/compass.jpeg");
    Objects t55("hammock", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/hammock.jpeg");
    Objects t56("rubik's cube", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/rubik's cube.jpeg");
    Objects t57("vinyl", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/vinyl.jpeg");
    Objects t58("drone", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/drone.jpeg");
    Objects t59("skateboard", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/skateboard.jpeg");
    Objects t60("surfboard", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/surfboard.jpeg");
    Objects t61("snowboard", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/snowboard.jpeg");
    Objects t62("frisbee", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/frisbee.jpeg");
    Objects t63("calculator", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/calculator.jpeg");
    Objects t64("sleeping mask", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/sleeping mask.jpeg");
    Objects t65("magnifying glass", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/magnifying glass.jpeg");
    Objects t66("microphone", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/microphone.jpeg");
    Objects t67("flask", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/flask.jpeg");
    Objects t68("dumbbell", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/dumbbell.jpeg");
    Objects t69("flashlight", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/flashlight.jpeg");
    Objects t70("whistle", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/whistle.jpeg");
    Objects t71("tongs", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/tongs.jpeg");
    Objects t72("matches", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/matches.jpeg");
    Objects t73("microscope", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/microscope.jpeg");
    Objects t74("whisk", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/whisk.jpeg");
    Objects t75("slinky", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/slinky.jpeg");
    Objects t76("floss", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/floss.jpeg");
    Objects t77("shovel", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/shovel.jpeg");
    Objects t78("broom", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/broom.jpeg");
    Objects t79("key", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/key.jpeg");
    Objects t80("face mask", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Things/face mask.jpeg");

    VecThing = {t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20,
                t21, t22, t23, t24, t25, t26, t27, t28, t29, t30, t31, t32, t33, t34, t35, t36, t37, t38, t39, t40,
                t41, t42, t43, t44, t45, t46, t47, t48, t49, t50, t51, t52, t53, t54, t55, t56, t57, t58, t59, t60,
                t61, t62, t63, t64, t65, t66, t67, t68, t69, t70, t71, t72, t73, t74, t75, t76, t77, t78, t79, t80};

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

    if (currentRound >= totalRounds && totalScore == 0) {
        qint64 playtime = timer.elapsed();
        member.addSpellerProgress(playtime, totalScore, index);
        GameComplete ThingSpellerLose;
        ThingSpellerLose.setModal(true);
        ThingSpellerLose.setScore(totalScore);
        ThingSpellerLose.setTime(playtime);
        ThingSpellerLose.lose();
        ThingSpellerLose.exec() ;
        close();
        Speller_game *spellergame = new Speller_game(member, index, this);
        spellergame->show();
    }

    if (thing.getObjectName() == ans) {
        totalScore += (attemptsRemaining[currentRound] == 1) ? 2 : 1;
        currentRound++;

        if (currentRound >= totalRounds && totalScore > 0) {
            qint64 playtime = timer.elapsed();
            member.addSpellerProgress(playtime, totalScore, index);
            GameComplete ThingSpellerComplete;
            ThingSpellerComplete.setModal(true);
            ThingSpellerComplete.setScore(totalScore);
            ThingSpellerComplete.setTime(playtime);
            ThingSpellerComplete.exec() ;
            close();
            Speller_game *spellergame = new Speller_game(member, index, this);
            spellergame->show();
        }

        ui->guessLeftLabel->setText("You have 2 guesses left.");
        ui->scoreNumber->setText(QString::number(totalScore));
        ui->questionNumber->setText(QString::number(currentRound + 1));

        thing = VecThing[rand()%(VecThing.size())];
        while (thing.getObjectPath() == "-") {
            thing = VecThing[rand()%(VecThing.size())];
        }
        QPixmap Thingpic(QString::fromStdString(thing.getObjectPath()));
        ui->thingPic->setPixmap(Thingpic.scaled(ui->thingPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else {
        if (attemptsRemaining[currentRound] == 0) {
            ui->guessLeftLabel->setText("No more guesses left");
            std::string showAnswer = "Answer: " + thing.getObjectName();
            QMessageBox::information(this, tr("Answer"), tr(showAnswer.c_str()));

            ui->guessLeftLabel->setText("You have 2 guesses left.");
            ui->scoreNumber->setText(QString::number(totalScore));
            ui->questionNumber->setText(QString::number(currentRound + 2));

            ui->guessLeftLabel->setText("You have 2 guesses left.");
            thing = VecThing[rand()%(VecThing.size())];
            while (thing.getObjectPath() == "-") {
                thing = VecThing[rand()%(VecThing.size())];
            }
            QPixmap thingpic(QString::fromStdString(thing.getObjectPath()));
            ui->thingPic->setPixmap(thingpic.scaled(ui->thingPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

            currentRound++;

            if (currentRound >= totalRounds && totalScore == 0) {
                qint64 playtime = timer.elapsed();
                member.addSpellerProgress(playtime, totalScore, index);
                GameComplete ThingSpellerLose;
                ThingSpellerLose.setModal(true);
                ThingSpellerLose.lose();
                ThingSpellerLose.setScore(totalScore);
                ThingSpellerLose.setTime(playtime);
                ThingSpellerLose.exec();
                close();
                Speller_game *spellergame = new Speller_game(member, index, this);
                spellergame->show();
            } else if  (currentRound >= totalRounds && totalScore > 0) {
                qint64 playtime = timer.elapsed();
                member.addSpellerProgress(playtime, totalScore, index);
                GameComplete ThingSpellerWin;
                ThingSpellerWin.setModal(true);
                ThingSpellerWin.setScore(totalScore);
                ThingSpellerWin.setTime(playtime);
                ThingSpellerWin.exec();
                close();
                Speller_game *spellergame = new Speller_game(member, index, this);
                spellergame->show();
            }
        } else {
            attemptsRemaining[currentRound]--;
            ui->guessLeftLabel->setText("You have 1 guess left.");
        }
    }

    ui->inputThing->clear();
}

void ThingSpeller_game::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Exit", "Are you sure you want to quit the game?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        close();
        Speller_game *spellerwindow = new Speller_game(member, index, this);
        spellerwindow->show();
    }
}


void ThingSpeller_game::keyPressEvent(QKeyEvent *event) {
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

