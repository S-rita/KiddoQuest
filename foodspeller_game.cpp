#include "foodspeller_game.h"
#include "ui_foodspeller_game.h"
#include "speller_game.h"
#include "gamecomplete.h"
#include <QMessageBox>
#include <QPixmap>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <QKeyEvent>

FoodSpeller_game::FoodSpeller_game(Members& member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FoodSpeller_game)
    , member(member)
    , index(index)
{
    ui->setupUi(this);
    timer.start();
    Objects f1("almond", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/almond.jpeg");
    Objects f2("apple", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/apple.jpeg");
    Objects f3("asparagus", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/asparagus.jpeg");
    Objects f4("avocado", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/avocado.jpeg");
    Objects f5("bacon", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/bacon.jpeg");
    Objects f6("bagel", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/bagel.jpeg");
    Objects f7("bbq", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/bbq.jpeg");
    Objects f8("beer", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/beer.jpeg");
    Objects f9("bread", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/bread.jpeg");
    Objects f10("broccoli", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/broccoli.jpeg");
    Objects f11("bruschetta", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/bruschetta.jpeg");
    Objects f12("burrito", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/burrito.jpeg");
    Objects f13("cake", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/cake.jpeg");
    Objects f14("carrot", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/carrot.jpeg");
    Objects f15("celery", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/celery.jpeg");
    Objects f16("cereal", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/cereal.jpeg");
    Objects f17("cheese", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/cheese.jpeg");
    Objects f18("chocolate", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/chocolate.jpeg");
    Objects f19("coffee", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/coffee.jpeg");
    Objects f20("cookie", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/cookie.jpeg");
    Objects f21("cupcake", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/cupcake.jpeg");
    Objects f22("curry", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/curry.jpeg");
    Objects f23("donut", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/donut.jpeg");
    Objects f24("dumpling", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/dumpling.jpeg");
    Objects f25("fondue", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/fondue.jpeg");
    Objects f26("french toast", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/french toast.jpeg");
    Objects f27("gnocchi", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/gnocchi.jpeg");
    Objects f28("granola", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/granola.jpeg");
    Objects f29("guacamole", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/guacamole.jpeg");
    Objects f30("ham", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/ham.jpeg");
    Objects f31("hamburger", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/hamburger.jpeg");
    Objects f32("hot dog", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/hot dog.jpeg");
    Objects f33("ice cream", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/ice cream.jpeg");
    Objects f34("jelly", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/jelly.jpeg");
    Objects f35("ketchup", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/ketchup.jpeg");
    Objects f36("kimchi", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/kimchi.jpeg");
    Objects f37("lasagna", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/lasagna.jpeg");
    Objects f38("lobster", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/lobster.jpeg");
    Objects f39("milkshake", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/milkshake.jpeg");
    Objects f40("noodle", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/noodle.jpeg");
    Objects f41("pad kra pao", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/pad kra pao.jpeg");
    Objects f42("pad thai", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/pad thai.jpeg");
    Objects f43("pancake", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/pancake.jpeg");
    Objects f44("pizza", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/pizza.jpeg");
    Objects f45("quesadilla", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/quesadilla.jpeg");
    Objects f46("ramen", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/ramen.jpeg");
    Objects f47("spaghetti", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/spaghetti.jpeg");
    Objects f48("sushi", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/sushi.jpeg");
    Objects f49("waffle", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/waffle.jpeg");
    Objects f50("wine", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/wine.jpeg");
    Objects f51("yogurt", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/yogurt.jpeg");
    Objects f52("zucchini", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/zucchini.jpeg");
    Objects f53("sausage", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/sausage.jpeg");
    Objects f54("lollipop", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/lollipop.jpeg");
    Objects f55("mushroom", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/mushroom.jpeg");
    Objects f56("truffle", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/truffle.jpeg");
    Objects f57("oatmeal", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/oatmeal.jpeg");
    Objects f58("baguette", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/baguette.jpeg");
    Objects f59("edamame", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/edamame.jpeg");
    Objects f60("ginger", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Foods/ginger.jpeg");

    VecFood = {f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f20,
               f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31, f32, f33, f34, f35, f36, f37, f38, f39, f40,
               f41, f42, f43, f44, f45, f46, f47, f48, f49, f50, f51, f52, f53, f54, f55, f56, f57, f58, f59, f60};

    srand(time(NULL));
    food = VecFood[rand()%(VecFood.size())];
    while (food.getObjectPath() == "-") {
        food = VecFood[rand()%(VecFood.size())];
    }
    QPixmap foodpic(QString::fromStdString(food.getObjectPath()));
    ui->foodPic->setPixmap(foodpic.scaled(ui->foodPic->size(), Qt::KeepAspectRatio));
}

FoodSpeller_game::~FoodSpeller_game()
{
    delete ui;
}

void FoodSpeller_game::on_submitButton_clicked()
{
    srand(time(NULL));

    std::string ans = ui->inputFood->text().toStdString();

    std::transform(ans.begin(), ans.end(), ans.begin(),
                   [](unsigned char c) { return std::tolower(c); });


    if (currentRound >= totalRounds && totalScore == 0) {
        qint64 playtime = timer.elapsed();
        member.addSpellerProgress(playtime, totalScore, index);
        GameComplete FoodSpellerLose;
        FoodSpellerLose.setModal(true);
        FoodSpellerLose.setScore(totalScore);
        FoodSpellerLose.setTime(playtime);
        FoodSpellerLose.lose();
        FoodSpellerLose.exec() ;
        close();
        Speller_game *spellergame = new Speller_game(member, index, this);
        spellergame->show();
    }

    if (food.getObjectName() == ans) {
        totalScore += (attemptsRemaining[currentRound] == 1) ? 2 : 1;
        currentRound++;

        if (currentRound >= totalRounds && totalScore > 0) {
            qint64 playtime = timer.elapsed();
            member.addSpellerProgress(playtime, totalScore, index);
            GameComplete FoodSpellerWin;
            FoodSpellerWin.setModal(true);
            FoodSpellerWin.setScore(totalScore);
            FoodSpellerWin.setTime(playtime);
            FoodSpellerWin.exec() ;
            close();
            Speller_game *spellergame = new Speller_game(member, index, this);
            spellergame->show();
        }

        ui->guessLeftLabel->setText("You have 2 guesses left.");
        ui->scoreNumber->setText(QString::number(totalScore));
        ui->questionNumber->setText(QString::number(currentRound + 2));

        food = VecFood[rand()%(VecFood.size())];
        while (food.getObjectPath() == "-") {
            food = VecFood[rand()%(VecFood.size())];
        }
        QPixmap foodpic(QString::fromStdString(food.getObjectPath()));
        ui->foodPic->setPixmap(foodpic.scaled(ui->foodPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else {
        if (attemptsRemaining[currentRound] == 0) {
            ui->guessLeftLabel->setText("No more guesses left");
            std::string showAnswer = "Answer: " + food.getObjectName();
            QMessageBox::information(this, tr("Answer"), tr(showAnswer.c_str()));

            ui->guessLeftLabel->setText("You have 2 guesses left.");
            ui->scoreNumber->setText(QString::number(totalScore)); // Update score UI
            ui->questionNumber->setText(QString::number(currentRound + 2)); // Update question number UI

            ui->guessLeftLabel->setText("You have 2 guesses left.");
            food = VecFood[rand()%(VecFood.size())];
            while (food.getObjectPath() == "-") {
                food = VecFood[rand()%(VecFood.size())];
            }
            QPixmap foodpic(QString::fromStdString(food.getObjectPath()));
            ui->foodPic->setPixmap(foodpic.scaled(ui->foodPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

            currentRound++;

            if (currentRound >= totalRounds && totalScore == 0) {
                qint64 playtime = timer.elapsed();
                member.addSpellerProgress(playtime, totalScore, index);
                GameComplete FoodSpellerLose;
                FoodSpellerLose.setModal(true);
                FoodSpellerLose.lose();
                FoodSpellerLose.setScore(totalScore);
                FoodSpellerLose.setTime(playtime);
                FoodSpellerLose.exec();
                close();
                Speller_game *spellergame = new Speller_game(member, index, this);
                spellergame->show();
            } else if  (currentRound >= totalRounds && totalScore > 0) {
                qint64 playtime = timer.elapsed();
                member.addSpellerProgress(playtime, totalScore, index);
                GameComplete FoodSpellerWin;
                FoodSpellerWin.setModal(true);
                FoodSpellerWin.setScore(totalScore);
                FoodSpellerWin.setTime(playtime);
                FoodSpellerWin.exec() ;
                close();
                Speller_game *spellergame = new Speller_game(member, index, this);
                spellergame->show();
            }
        } else {
            attemptsRemaining[currentRound]--;
            ui->guessLeftLabel->setText("You have 1 guess left.");
        }
    }
    ui->inputFood->clear();
}

void FoodSpeller_game::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Exit", "Are you sure you want to quit the game?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        FoodSpeller_game::close();
        Speller_game *spellerwindow = new Speller_game(member, index, this);
        spellerwindow->show();
    }
}

void FoodSpeller_game::keyPressEvent(QKeyEvent *event) {
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
