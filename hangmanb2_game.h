#ifndef HANGMANB2_GAME_H
#define HANGMANB2_GAME_H

#include <QMainWindow>
#include "word.h"

namespace Ui {
class HangmanB2_game;
}

class HangmanB2_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit HangmanB2_game(QWidget *parent = nullptr);
    ~HangmanB2_game();
    void checkChar(char chr);

private slots:
    void on_AButton_clicked();

    void on_BButton_clicked();

    void on_CButton_clicked();

    void on_DButton_clicked();

    void on_EButton_clicked();

    void on_FButton_clicked();

    void on_GButton_clicked();

    void on_HButton_clicked();

    void on_IButton_clicked();

    void on_JButton_clicked();

    void on_KButton_clicked();

    void on_LButton_clicked();

    void on_MButton_clicked();

    void on_NButton_clicked();

    void on_OButton_clicked();

    void on_PButton_clicked();

    void on_QButton_clicked();

    void on_RButton_clicked();

    void on_SButton_clicked();

    void on_TButton_clicked();

    void on_UButton_clicked();

    void on_VButton_clicked();

    void on_WButton_clicked();

    void on_XButton_clicked();

    void on_YButton_clicked();

    void on_ZButton_clicked();

private:
    Ui::HangmanB2_game *ui;
    std::vector<Word> VecB2;
    Word word;
    std::string displayWord;
};

#endif // HANGMANB2_GAME_H
