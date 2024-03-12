#include "hangmanplay_game.h"
#include <QElapsedTimer>
#include <QKeyEvent>
#include <QMessageBox>
#include <QPixmap>
#include "gamecomplete.h"
#include "hangman_game.h"
#include "ui_hangmanplay_game.h"
#include "word.h"
#include <vector>

int CurrentScore = 0;
int Hang = 0;
int FullWord = 0;
QElapsedTimer timerHangman;

HangmanPlay_game::HangmanPlay_game(Members &member, int index, std::vector<Word> VecWord, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HangmanPlay_game)
    , member(member)
    , index(index)
    , VecWord(VecWord)
{
    ui->setupUi(this);
    timerHangman.start();

    srand(time(NULL));
    word = VecWord[rand() % (VecWord.size())];
    for (int i = 0; i < word.getWordlength(); ++i) {
        if (i == word.getWordlength() - 1) {
            displayWord += "_";
        } else {
            displayWord += "_ ";
        }
    }
    ui->wordlabel->setText(QString::fromStdString(displayWord));
    ui->poslabel->setText(QString::fromStdString(word.getPartofSpeech()));
    CurrentScore = 10;
    ui->scorelabel->setText(QString::fromStdString(std::to_string(CurrentScore)));
}

HangmanPlay_game::~HangmanPlay_game()
{
    delete ui;
}

void HangmanPlay_game::on_AButton_clicked()
{
    ui->AButton->setEnabled(false);
    checkChar('a');
    ui->AButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}
void HangmanPlay_game::on_BButton_clicked()
{
    ui->BButton->setEnabled(false);
    checkChar('b');
    ui->BButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_CButton_clicked()
{
    ui->CButton->setEnabled(false);
    checkChar('c');
    ui->CButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_DButton_clicked()
{
    ui->DButton->setEnabled(false);
    checkChar('d');
    ui->DButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_EButton_clicked()
{
    ui->EButton->setEnabled(false);
    checkChar('e');
    ui->EButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_FButton_clicked()
{
    ui->FButton->setEnabled(false);
    checkChar('f');
    ui->FButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_GButton_clicked()
{
    ui->GButton->setEnabled(false);
    checkChar('g');
    ui->GButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_HButton_clicked()
{
    ui->HButton->setEnabled(false);
    checkChar('h');
    ui->HButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_IButton_clicked()
{
    ui->IButton->setEnabled(false);
    checkChar('i');
    ui->IButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_JButton_clicked()
{
    ui->JButton->setEnabled(false);
    checkChar('j');
    ui->JButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_KButton_clicked()
{
    ui->KButton->setEnabled(false);
    checkChar('k');
    ui->KButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_LButton_clicked()
{
    ui->LButton->setEnabled(false);
    checkChar('l');
    ui->LButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_MButton_clicked()
{
    ui->MButton->setEnabled(false);
    checkChar('m');
    ui->MButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_NButton_clicked()
{
    ui->NButton->setEnabled(false);
    checkChar('n');
    ui->NButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_OButton_clicked()
{
    ui->OButton->setEnabled(false);
    checkChar('o');
    ui->OButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_PButton_clicked()
{
    ui->PButton->setEnabled(false);
    checkChar('p');
    ui->PButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_QButton_clicked()
{
    ui->QButton->setEnabled(false);
    checkChar('q');
    ui->QButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_RButton_clicked()
{
    ui->RButton->setEnabled(false);
    checkChar('r');
    ui->RButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_SButton_clicked()
{
    ui->SButton->setEnabled(false);
    checkChar('s');
    ui->SButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_TButton_clicked()
{
    ui->TButton->setEnabled(false);
    checkChar('t');
    ui->TButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_UButton_clicked()
{
    ui->UButton->setEnabled(false);
    checkChar('u');
    ui->UButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_VButton_clicked()
{
    ui->VButton->setEnabled(false);
    checkChar('v');
    ui->VButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_WButton_clicked()
{
    ui->WButton->setEnabled(false);
    checkChar('w');
    ui->WButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_XButton_clicked()
{
    ui->XButton->setEnabled(false);
    checkChar('x');
    ui->XButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_YButton_clicked()
{
    ui->YButton->setEnabled(false);
    checkChar('y');
    ui->YButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::on_ZButton_clicked()
{
    ui->ZButton->setEnabled(false);
    checkChar('z');
    ui->ZButton->setStyleSheet("background-color: rgb(169, 169, 169);");
}

void HangmanPlay_game::checkChar(char chr)
{
    QPixmap hang1(":/image for c++ project/English/Hangman/hang1");
    QPixmap hang2(":/image for c++ project/English/Hangman/hang2");
    QPixmap hang3(":/image for c++ project/English/Hangman/hang3");
    QPixmap hang4(":/image for c++ project/English/Hangman/hang4");
    QPixmap hang5(":/image for c++ project/English/Hangman/hang5");
    QPixmap hang6(":/image for c++ project/English/Hangman/hang6");
    QPixmap hang7(":/image for c++ project/English/Hangman/hang7");
    QPixmap hang8(":/image for c++ project/English/Hangman/hang8");
    QPixmap hang9(":/image for c++ project/English/Hangman/hang9");
    QPixmap hang10(":/image for c++ project/English/Hangman/hang10");
    bool found = false;
    for (int i = 0; i < word.getWordlength(); ++i) {
        if (word.getWord()[i] == chr) {
            displayWord[i * 2] = chr;
            found = true;
            ++FullWord;
        }
    }
    if (!found) {
        ++Hang;
        --CurrentScore;
        ui->scorelabel->setText(QString::fromStdString(std::to_string(CurrentScore)));
        switch (Hang) {
        case 1:
            ui->hangmanpic->setPixmap(hang1);
            break;
        case 2:
            ui->hangmanpic->setPixmap(hang2);
            break;
        case 3:
            ui->hangmanpic->setPixmap(hang3);
            break;
        case 4:
            ui->hangmanpic->setPixmap(hang4);
            break;
        case 5:
            ui->hangmanpic->setPixmap(hang5);
            break;
        case 6:
            ui->hangmanpic->setPixmap(hang6);
            break;
        case 7:
            ui->hangmanpic->setPixmap(hang7);
            break;
        case 8:
            ui->hangmanpic->setPixmap(hang8);
            break;
        case 9:
            ui->hangmanpic->setPixmap(hang9);
            break;
        case 10:
            ui->hangmanpic->setPixmap(hang10);
            qint64 playtime = timerHangman.elapsed();
            QMessageBox::information(this, tr("Show Answer"), tr(word.getWord().c_str()));
            member.addHangmanProgress(playtime, CurrentScore, index);
            GameComplete HangmanComplete;
            HangmanComplete.setModal(true);
            HangmanComplete.lose();
            HangmanComplete.setScore(CurrentScore);
            HangmanComplete.setTime(playtime);
            HangmanComplete.exec();
            CurrentScore = 0;
            Hang = 0;
            FullWord = 0;
            ui->hangmanpic->clear();
            HangmanPlay_game::close();
            Hangman_game *hangmanWindow = new Hangman_game(member, index, this);
            hangmanWindow->show();
            break;
        }
    }
    ui->wordlabel->setText(QString::fromStdString(displayWord));
    ui->wordlabel->show();

    if (FullWord == word.getWordlength()) {
        qint64 playtime = timerHangman.elapsed();
        member.addHangmanProgress(playtime, CurrentScore, index);
        GameComplete HangmanComplete;
        HangmanComplete.setModal(true);
        HangmanComplete.setScore(CurrentScore);
        HangmanComplete.setTime(playtime);
        HangmanComplete.exec();
        CurrentScore = 0;
        Hang = 0;
        FullWord = 0;
        ui->hangmanpic->clear();
        HangmanPlay_game::close();
        Hangman_game *hangmanWindow = new Hangman_game(member, index, this);
        hangmanWindow->show();
    }
}

void HangmanPlay_game::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this,
                                  "Exit",
                                  "Are you sure you want to quit the game?",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        HangmanPlay_game::close();
        Hangman_game *hangmanWindow = new Hangman_game(member, index, this);
        hangmanWindow->show();
    }
}

void HangmanPlay_game::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_A) {
        event->accept();
        if (ui->AButton->isEnabled()) {
            on_AButton_clicked();
        }
    } else if (event->key() == Qt::Key_B) {
        event->accept();
        if (ui->BButton->isEnabled()) {
            on_BButton_clicked();
        }
    } else if (event->key() == Qt::Key_C) {
        event->accept();
        if (ui->CButton->isEnabled()) {
            on_CButton_clicked();
        }
    } else if (event->key() == Qt::Key_D) {
        event->accept();
        if (ui->DButton->isEnabled()) {
            on_DButton_clicked();
        }
    } else if (event->key() == Qt::Key_E) {
        event->accept();
        if (ui->EButton->isEnabled()) {
            on_EButton_clicked();
        }
    } else if (event->key() == Qt::Key_F) {
        event->accept();
        if (ui->FButton->isEnabled()) {
            on_FButton_clicked();
        }
    } else if (event->key() == Qt::Key_G) {
        event->accept();
        if (ui->GButton->isEnabled()) {
            on_GButton_clicked();
        }
    } else if (event->key() == Qt::Key_H) {
        event->accept();
        if (ui->HButton->isEnabled()) {
            on_HButton_clicked();
        }
    } else if (event->key() == Qt::Key_I) {
        event->accept();
        if (ui->IButton->isEnabled()) {
            on_IButton_clicked();
        }
    } else if (event->key() == Qt::Key_J) {
        event->accept();
        if (ui->JButton->isEnabled()) {
            on_JButton_clicked();
        }
    } else if (event->key() == Qt::Key_K) {
        event->accept();
        if (ui->KButton->isEnabled()) {
            on_KButton_clicked();
        }
    } else if (event->key() == Qt::Key_L) {
        event->accept();
        if (ui->LButton->isEnabled()) {
            on_LButton_clicked();
        }
    } else if (event->key() == Qt::Key_M) {
        event->accept();
        if (ui->MButton->isEnabled()) {
            on_MButton_clicked();
        }
    } else if (event->key() == Qt::Key_N) {
        event->accept();
        if (ui->NButton->isEnabled()) {
            on_NButton_clicked();
        }
    } else if (event->key() == Qt::Key_O) {
        event->accept();
        if (ui->OButton->isEnabled()) {
            on_OButton_clicked();
        }
    } else if (event->key() == Qt::Key_P) {
        event->accept();
        if (ui->PButton->isEnabled()) {
            on_PButton_clicked();
        }
    } else if (event->key() == Qt::Key_Q) {
        event->accept();
        if (ui->QButton->isEnabled()) {
            on_QButton_clicked();
        }
    } else if (event->key() == Qt::Key_R) {
        event->accept();
        if (ui->RButton->isEnabled()) {
            on_RButton_clicked();
        }
    } else if (event->key() == Qt::Key_S) {
        event->accept();
        if (ui->SButton->isEnabled()) {
            on_SButton_clicked();
        }
    } else if (event->key() == Qt::Key_T) {
        event->accept();
        if (ui->TButton->isEnabled()) {
            on_TButton_clicked();
        }
    } else if (event->key() == Qt::Key_U) {
        event->accept();
        if (ui->UButton->isEnabled()) {
            on_UButton_clicked();
        }
    } else if (event->key() == Qt::Key_V) {
        event->accept();
        if (ui->VButton->isEnabled()) {
            on_VButton_clicked();
        }
    } else if (event->key() == Qt::Key_W) {
        event->accept();
        if (ui->WButton->isEnabled()) {
            on_WButton_clicked();
        }
    } else if (event->key() == Qt::Key_X) {
        event->accept();
        if (ui->XButton->isEnabled()) {
            on_XButton_clicked();
        }
    } else if (event->key() == Qt::Key_Y) {
        event->accept();
        if (ui->YButton->isEnabled()) {
            on_YButton_clicked();
        }
    } else if (event->key() == Qt::Key_Z) {
        event->accept();
        if (ui->ZButton->isEnabled()) {
            on_ZButton_clicked();
        }
    } else if (event->key() == Qt::Key_Escape) {
        event->accept();
        on_exitButton_clicked();
    } else {
        QMainWindow::keyPressEvent(event);
    }
}
