#include "analogclock.h"
#include "ui_analogclock.h"
#include "gamecomplete.h"
#include <QTimer>
#include <QPainter>
#include <QDateTime>
#include <QPushButton>
#include <QRandomGenerator>
#include <QtGui>
#include <QtCore>
#include <QElapsedTimer>
#include <QPixmap>
#include <QMessageBox>

int currentScore = 0;
int RoundGame = 0;
QElapsedTimer timerTimeTeller;

ClockData::ClockData(const QTime& qtime, const QString& hours, const QString& amPm,const QString& dayNight,const QString& word)
    : qtime_(qtime), hours_(hours), amPm_(amPm), dayNight_(dayNight) ,word_(word) {}

QTime ClockData::getTime() const
{
    return qtime_;
}

QString ClockData::getHours() const
{
    return hours_;
}

QString ClockData::getAmPm() const
{
    return amPm_;
}

QString ClockData::getdayNight() const
{
    return dayNight_;
}

QString ClockData::getWord() const
{
    return word_;
}

AnalogClock::AnalogClock(QWidget *parent)
    : QWidget(parent), ui(new Ui::AnalogClock), currentIndex(-1)
{
    ui->setupUi(this);

    timerTimeTeller.start();

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, QOverload<>::of(&AnalogClock::update));
    timer->start(5000);

    setWindowTitle(tr("Analog Clock"));
    connect(ui->enterButton, &QPushButton::clicked, this, &AnalogClock::checkAnswers);
    connect(ui->enterButton, &QPushButton::clicked, this, &AnalogClock::nextClockClicked);
    QTimer::singleShot(0, this, &AnalogClock::nextClockClicked);


}

AnalogClock::~AnalogClock(){
    delete ui;
}

void AnalogClock::paintEvent(QPaintEvent *)
{
    static const QPoint hourHand[3] = {
        QPoint(7, 8),
        QPoint(-7, 8),
        QPoint(0, -40)
    };
    static const QPoint minuteHand[3] = {
        QPoint(7, 8),
        QPoint(-7, 8),
        QPoint(0, -70)
    };

    QColor hourColor(127, 0, 127);
    QColor minuteColor(0, 127, 127, 191);

    int side = qMin(width(), height());

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.translate(width() / 2, height() / 2);
    painter.scale(side / 500.0, side / 500.0 );

    if (currentIndex != -1 && currentIndex < clockDataList.size()) {
        const ClockData& clockData = clockDataList[currentIndex];

        painter.setPen(Qt::NoPen);
        painter.setBrush(hourColor);
        painter.save();
        painter.rotate(30.0 * ((clockData.getTime().hour() + clockData.getTime().minute() / 60.0)));
        painter.drawConvexPolygon(hourHand, 3);
        painter.restore();
        painter.setPen(hourColor);
        for (int i = 0; i < 12; ++i) {
            painter.drawLine(88, 0, 96, 0);
            painter.rotate(30.0);
        }

        painter.setPen(Qt::NoPen);
        painter.setBrush(minuteColor);
        painter.save();
        painter.rotate(6.0 * (clockData.getTime().minute() + clockData.getTime().second() / 60.0));
        painter.drawConvexPolygon(minuteHand, 3);
        painter.restore();
        painter.setPen(minuteColor);
        for (int j = 0; j < 60; ++j) {
            if ((j % 5) != 0)
                painter.drawLine(92, 0, 96, 0);
            painter.rotate(6.0);
        }
    }
}

void AnalogClock::addClock(const QTime& qtime, const QString& hours, const QString& amPm,const QString& dayNight,const QString& word)
{
    ClockData clockData(qtime, hours, amPm, dayNight, word);
    clockDataList.append(clockData);
    update();
}

void AnalogClock::nextClockClicked()
{
    if (RoundGame < 10) {
        int availableClocks = clockDataList.size() - shownClockIndices.size();

        if (availableClocks > 0) {
            int randomIndex;
            do {
                randomIndex = QRandomGenerator::global()->bounded(clockDataList.size());
            } while (shownClockIndices.contains(randomIndex));

            currentIndex = randomIndex;
            const ClockData& clockData = clockDataList[currentIndex];
            shownClockIndices.insert(randomIndex);
            update();

            qDebug() << "Showing next clock. Index:" << currentIndex;

            QPixmap sun("/Users/gnar_p/analogClock/sun.png");

            QPixmap scaledSun = sun.scaled(130, 130, Qt::KeepAspectRatio);

            QPixmap moon("/Users/gnar_p/analogClock/moon.png");

            QPixmap scaledMoon = moon.scaled(130, 130, Qt::KeepAspectRatio);

            if (clockData.getAmPm() == "PM"){
                ui->img->setPixmap(scaledSun);
            } else {
                ui->img->setPixmap(scaledMoon);
            }
        }
    }
}

void AnalogClock::checkAnswers() {
        const ClockData& clockData = clockDataList[currentIndex];
        QString userans1 = ui->lineEdit->text().toLower();
        QString userans2 = ui->lineEdit_2->text().toUpper();
        QString userans3 = ui->lineEdit_3->text().toLower();

        if (RoundGame < 10) {
        // all correct
        if (userans1 == clockData.getHours() && userans2 == clockData.getAmPm() && userans3 == clockData.getWord()) {
            currentScore += 5;
            QMessageBox::information(this, tr("Correct Answer"), tr("Your answer is all correct!"));
            RoundGame++;
            // 1st wrong
        } else if (userans1 != clockData.getHours() && userans2 == clockData.getAmPm() && userans3 == clockData.getWord()) {
            currentScore += 4;
            QString tellAns = "Hour must be " + clockData.getHours();
            QMessageBox::information(this, tr("One wrong"), tellAns);
            RoundGame++;
            // 2nd wrong
        } else if (userans1 == clockData.getHours() && userans2 != clockData.getAmPm() && userans3 == clockData.getWord()) {
            currentScore += 4;
            QString tellAns = "AM/PM must be " + clockData.getAmPm();
            QMessageBox::information(this, tr("One wrong"), tellAns);
            RoundGame++;
            // 3rd wrong
        } else if (userans1 == clockData.getHours() && userans2 == clockData.getAmPm() && userans3 != clockData.getWord()) {
            currentScore += 2;
            QString tellAns = "Word must be " + clockData.getWord();
            QMessageBox::information(this, tr("One wrong"), tellAns);
            RoundGame++;
            // 1 & 2 wrong
        } else if (userans1 != clockData.getHours() && userans2 != clockData.getAmPm() && userans3 == clockData.getWord()) {
            currentScore += 3;
            QString tellAns = "Hour must be " + clockData.getHours() + "\nAM/PM must be " + clockData.getAmPm();
            QMessageBox::information(this, tr("Two wrong"), tellAns);
            RoundGame++;
            // 1 & 3 wrong
        } else if (userans1 != clockData.getHours() && userans2 == clockData.getAmPm() && userans3 != clockData.getWord()) {
            currentScore += 1;
            QString tellAns = "Hour must be " + clockData.getHours() + "\nWord must be " + clockData.getWord();
            QMessageBox::information(this, tr("Two wrong"), tellAns);
            RoundGame++;
            // 2 & 3 wrong
        } else if (userans1 == clockData.getHours() && userans2 != clockData.getAmPm() && userans3 != clockData.getWord()) {
            currentScore += 1;
            QString tellAns = "AM/PM must be " + clockData.getAmPm() + "\nWord must be " + clockData.getWord();
            QMessageBox::information(this, tr("Two wrong"), tellAns);
            RoundGame++;
        } else {
            QString tellAns = "Hour must be " + clockData.getHours() + "\nAM/PM must be " + clockData.getAmPm()+ "\nWord must be " + clockData.getWord();
            QMessageBox::information(this, tr("All wrong"), tellAns);
            RoundGame++;
        }
    }

    ui->label_10->setText(QString::number(RoundGame+1) + " / 10");
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit->clear();

    if (RoundGame == 10) {
        ui->label_10->setText("10 / 10");
        qint64 playtime = timerTimeTeller.elapsed();
        GameComplete FoodSpellerComplete;
        FoodSpellerComplete.setModal(true);
        FoodSpellerComplete.setScore(currentScore);
        FoodSpellerComplete.setTime(playtime);
        FoodSpellerComplete.exec();
        close();
        RoundGame = 0;
        currentScore = 0;

        qDebug() << "All 10 questions have been shown.";
    }
}

