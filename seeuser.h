#ifndef SEEUSER_H
#define SEEUSER_H

#include <QMainWindow>
#include <QComboBox>
#include "objects.h"
#include "members.h"

namespace Ui {
class seeUser;
}

class seeUser : public QMainWindow
{
    Q_OBJECT

public:
    explicit seeUser(Members &member, int index, QWidget *parent = nullptr);
    ~seeUser();

protected:
    void keyPressEvent(QKeyEvent *event) override;

private slots:
    void on_exitButton_clicked();
    void changeProfilePicture(int order);

private:
    Ui::seeUser *ui;
    std::vector<Objects> VecProfilepic;
    Objects pic;
    Members member;
    int index;
    string displayTime(int time);
    string roundScore(double score);
};

#endif // SEEUSER_H
