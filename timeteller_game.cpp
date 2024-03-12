#include "timeteller_game.h"
#include "ui_timeteller_game.h"
#include "gamecomplete.h"
#include "mathwindow.h"
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
#include <QKeyEvent>

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

TimeTeller_game::TimeTeller_game(Members &member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TimeTeller_game)
    , currentIndex(-1)
    , member(member)
    , index(index)
{
    ui->setupUi(this);

    addClock(QTime(00, 05), "00.05","12.05AM", "AM", "five past twelve");
    addClock(QTime(00, 10), "00.10","12.10AM", "AM", "ten past twelve");
    addClock(QTime(00, 15), "00.15","12.15AM", "AM", "quarter past twelve");
    addClock(QTime(00, 20), "00.20","12.20AM", "AM", "twenty past twelve");
    addClock(QTime(00, 25), "00.25","12.25AM", "AM", "twenty five past twelve");
    addClock(QTime(00, 30), "00.30","12.30AM", "AM", "half past twelve");
    addClock(QTime(00, 35), "00.35","12.35AM", "AM", "twenty five to one");
    addClock(QTime(00, 40), "00.40","12.40AM", "AM", "twenty to one");
    addClock(QTime(00, 45), "00.45","12.45AM", "AM", "quarter to one");
    addClock(QTime(00, 50), "00.50","12.50AM", "AM", "ten minutes to one");
    addClock(QTime(00, 55), "00.50","12.55AM", "AM", "five minutes to one");
    addClock(QTime(1, 00), "01.00","01.00AM", "AM", "one o'clock");
    addClock(QTime(1, 05), "01.05","01.05AM", "AM", "five past one");
    addClock(QTime(1, 10), "01.10","01.10AM", "AM", "ten past one");
    addClock(QTime(1, 15), "01.15","01.15AM", "AM", "quarter past one");
    addClock(QTime(1, 20), "01.20","01.20AM", "AM", "twenty past one");
    addClock(QTime(1, 25), "01.25","01.25AM", "AM", "twenty five past one");
    addClock(QTime(1, 30), "01.30","01.30AM", "AM", "half past one");
    addClock(QTime(1, 35), "01.35","01.35AM", "AM", "twenty five to two");
    addClock(QTime(1, 40), "01.40","01.40AM", "AM", "twenty to two");
    addClock(QTime(1, 45), "01.45","01.45AM", "AM", "quarter to two");
    addClock(QTime(1, 50), "01.50","01.50AM", "AM", "ten to two");
    addClock(QTime(1, 55), "01.55","01.55AM", "AM", "five to two");
    addClock(QTime(2, 00), "02.00","02.00AM", "AM", "two o'clock");
    addClock(QTime(2, 05), "02.05","02.05AM", "AM", "five past two");
    addClock(QTime(2, 10), "02.10","02.10AM", "AM", "ten past two");
    addClock(QTime(2, 15), "02.15","02.15AM", "AM", "quarter past two");
    addClock(QTime(2, 20), "02.20","02.20AM", "AM", "twenty past two");
    addClock(QTime(2, 25), "02.25","02.25AM", "AM", "twenty five past two");
    addClock(QTime(2, 30), "02.30","02.30AM", "AM", "half past two");
    addClock(QTime(2, 35), "02.35","02.35AM", "AM", "twenty five to three");
    addClock(QTime(2, 40), "02.40","02.40AM", "AM", "twenty to three");
    addClock(QTime(2, 45), "02.45","02.45AM", "AM", "quarter to three");
    addClock(QTime(2, 50), "02.50","02.50AM", "AM", "ten to three");
    addClock(QTime(2, 55), "02.55","02.55AM", "AM", "five to three");
    addClock(QTime(3, 00), "03.00","03.00AM", "AM", "three o'clock");
    addClock(QTime(3, 05), "03.05","03.05AM", "AM", "five past three");
    addClock(QTime(3, 10), "03.10","03.10AM", "AM", "ten past three");
    addClock(QTime(3, 15), "03.15",",03.15AM", "AM", "quarter past three");
    addClock(QTime(3, 20), "03.20","03.20AM", "AM", "twenty past three");
    addClock(QTime(3, 25), "03.25","03.25AM", "AM", "twenty five past three");
    addClock(QTime(3, 30), "03.30","03.30AM", "AM", "half past three");
    addClock(QTime(3, 35), "03.35","03.35AM", "AM", "twenty five to four");
    addClock(QTime(3, 40), "03.40","03.40AM", "AM", "twenty to four");
    addClock(QTime(3, 45), "03.45","03.45AM", "AM", "quarter to four");
    addClock(QTime(3, 50), "03.50","03.50AM", "AM", "ten to four");
    addClock(QTime(3, 55), "03.55","03.55AM", "AM", "five to four");
    addClock(QTime(4, 00), "04.00","04.00AM", "AM", "four o'clock");
    addClock(QTime(4, 05), "04.05","04.05AM", "AM", "five past four");
    addClock(QTime(4, 10), "04.10","04.10AM", "AM", "ten past four");
    addClock(QTime(4, 15), "04.15","04.15AM", "AM", "quarter past four");
    addClock(QTime(4, 20), "04.20","04.20AM", "AM", "twenty past four");
    addClock(QTime(4, 25), "04.25","04.25AM", "AM", "twenty five past four");
    addClock(QTime(4, 30), "04.30","04.30AM", "AM", "half past four");
    addClock(QTime(4, 35), "04.35","04.35AM", "AM", "twenty five to five");
    addClock(QTime(4, 40), "04.40","04.40AM", "AM", "twenty to five");
    addClock(QTime(4, 45), "04.45","04.45AM", "AM", "quarter to five");
    addClock(QTime(4, 50), "04.50","04.50AM", "AM", "ten to five");
    addClock(QTime(4, 55), "04.55","04.55AM", "AM", "five to five");
    addClock(QTime(5, 00), "05.00","05.00AM", "AM", "five o'clock");
    addClock(QTime(5, 05), "05.05","05.05AM", "AM", "five past five");
    addClock(QTime(5, 10), "05.10","05.10AM", "AM", "ten past five");
    addClock(QTime(5, 15), "05.15","05.15AM", "AM", "quarter past five");
    addClock(QTime(5, 20), "05.20","05.20AM", "AM", "twenty past five");
    addClock(QTime(5, 25), "05.25","05.25AM", "AM", "twenty five past five");
    addClock(QTime(5, 30), "05.30","05.30AM", "AM", "half past five");
    addClock(QTime(5, 35), "05.35","05.35AM", "AM", "twenty five to six");
    addClock(QTime(5, 40), "05.40","05.40AM", "AM", "twenty to six");
    addClock(QTime(5, 45), "05.45","05.45AM", "AM", "quarter to six");
    addClock(QTime(5, 50), "05.50","05.50AM", "AM", "ten to six");
    addClock(QTime(5, 55), "05.55","05.55AM", "AM", "five to six");
    addClock(QTime(6, 00), "06.00","06.00AM", "AM", "six o'clock");
    addClock(QTime(6, 05), "06.05","06.05AM", "AM", "five past six");
    addClock(QTime(6, 10), "06.10","06.10AM", "AM", "ten past six");
    addClock(QTime(6, 15), "06.15","06.15AM", "AM", "quarter past six");
    addClock(QTime(6, 20), "06.20","06.20AM", "AM", "twenty past six");
    addClock(QTime(6, 25), "06.25","06.25AM", "AM", "twenty five past six");
    addClock(QTime(6, 30), "06.30","06.30AM", "AM", "half past six");
    addClock(QTime(6, 35), "06.35","06.35AM", "AM", "twenty five to seven");
    addClock(QTime(6, 40), "06.40","06.40AM", "AM", "twenty to seven");
    addClock(QTime(6, 45), "06.45","06.45AM", "AM", "quarter to seven");
    addClock(QTime(6, 50), "06.50","06.50AM", "AM", "ten to seven");
    addClock(QTime(6, 55), "06.55","06.55AM", "AM", "five to seven");
    addClock(QTime(7, 00), "07.00","07.00AM", "AM", "seven o'clock");
    addClock(QTime(7, 05), "07.05","07.05AM", "AM", "five past seven");
    addClock(QTime(7, 10), "07.10","07.10AM", "AM", "ten past seven");
    addClock(QTime(7, 15), "07.15","07.15AM", "AM", "quarter past seven");
    addClock(QTime(7, 20), "07.20","07.20AM", "AM", "twenty past seven");
    addClock(QTime(7, 25), "07.25","07.25AM", "AM", "twenty five past seven");
    addClock(QTime(7, 30), "07.30","07.30AM", "AM", "half past seven");
    addClock(QTime(7, 35), "07.35","07.35AM", "AM", "twenty five to eight");
    addClock(QTime(7, 40), "07.40","07.40AM", "AM", "twenty to eight");
    addClock(QTime(7, 45), "07.45","07.45AM", "AM", "quarter to eight");
    addClock(QTime(7, 50), "07.50","07.50AM", "AM", "ten to eight");
    addClock(QTime(7, 55), "07.55","07.55AM", "AM", "five to eight");
    addClock(QTime(8, 00), "08.00","08.00AM", "AM", "eight o'clock");
    addClock(QTime(8, 05), "08.05","08.05AM", "AM", "five past eight");
    addClock(QTime(8, 10), "08.10","08.10AM", "AM", "ten past eight");
    addClock(QTime(8, 15), "08.15","08.15AM", "AM", "quarter past eight");
    addClock(QTime(8, 20), "08.20","08.20AM", "AM", "twenty past eight");
    addClock(QTime(8, 25), "08.25","08.25AM", "AM", "twenty five past eight");
    addClock(QTime(8, 30), "08.30","08.30AM", "AM", "half past eight");
    addClock(QTime(8, 35), "08.35","08.35AM", "AM", "twenty five to nine");
    addClock(QTime(8, 40), "08.40","08.40AM", "AM", "twenty to nine");
    addClock(QTime(8, 45), "08.45","08.45AM", "AM", "quarter to nine");
    addClock(QTime(8, 50), "08.50","08.50AM", "AM", "ten to nine");
    addClock(QTime(8, 55), "08.55","08.55AM", "AM", "five to nine");
    addClock(QTime(9, 00), "09.00","09.00AM", "AM", "nine o'clock");
    addClock(QTime(9, 05), "09.05","09.05AM", "AM", "five past nine");
    addClock(QTime(9, 10), "09.10","09.10AM", "AM", "ten past nine");
    addClock(QTime(9, 15), "09.15","09.15AM", "AM", "quarter past nine");
    addClock(QTime(9, 20), "09.20","09.20AM", "AM", "twenty past nine");
    addClock(QTime(9, 25), "09.25","09.25AM", "AM", "twenty five past nine");
    addClock(QTime(9, 30), "09.30","09.30AM", "AM", "half past nine");
    addClock(QTime(9, 35), "09.35","09.35AM", "AM", "twenty five to ten");
    addClock(QTime(9, 40), "09.40","09.40AM", "AM", "twenty to ten");
    addClock(QTime(9, 45), "09.45","09.45AM", "AM", "quarter to ten");
    addClock(QTime(9, 50), "09.50","09.50AM", "AM", "ten to ten");
    addClock(QTime(9, 55), "09.55","09.55AM", "AM", "five to ten");
    addClock(QTime(10, 00), "10.00","10.00AM", "AM", "ten o'clock");
    addClock(QTime(10, 05), "10.05","10.05AM", "AM", "five past ten");
    addClock(QTime(10, 10), "10.10","10.10AM", "AM", "ten past ten");
    addClock(QTime(10, 15), "10.15","10.15AM", "AM", "quarter past ten");
    addClock(QTime(10, 20), "10.20","10.20AM", "AM", "twenty past ten");
    addClock(QTime(10, 25), "10.25","10.25AM", "AM", "twenty five past ten");
    addClock(QTime(10, 30), "10.30","10.30AM", "AM", "half past ten");
    addClock(QTime(10, 35), "10.35","10.35AM", "AM", "twenty five to eleven");
    addClock(QTime(10, 40), "10.40","10.40AM", "AM", "twenty to eleven");
    addClock(QTime(10, 45), "10.45","10.45AM", "AM", "quarter to eleven");
    addClock(QTime(10, 50), "10.50","10.50AM", "AM", "ten to eleven");
    addClock(QTime(10, 55), "10.55","10.55AM", "AM", "five to eleven");
    addClock(QTime(11, 00), "11.00","11.00AM", "AM", "eleven o'clock");
    addClock(QTime(11, 05), "11.05","11.05AM", "AM", "five past eleven");
    addClock(QTime(11, 10), "11.10","11.10AM", "AM", "ten past eleven");
    addClock(QTime(11, 15), "11.15","11.15AM", "AM", "quarter past eleven");
    addClock(QTime(11, 20), "11.20","11.20AM", "AM", "twenty past eleven");
    addClock(QTime(11, 25), "11.25","11.25AM", "AM", "twenty five past eleven");
    addClock(QTime(11, 30), "11.30","11.30AM", "AM", "half past eleven");
    addClock(QTime(11, 35), "11.35","11.35AM", "AM", "twenty five to twelve");
    addClock(QTime(11, 40), "11.40","11.40AM", "AM", "twenty to twelve");
    addClock(QTime(11, 45), "11.45","11.45AM", "AM", "quarter to twelve");
    addClock(QTime(11, 50), "11.50","11.50AM", "AM", "ten to twelve");
    addClock(QTime(11, 55), "11.55","11.55AM", "AM", "five to twelve");
    addClock(QTime(12, 00), "12.00","12.00PM", "PM", "twelve o'clock");
    addClock(QTime(12, 05), "12.05","12.05PM", "PM", "five past twelve");
    addClock(QTime(12, 10), "12.10","12.10PM", "PM", "ten past twelve");
    addClock(QTime(12, 15), "12.15","12.15PM", "PM", "quarter past twelve");
    addClock(QTime(12, 20), "12.20","12.20PM", "PM", "twenty past twelve");
    addClock(QTime(12, 25), "12.25","12.25PM", "PM", "twenty five past twelve");
    addClock(QTime(12, 30), "12.30","12.30PM", "PM", "half past twelve");
    addClock(QTime(12, 35), "12.35","12.35PM", "PM", "twenty five to one");
    addClock(QTime(12, 40), "12.40","12.40PM", "PM", "twenty to one");
    addClock(QTime(12, 45), "12.45","12.45PM", "PM", "quarter to one");
    addClock(QTime(12, 50), "12.50","12.50PM", "PM", "ten to one");
    addClock(QTime(12, 55), "12.55","12.55PM", "PM", "five to one");
    addClock(QTime(13, 00), "13.00","01.00PM", "PM", "one o'clock");
    addClock(QTime(13, 05), "13.05","01.05PM", "PM", "five past one");
    addClock(QTime(13, 10), "13.10","01.10PM", "PM", "ten past one");
    addClock(QTime(13, 15), "13.15","01.15PM", "PM", "quarter past one");
    addClock(QTime(13, 20), "13.20","01.20PM", "PM", "twenty past one");
    addClock(QTime(13, 25), "13.25","01.25PM", "PM", "twenty five past one");
    addClock(QTime(13, 30), "13.30","01.30PM", "PM", "half past one");
    addClock(QTime(13, 35), "13.35","01.35PM", "PM", "twenty five to two");
    addClock(QTime(13, 40), "13.40","01.40PM", "PM", "twenty to two");
    addClock(QTime(13, 45), "13.45","01.45PM", "PM", "quarter to two");
    addClock(QTime(13, 50), "13.50","01.50PM", "PM", "ten to two");
    addClock(QTime(13, 55), "13.55","01.55PM", "PM", "five to two");
    addClock(QTime(14, 00), "14.00","02.00PM", "PM", "two o'clock");
    addClock(QTime(14, 05), "14.05","02.05PM", "PM", "five past two");
    addClock(QTime(14, 10), "14.10","02.10PM", "PM", "ten past two");
    addClock(QTime(14, 15), "14.15","02.15PM", "PM", "quarter past two");
    addClock(QTime(14, 20), "14.20","02.20PM", "PM", "twenty past two");
    addClock(QTime(14, 25), "14.25","02.25PM", "PM", "twenty five past two");
    addClock(QTime(14, 30), "14.30","02.30PM", "PM", "half past two");
    addClock(QTime(14, 35), "14.35","02.35PM", "PM", "twenty five to three");
    addClock(QTime(14, 40), "14.40","02.40PM", "PM", "twenty to three");
    addClock(QTime(14, 45), "14.45","02.45PM", "PM", "quarter to three");
    addClock(QTime(14, 50), "14.50","02.50PM", "PM", "ten to three");
    addClock(QTime(14, 55), "14.55","02.55PM", "PM", "five to three");
    addClock(QTime(15, 00), "15.00","03.00PM", "PM", "three o'clock");
    addClock(QTime(15, 05), "15.05","03.05PM", "PM", "five past three");
    addClock(QTime(15, 10), "15.10","03.10PM", "PM", "ten past three");
    addClock(QTime(15, 15), "15.15","03.15PM", "PM", "quarter past three");
    addClock(QTime(15, 20), "15.20","03.20PM", "PM", "twenty past three");
    addClock(QTime(15, 25), "15.25","03.25PM", "PM", "twenty five past three");
    addClock(QTime(15, 30), "15.30","03.30PM", "PM", "half past three");
    addClock(QTime(15, 35), "15.35","03.35PM", "PM", "twenty five to four");
    addClock(QTime(15, 40), "15.40","03.40PM", "PM", "twenty to four");
    addClock(QTime(15, 45), "15.45","03.45PM", "PM", "quarter to four");
    addClock(QTime(15, 50), "15.50","03.50PM", "PM", "ten to four");
    addClock(QTime(15, 55), "15.55","03.55PM", "PM", "five to four");
    addClock(QTime(16, 00), "16.00","04.00PM", "PM", "four o'clock");
    addClock(QTime(16, 05), "16.05","04.05PM", "PM", "five past four");
    addClock(QTime(16, 10), "16.10","04.10PM", "PM", "ten past four");
    addClock(QTime(16, 15), "16.15","04.15PM", "PM", "quarter past four");
    addClock(QTime(16, 20), "16.20","04.20PM", "PM", "twenty past four");
    addClock(QTime(16, 25), "16.25","04.25PM", "PM", "twenty five past four");
    addClock(QTime(16, 30), "16.30","04.30PM", "PM", "half past four");
    addClock(QTime(16, 35), "16.35","04.35PM", "PM", "twenty five to five");
    addClock(QTime(16, 40), "16.40","04.40PM", "PM", "twenty to five");
    addClock(QTime(16, 45), "16.45","04.45PM", "PM", "quarter to five");
    addClock(QTime(16, 50), "16.50","04.50PM", "PM", "ten to five");
    addClock(QTime(16, 55), "16.55","04.55PM", "PM", "five to five");
    addClock(QTime(17, 00), "17.00","05.00PM", "PM", "five o'clock");
    addClock(QTime(17, 05), "17.05","05.05PM", "PM", "five past five");
    addClock(QTime(17, 10), "17.10","05.10PM", "PM", "ten past five");
    addClock(QTime(17, 15), "17.15","05.15PM", "PM", "quarter past five");
    addClock(QTime(17, 20), "17.20","05.20PM", "PM", "twenty past five");
    addClock(QTime(17, 25), "17.25","05.25PM", "PM", "twenty five past five");
    addClock(QTime(17, 30), "17.30","05.30PM", "PM", "half past five");
    addClock(QTime(17, 35), "17.35","05.35PM", "PM", "twenty five to six");
    addClock(QTime(17, 40), "17.40","05.40PM", "PM", "twenty to six");
    addClock(QTime(17, 45), "17.45","05.45PM", "PM", "quarter to six");
    addClock(QTime(17, 50), "17.50","05.50PM", "PM", "ten to six");
    addClock(QTime(17, 55), "17.55","05.55PM", "PM", "five to six");
    addClock(QTime(18, 00), "18.00","06.00PM", "PM", "six o'clock");
    addClock(QTime(18, 05), "18.05","06.05PM", "PM", "five past six");
    addClock(QTime(18, 10), "18.10","06.10PM", "PM", "ten past six");
    addClock(QTime(18, 15), "18.15","06.15PM", "PM", "quarter past six");
    addClock(QTime(18, 20), "18.20","06.20PM", "PM", "twenty past six");
    addClock(QTime(18, 25), "18.25","06.25PM", "PM", "twenty five past six");
    addClock(QTime(18, 30), "18.30","06.30PM", "PM", "half past six");
    addClock(QTime(18, 35), "18.35","06.35PM", "PM", "twenty five to seven");
    addClock(QTime(18, 40), "18.40","06.40PM", "PM", "twenty to seven");
    addClock(QTime(18, 45), "18.45","06.45PM", "PM", "quarter to seven");
    addClock(QTime(18, 50), "18.50","06.50PM", "PM", "ten to seven");
    addClock(QTime(18, 55), "18.55","06.55PM", "PM", "five to seven");
    addClock(QTime(19, 00), "19.00","07.00PM", "PM", "seven o'clock");
    addClock(QTime(19, 05), "19.05","07.05PM", "PM", "five past seven");
    addClock(QTime(19, 10), "19.10","07.10PM", "PM", "ten past seven");
    addClock(QTime(19, 15), "19.15","07.15PM", "PM", "quarter past seven");
    addClock(QTime(19, 20), "19.20","07.20PM", "PM", "twenty past seven");
    addClock(QTime(19, 25), "19.25","07.25PM", "PM", "twenty five past seven");
    addClock(QTime(19, 30), "19.30","07.30PM", "PM", "half past seven");
    addClock(QTime(19, 35), "19.35","07.35PM", "PM", "twenty five to eight");
    addClock(QTime(19, 40), "19.40","07.40PM", "PM", "twenty to eight");
    addClock(QTime(19, 45), "19.45","07.45PM", "PM", "quarter to eight");
    addClock(QTime(19, 50), "19.50","07.50PM", "PM", "ten to eight");
    addClock(QTime(19, 55), "19.55","07.55PM", "PM", "five to eight");
    addClock(QTime(20, 00), "20.00","08.00PM", "PM", "eight o'clock");
    addClock(QTime(20, 05), "20.05","08.05PM", "PM", "five past eight");
    addClock(QTime(20, 10), "20.10","08.10PM", "PM", "ten past eight");
    addClock(QTime(20, 15), "20.15","08.15PM", "PM", "quarter past eight");
    addClock(QTime(20, 20), "20.20","08.20PM", "PM", "twenty past eight");
    addClock(QTime(20, 25), "20.25","08.25PM", "PM", "twenty five past eight");
    addClock(QTime(20, 30), "20.30","08.30PM", "PM", "half past eight");
    addClock(QTime(20, 35), "20.35","08.35PM", "PM", "twenty five to nine");
    addClock(QTime(20, 40), "20.40","08.40PM", "PM", "twenty to nine");
    addClock(QTime(20, 45), "20.45","08.45PM", "PM", "quarter to nine");
    addClock(QTime(20, 50), "20.50","08.50PM", "PM", "ten to nine");
    addClock(QTime(20, 55), "20.55","08.55PM", "PM", "five to nine");
    addClock(QTime(21, 00), "21.00","09.00PM", "PM", "nine o'clock");
    addClock(QTime(21, 05), "21.05","09.05PM", "PM", "five past nine");
    addClock(QTime(21, 10), "21.10","09.10PM", "PM", "ten past nine");
    addClock(QTime(21, 15), "21.15","09.15PM", "PM", "quarter past nine");
    addClock(QTime(21, 20), "21.20","09.20PM", "PM", "twenty past nine");
    addClock(QTime(21, 25), "21.25","09.25PM", "PM", "twenty five past nine");
    addClock(QTime(21, 30), "21.30","09.30PM", "PM", "half past nine");
    addClock(QTime(21, 35), "21.35","09.35PM", "PM", "twenty five to ten");
    addClock(QTime(21, 40), "21.40","09.40PM", "PM", "twenty to ten");
    addClock(QTime(21, 45), "21.45","09.45PM", "PM", "quarter to ten");
    addClock(QTime(21, 50), "21.50","09.50PM", "PM", "ten to ten");
    addClock(QTime(21, 55), "21.55","09.55PM", "PM", "five to ten");
    addClock(QTime(22, 00), "22.00","10.00PM", "PM", "ten o'clock");
    addClock(QTime(22, 05), "22.05","10.05PM", "PM", "five past ten");
    addClock(QTime(22, 10), "22.10","10.10PM", "PM", "ten past ten");
    addClock(QTime(22, 15), "22.15","10.15PM", "PM", "quarter past ten");
    addClock(QTime(22, 20), "22.20","10.20PM", "PM", "twenty past ten");
    addClock(QTime(22, 25), "22.25","10.25PM", "PM", "twenty five past ten");
    addClock(QTime(22, 30), "22.30","10.30PM", "PM", "half past ten");
    addClock(QTime(22, 35), "22.35","10.35PM", "PM", "twenty five to eleven");
    addClock(QTime(22, 40), "22.40","10.40PM", "PM", "twenty to eleven");
    addClock(QTime(22, 45), "22.45","10.45PM", "PM", "quarter to eleven");
    addClock(QTime(22, 50), "22.50","10.50PM", "PM", "ten to eleven");
    addClock(QTime(22, 55), "22.55","10.55PM", "PM", "five to eleven");
    addClock(QTime(23, 00), "23.00","11.00PM", "PM", "eleven o'clock");
    addClock(QTime(23, 05), "23.05","11.05PM", "PM", "five past eleven");
    addClock(QTime(23, 10), "23.10","11.10PM", "PM", "ten past eleven");
    addClock(QTime(23, 15), "23.15","11.15PM", "PM", "quarter past eleven");
    addClock(QTime(23, 20), "23.20","11.20PM", "PM", "twenty past eleven");
    addClock(QTime(23, 25), "23.25","11.25PM", "PM", "twenty five past eleven");
    addClock(QTime(23, 30), "23.30","11.30PM", "PM", "half past eleven");
    addClock(QTime(23, 35), "23.35","11.35PM", "PM", "twenty five to twelve");
    addClock(QTime(23, 40), "23.40","11.40PM", "PM", "twenty to twelve");
    addClock(QTime(23, 45), "23.45","11.45PM", "PM", "quarter to twelve");
    addClock(QTime(23, 50), "23.50","11.50PM", "PM", "ten to twelve");
    addClock(QTime(23, 55), "23.55","11.55PM", "PM", "five to twelve");

    timer.start();

    connect(ui->enterButton, &QPushButton::clicked, this, &TimeTeller_game::checkAnswers);
    connect(ui->enterButton, &QPushButton::clicked, this, &TimeTeller_game::nextClockClicked);
    QTimer::singleShot(0, this, &TimeTeller_game::nextClockClicked);

}

TimeTeller_game::~TimeTeller_game()
{
    delete ui;
}

void TimeTeller_game::paintEvent(QPaintEvent *event)
{
    QMainWindow::paintEvent(event);

    QSize labelSize = ui->randomclock->size();

    QPixmap clockPixmap(labelSize);
    clockPixmap.fill(Qt::transparent);

    QPainter painter(&clockPixmap);
    painter.setRenderHint(QPainter::Antialiasing);

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

    int side = qMin(labelSize.width(), labelSize.height());

    painter.translate(labelSize.width() / 2, labelSize.height() / 2);
    painter.scale(side / 200, side / 200);

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

    painter.end();

    ui->randomclock->setPixmap(clockPixmap);
}


void TimeTeller_game::addClock(const QTime& qtime, const QString& hours, const QString& amPm,const QString& dayNight,const QString& word)
{
    ClockData clockData(qtime, hours, amPm, dayNight, word);
    clockDataList.append(clockData);
    update();
}

void TimeTeller_game::nextClockClicked()
{
    if (RoundGame < 5) {
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

            QPixmap morning("/Users/gnar_p/KiddoQuest-main/image for c++ project/Math/morning.png");

            QPixmap noon("/Users/gnar_p/KiddoQuest-main/image for c++ project/Math/noon.png");

            QPixmap evening("/Users/gnar_p/KiddoQuest-main/image for c++ project/Math/evening.png");

            QPixmap night("/Users/gnar_p/KiddoQuest-main/image for c++ project/Math/night.png");

            double hours = clockData.getHours().toDouble();
            qDebug() << "hours 24 :" << hours;

            if (hours >= 3 && hours < 9) {
                ui->img_SunMoon->setPixmap(morning.scaled(ui->img_SunMoon->size(), Qt::KeepAspectRatio));
            } else if (hours >= 9 && hours < 13) {
                ui->img_SunMoon->setPixmap(noon.scaled(ui->img_SunMoon->size(), Qt::KeepAspectRatio));
            } else if (hours >= 13 && hours < 21) {
                ui->img_SunMoon->setPixmap(evening.scaled(ui->img_SunMoon->size(), Qt::KeepAspectRatio));
            } else {
                ui->img_SunMoon->setPixmap(night.scaled(ui->img_SunMoon->size(), Qt::KeepAspectRatio));
            }

            ui->img_SunMoon->update();

        }
    }
}

void TimeTeller_game::checkAnswers() {
    const ClockData& clockData = clockDataList[currentIndex];
    QString userans1 = ui->Entry_24hrs->text().toLower();
    QString userans2 = ui->Entry_12hrs->text().toUpper();
    QString userans3 = ui->Entry_word->text().toLower();

    if (RoundGame < 5) {
        // all correct
        if (userans1 == clockData.getHours() && userans2 == clockData.getAmPm() && userans3 == clockData.getWord()) {
            currentScore += 4;
            QMessageBox::information(this, tr("Correct Answer"), tr("Your answer is all correct!"));
            RoundGame++;
            // 1st wrong
        } else if (userans1 != clockData.getHours() && userans2 == clockData.getAmPm() && userans3 == clockData.getWord()) {
            currentScore += 3;
            QString tellAns = "24-hour format: " + clockData.getHours();
            QMessageBox::information(this, tr("One wrong"), tellAns);
            RoundGame++;
            // 2nd wrong
        } else if (userans1 == clockData.getHours() && userans2 != clockData.getAmPm() && userans3 == clockData.getWord()) {
            currentScore += 3;
            QString tellAns = "12-hour format: " + clockData.getAmPm();
            QMessageBox::information(this, tr("One wrong"), tellAns);
            RoundGame++;
            // 3rd wrong
        } else if (userans1 == clockData.getHours() && userans2 == clockData.getAmPm() && userans3 != clockData.getWord()) {
            currentScore += 2;
            QString tellAns = "Word: " + clockData.getWord();
            QMessageBox::information(this, tr("One wrong"), tellAns);
            RoundGame++;
            // 1 & 2 wrong
        } else if (userans1 != clockData.getHours() && userans2 != clockData.getAmPm() && userans3 == clockData.getWord()) {
            currentScore += 2;
            QString tellAns = "24-hour format: " + clockData.getHours() + "\n12-hour format: " + clockData.getAmPm();
            QMessageBox::information(this, tr("Two wrong"), tellAns);
            RoundGame++;
            // 1 & 3 wrong
        } else if (userans1 != clockData.getHours() && userans2 == clockData.getAmPm() && userans3 != clockData.getWord()) {
            currentScore += 1;
            QString tellAns = "24-hour format: " + clockData.getHours() + "\nWord: " + clockData.getWord();
            QMessageBox::information(this, tr("Two wrong"), tellAns);
            RoundGame++;
            // 2 & 3 wrong
        } else if (userans1 == clockData.getHours() && userans2 != clockData.getAmPm() && userans3 != clockData.getWord()) {
            currentScore += 1;
            QString tellAns = "12-hour format: " + clockData.getAmPm() + "\nWord: " + clockData.getWord();
            QMessageBox::information(this, tr("Two wrong"), tellAns);
            RoundGame++;
        } else {
            QString tellAns = "24-hour format: " + clockData.getHours() + "\n12-hour format: " + clockData.getAmPm()+ "\nWord: " + clockData.getWord();
            QMessageBox::information(this, tr("All wrong"), tellAns);
            RoundGame++;
        }
    }

    ui->questionLabel->setText(QString::number(RoundGame+1) + " / 5");
    ui->scoreLabel->setText(QString::number(currentScore) + " / 20");
    ui->Entry_24hrs->clear();
    ui->Entry_12hrs->clear();
    ui->Entry_word->clear();

    float realScore = currentScore / 2;

    if (RoundGame == 5 && currentScore > 0) {
        ui->questionLabel->setText("5 / 5");
        qint64 playtime = timer.elapsed();
        member.addClockProgress(playtime, realScore, index);
        GameComplete TimeTellerComplete;
        TimeTellerComplete.setModal(true);
        TimeTellerComplete.setScore(realScore);
        TimeTellerComplete.setTime(playtime);
        TimeTellerComplete.exec();
        close();
        MathWindow *mathwindow = new MathWindow(member, index, this);
        mathwindow->show();
    } else if (RoundGame == 5 && currentScore == 0) {
        ui->questionLabel->setText("5 / 5");
        qint64 playtime = timer.elapsed();
        member.addClockProgress(playtime, realScore, index);
        GameComplete TimeTellerLose;
        TimeTellerLose.setModal(true);
        TimeTellerLose.lose();
        TimeTellerLose.setScore(realScore);
        TimeTellerLose.setTime(playtime);
        TimeTellerLose.exec();
        close();
        MathWindow *mathwindow = new MathWindow(member, index, this);
        mathwindow->show();
    }
}

void TimeTeller_game::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Exit", "Are you sure you want to quit the game?",QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        TimeTeller_game::close();
        MathWindow *mathwindow = new MathWindow(member, index, this);
        mathwindow->show();
    }
}

void TimeTeller_game::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Return) {
        event->accept();
        checkAnswers();
        nextClockClicked();
    } else if (event->key() == Qt::Key_Escape) {
        event->accept();
        on_exitButton_clicked();
    } else {
        QMainWindow::keyPressEvent(event);
    }
}
