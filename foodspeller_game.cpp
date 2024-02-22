#include "foodspeller_game.h"
#include "ui_foodspeller_game.h"
#include "speller_game.h"
#include "gamecomplete.h"
#include <QElapsedTimer>
#include <QMessageBox>
#include <QPixmap>
#include <cstdlib>
#include <ctime>
#include <vector>

int currentRound_f = 0;
const int totalRounds_f = 5;
const int maxAttempts_f = 1;
int totalScore_f = 0;
int attemptsRemaining_f[totalRounds_f] = { maxAttempts_f, maxAttempts_f, maxAttempts_f, maxAttempts_f, maxAttempts_f };
QElapsedTimer timerFood;

FoodSpeller_game::FoodSpeller_game(Members& member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FoodSpeller_game)
    , member(member)
    , index(index)
{
    ui->setupUi(this);
    timerFood.start();
    Objects f1("almond", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/almond.jpeg");
    Objects f2("apple", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/apple.jpeg");
    Objects f3("asparagus", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/asparagus.jpeg");
    Objects f4("avocado", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/avocado.jpeg");
    Objects f5("bacon", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/bacon.jpeg");
    Objects f6("bagel", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/bagel.jpeg");
    Objects f7("bbq", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/bbq.jpeg");
    Objects f8("beer", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/beer.jpeg");
    Objects f9("bread", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/bread.jpeg");
    Objects f10("broccoli", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/broccoli.jpeg");
    Objects f11("bruschetta", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/bruschetta.jpeg");
    Objects f12("burrito", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/burrito.jpeg");
    Objects f13("cake", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/cake.jpeg");
    Objects f14("carrot", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/carrot.jpeg");
    Objects f15("celery", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/celery.jpeg");
    Objects f16("cereal", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/cereal.jpeg");
    Objects f17("cheese", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/cheese.jpeg");
    Objects f18("chocolate", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/chocolate.jpeg");
    Objects f19("coffee", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/coffee.jpeg");
    Objects f20("cookie", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/cookie.jpeg");
    Objects f21("cupcake", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/cupcake.jpeg");
    Objects f22("curry", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/curry.jpeg");
    Objects f23("donut", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/donut.jpeg");
    Objects f24("dumpling", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/dumpling.jpeg");
    Objects f25("fondue", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/fondue.jpeg");
    Objects f26("french toast", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/french toast.jpeg");
    Objects f27("gnocchi", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/gnocchi.jpeg");
    Objects f28("granola", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/granola.jpeg");
    Objects f29("guacamole", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/guacamole.jpeg");
    Objects f30("ham", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/ham.jpeg");
    Objects f31("hamburger", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/hamburger.jpeg");
    Objects f32("hot dog", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/hot dog.jpeg");
    Objects f33("ice cream", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/ice cream.jpeg");
    Objects f34("jelly", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/jelly.jpeg");
    Objects f35("ketchup", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/ketchup.jpeg");
    Objects f36("kimchi", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/kimchi.jpeg");
    Objects f37("lasagna", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/lasagna.jpeg");
    Objects f38("lobster", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/lobster.jpeg");
    Objects f39("milkshake", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/milkshake.jpeg");
    Objects f40("noodle", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/noodle.jpeg");
    Objects f41("pad kra pao", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/pad kra pao.jpeg");
    Objects f42("pad thai", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/pad thai.jpeg");
    Objects f43("pancake", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/pancake.jpeg");
    Objects f44("pizza", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/pizza.jpeg");
    Objects f45("quesadilla", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/quesadilla.jpeg");
    Objects f46("ramen", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/ramen.jpeg");
    Objects f47("spaghetti", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/spaghetti.jpeg");
    Objects f48("sushi", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/sushi.jpeg");
    Objects f49("waffle", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/waffle.jpeg");
    Objects f50("wine", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/wine.jpeg");
    Objects f51("yogurt", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/yogurt.jpeg");
    Objects f52("zucchini", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/zucchini.jpeg");
    Objects f53("sausage", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/sausage.jpeg");
    Objects f54("lollipop", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/lollipop.jpeg");
    Objects f55("mushroom", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/mushroom.jpeg");
    Objects f56("truffle", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/truffle.jpeg");
    Objects f57("oatmeal", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/oatmeal.jpeg");
    Objects f58("baguette", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/baguette.jpeg");
    Objects f59("edamame", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/edamame.jpeg");
    Objects f60("ginger", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Foods/ginger.jpeg");

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


    if (currentRound_f >= totalRounds_f && totalScore_f == 0) {
        QMessageBox::information(this, tr("Game Over"), tr("You have completed all rounds!"));
        close();
        Speller_game *spellergame = new Speller_game(member, index, this);
        spellergame->show();
        currentRound_f = 0;
        totalScore_f = 0;
    }

    if (food.getObjectName() == ans) {
        totalScore_f += (attemptsRemaining_f[currentRound_f] == 1) ? 2 : 1;
        currentRound_f++;

        if (currentRound_f >= totalRounds_f && totalScore_f > 0) {
            qint64 playtime = timerFood.elapsed();
            member.addSpellerProgress(playtime, totalScore_f, index);
            GameComplete FoodSpellerComplete;
            FoodSpellerComplete.setModal(true);
            FoodSpellerComplete.setScore(totalScore_f);
            FoodSpellerComplete.setTime(playtime);
            FoodSpellerComplete.exec() ;
            close();
            Speller_game *spellergame = new Speller_game(member, index, this);
            spellergame->show();
            currentRound_f = 0;
            totalScore_f = 0;
        }

        ui->guessLeftLabel->setText("You have 2 guesses left.");
        ui->scoreNumber->setText(QString::number(totalScore_f));
        ui->questionNumber->setText(QString::number(currentRound_f + 1));

        food = VecFood[rand()%(VecFood.size())];
        while (food.getObjectPath() == "-") {
            food = VecFood[rand()%(VecFood.size())];
        }
        QPixmap foodpic(QString::fromStdString(food.getObjectPath()));
        ui->foodPic->setPixmap(foodpic.scaled(ui->foodPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else {
        if (attemptsRemaining_f[currentRound_f] == 0) {
            ui->guessLeftLabel->setText("No more guesses left");
            std::string showAnswer = "Answer: " + food.getObjectName();
            QMessageBox::information(this, tr("Answer"), tr(showAnswer.c_str()));

            ui->guessLeftLabel->setText("You have 2 guesses left.");
            ui->scoreNumber->setText(QString::number(totalScore_f)); // Update score UI
            ui->questionNumber->setText(QString::number(currentRound_f + 1)); // Update question number UI

            ui->guessLeftLabel->setText("You have 2 guesses left.");
            food = VecFood[rand()%(VecFood.size())];
            while (food.getObjectPath() == "-") {
                food = VecFood[rand()%(VecFood.size())];
            }
            QPixmap foodpic(QString::fromStdString(food.getObjectPath()));
            ui->foodPic->setPixmap(foodpic.scaled(ui->foodPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

            currentRound_f++;

            if (currentRound_f >= totalRounds_f) {
                qint64 playtime = timerFood.elapsed();
                member.addSpellerProgress(playtime, totalScore_f, index);
                GameComplete FoodSpellerComplete;
                FoodSpellerComplete.setModal(true);
                FoodSpellerComplete.setScore(totalScore_f);
                FoodSpellerComplete.setTime(playtime);
                FoodSpellerComplete.exec();
                close();
                Speller_game *spellergame = new Speller_game(member, index, this);
                spellergame->show();
                currentRound_f = 0;
                totalScore_f = 0;
            }
        } else {
            attemptsRemaining_f[currentRound_f]--;
            ui->guessLeftLabel->setText("You have 1 guess left.");
        }
    }
    ui->inputFood->clear();
}

