#ifndef TIMETELLER_GAME_H
#define TIMETELLER_GAME_H

#include <QMainWindow>
#include <QWidget>
#include <QList>
#include <QTime>
#include <QString>
#include <QElapsedTimer>
#include "members.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class TimeTeller_game;
}
QT_END_NAMESPACE

class ClockData
{

private:
    QTime qtime_;
    QString hours_;
    QString amPm_;
    QString word_;
    QString dayNight_;

public:
    ClockData(const QTime& qtime, const QString& hours, const QString& amPm,const QString& dayNight, const QString& word);

    QTime getTime() const;
    QString getHours() const;
    QString getAmPm() const;
    QString getdayNight() const;
    QString getWord() const;
};

class TimeTeller_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit TimeTeller_game(Members& member, int index, QWidget *parent = nullptr);
    ~TimeTeller_game();

protected:
    void paintEvent(QPaintEvent *event) override;
    void addClock(const QTime& qtime, const QString& hours, const QString& amPm,const QString& dayNight,const QString& word);
    void keyPressEvent(QKeyEvent *event) override;

public slots:
    void nextClockClicked();

private slots:
    void on_exitButton_clicked();

private:
    Ui::TimeTeller_game *ui;
    QList<ClockData> clockDataList;
    QSet<int> shownClockIndices;
    Members member;
    int index;
    int currentIndex;
    int currentScore = 0;
    int RoundGame = 0;
    QElapsedTimer timer;
    void checkAnswers();

};

#endif // TIMETELLER_GAME_H
