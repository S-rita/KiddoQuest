#ifndef ANALOGCLOCK_H
#define ANALOGCLOCK_H

#include <QWidget>
#include <QList>
#include <QTime>
#include <QString>
#include <QElapsedTimer>
#include "ui_analogclock.h"

QT_BEGIN_NAMESPACE

namespace Ui {
class AnalogClock;
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

class AnalogClock : public QWidget
{
    Q_OBJECT

public:
    AnalogClock(QWidget *parent = nullptr);
    ~AnalogClock();
    void addClock(const QTime& qtime, const QString& hours, const QString& amPm,const QString& dayNight,const QString& word);
    void checkAnswers();

protected:
    void paintEvent(QPaintEvent *event) override;

public slots:
    void nextClockClicked();

private:
    QList<ClockData> clockDataList;
    QSet<int> shownClockIndices;
    Ui::AnalogClock *ui;
    int currentIndex;
};

#endif
