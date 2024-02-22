#include "jobspeller_game.h"
#include "ui_jobspeller_game.h"
#include <QElapsedTimer>
#include <QMessageBox>
#include <QPixmap>
#include "speller_game.h"
#include "gamecomplete.h"
#include <cstdlib>
#include <ctime>
#include <vector>

int currentRound_j = 0;
const int totalRounds_j = 5;
const int maxAttempts_j = 1;
int totalScore_j = 0;
int attemptsRemaining_j[totalRounds_j] = { maxAttempts_j, maxAttempts_j, maxAttempts_j, maxAttempts_j, maxAttempts_j };
QElapsedTimer timerJob;


JobSpeller_game::JobSpeller_game(Members& member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JobSpeller_game)
    , member(member)
    , index(index)
{

    ui->setupUi(this);
    timerJob.start();
    Objects j1("accountant", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/accountant.jpeg");
    Objects j2("actor", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/actor.jpeg");
    Objects j3("actress", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/actress.jpeg");
    Objects j4("architect", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/architect.jpeg");
    Objects j5("artist", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/artist.jpeg");
    Objects j6("athelete", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/athelete.jpeg");
    Objects j7("baker fox", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/baker fox.jpeg");
    Objects j8("bank teller", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/bank teller.jpeg");
    Objects j9("barista", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/barista.jpeg");
    Objects j10("bus driver", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/bus driver.jpeg");
    Objects j11("butcher", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/butcher.jpeg");
    Objects j12("cabin crew", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/cabin crew.jpeg");
    Objects j13("carpenter", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/carpenter.jpeg");
    Objects j14("ceo", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/ceo.jpeg");
    Objects j15("chef", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/chef.jpeg");
    Objects j16("chemist", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/chemist.jpeg");
    Objects j17("choreographer", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/choreographer.jpeg");
    Objects j18("cleaner", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/cleaner.jpeg");
    Objects j19("clown", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/clown.jpeg");
    Objects j20("comedian", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/comedian.jpeg");
    Objects j21("dancer", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/dancer.jpeg");
    Objects j22("delivery driver", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/delivery driver.jpeg");
    Objects j23("dentist", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/dentist.jpeg");
    Objects j24("dj", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/dj.jpeg");
    Objects j25("doctor", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/doctor.jpeg");
    Objects j26("ecologist", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/ecologist.jpeg");
    Objects j27("editor", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/editor.jpeg");
    Objects j28("electrician", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/electrician.jpeg");
    Objects j29("estate agent", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/estate agent.jpeg");
    Objects j30("farmer", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/farmer.jpeg");
    Objects j31("fashion designer", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/fashion designer.jpeg");
    Objects j32("film director", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/film director.jpeg");
    Objects j33("firefighter", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/firefighter.jpeg");
    Objects j34("florist", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/florist.jpeg");
    Objects j35("geologist", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/geologist.jpeg");
    Objects j36("graphic designer", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/graphic designer.jpeg");
    Objects j37("hairdresser", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/hairdresser.jpeg");
    Objects j38("journalist", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/journalist.jpeg");
    Objects j39("judge", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/judge.jpeg");
    Objects j40("lawyer", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/lawyer.jpeg");
    Objects j41("librarian", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/librarian.jpeg");
    Objects j42("lifeguard", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/lifeguard.jpeg");
    Objects j43("make up artist", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/make up artist.jpeg");
    Objects j44("model", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/model.jpeg");
    Objects j45("monk", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/monk.jpeg");
    Objects j46("musician", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/musician.jpeg");
    Objects j47("nanny", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/nanny.jpeg");
    Objects j48("news reporter", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/news reporter.jpeg");
    Objects j49("nurse", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/nurse.jpeg");
    Objects j50("paleontologist", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/paleontologist.jpeg");
    Objects j51("paramedic", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/paramedic.jpeg");
    Objects j52("pastor", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/pastor.jpeg");
    Objects j53("personal trainer", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/personal trainer.jpeg");
    Objects j54("photographer", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/photographer.jpeg");
    Objects j55("physicist", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/physicist.jpeg");
    Objects j56("pilot", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/pilot.jpeg");
    Objects j57("police", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/police.jpeg");
    Objects j58("politician", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/politician.jpeg");
    Objects j59("receptionist", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/receptionist.jpeg");
    Objects j60("scientist", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/scientist.jpeg");
    Objects j61("software developer", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/software developer.jpeg");
    Objects j62("soldier", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/soldier.jpeg");
    Objects j63("surgeon", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/surgeon.jpeg");
    Objects j64("taxi driver", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/taxi driver.jpeg");
    Objects j65("teacher", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/teacher.jpeg");
    Objects j66("vet", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/vet.jpeg");
    Objects j67("vlogger", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/vlogger.jpeg");
    Objects j68("waitress", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/waitress.jpeg");
    Objects j69("youtuber", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/youtuber.jpeg");
    Objects j70("zookeeper", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Jobs/zookeeper.jpeg");

    VecJob = {j1, j2, j3, j4, j5, j6, j7, j8, j9, j10, j11, j12, j13, j14, j15, j16, j17, j18, j19, j20,
              j21, j22, j23, j24, j25, j26, j27, j28, j29, j30, j31, j32, j33, j34, j35, j36, j37, j38, j39, j40,
              j41, j42, j43, j44, j45, j46, j47, j48, j49, j50, j51, j52, j53, j54, j55, j56, j57, j58, j59, j60,
              j61, j62, j63, j64, j65, j66, j67, j68, j69, j70};


    srand(time(NULL));
    job = VecJob[rand()%(VecJob.size())];
    while (job.getObjectPath() == "-") {
        job = VecJob[rand()%(VecJob.size())];
    }
    QPixmap jobpic(QString::fromStdString(job.getObjectPath()));
    ui->jobPic->setPixmap(jobpic.scaled(ui->jobPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

JobSpeller_game::~JobSpeller_game()
{
    delete ui;
}

void JobSpeller_game::on_submitButton_clicked()
{
    srand(time(NULL));

    std::string ans = ui->inputJob->text().toStdString();

    std::transform(ans.begin(), ans.end(), ans.begin(),
                   [](unsigned char c) { return std::tolower(c); });


    if (currentRound_j >= totalRounds_j && totalScore_j == 0) {
        QMessageBox::information(this, tr("Game Over"), tr("You have completed all rounds!"));
        close();
        Speller_game *spellergame = new Speller_game(member, index, this);
        spellergame->show();
        currentRound_j = 0;
        totalScore_j = 0;
    }

    if (job.getObjectName() == ans) {
        totalScore_j += (attemptsRemaining_j[currentRound_j] == 1) ? 2 : 1;
        currentRound_j++;

        if (currentRound_j >= totalRounds_j && totalScore_j > 0) {
            qint64 playtime = timerJob.elapsed();
            member.addHangmanProgress(playtime, totalScore_j, index);
            GameComplete AnimalSpellerComplete;
            AnimalSpellerComplete.setModal(true);
            AnimalSpellerComplete.setScore(totalScore_j);
            AnimalSpellerComplete.setTime(playtime);
            AnimalSpellerComplete.exec() ;
            close();
            Speller_game *spellergame = new Speller_game(member, index, this);
            spellergame->show();
            currentRound_j = 0;
            totalScore_j = 0;
        }

        ui->guessLeftLabel->setText("You have 2 guesses left.");
        ui->scoreNumber->setText(QString::number(totalScore_j));
        ui->questionNumber->setText(QString::number(currentRound_j + 1));

        job = VecJob[rand()%(VecJob.size())];
        while (job.getObjectPath() == "-") {
            job = VecJob[rand()%(VecJob.size())];
        }
        QPixmap animalpic(QString::fromStdString(job.getObjectPath()));
        ui->jobPic->setPixmap(animalpic.scaled(ui->jobPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else {
        if (attemptsRemaining_j[currentRound_j] == 0) {
            ui->guessLeftLabel->setText("No more guesses left");
            std::string showAnswer = "Answer: " + job.getObjectName();
            QMessageBox::information(this, tr("Answer"), tr(showAnswer.c_str()));

            ui->guessLeftLabel->setText("You have 2 guesses left.");
            ui->scoreNumber->setText(QString::number(totalScore_j)); // Update score UI
            ui->questionNumber->setText(QString::number(currentRound_j + 1)); // Update question number UI

            ui->guessLeftLabel->setText("You have 2 guesses left.");
            job = VecJob[rand()%(VecJob.size())];
            while (job.getObjectPath() == "-") {
                job = VecJob[rand()%(VecJob.size())];
            }
            QPixmap animalpic(QString::fromStdString(job.getObjectPath()));
            ui->jobPic->setPixmap(animalpic.scaled(ui->jobPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

            currentRound_j++;

            if (currentRound_j >= totalRounds_j) {
                qint64 playtime = timerJob.elapsed();
                member.addHangmanProgress(playtime, totalScore_j, index);
                GameComplete AnimalSpellerComplete;
                AnimalSpellerComplete.setModal(true);
                AnimalSpellerComplete.setScore(totalScore_j);
                AnimalSpellerComplete.setTime(playtime);
                AnimalSpellerComplete.exec();
                close();
                Speller_game *spellergame = new Speller_game(member, index, this);
                spellergame->show();
                currentRound_j = 0;
                totalScore_j = 0;
            }
        } else {
            attemptsRemaining_j[currentRound_j]--;
            ui->guessLeftLabel->setText("You have 1 guess left.");
        }
    }
    ui->inputJob->clear();
}

