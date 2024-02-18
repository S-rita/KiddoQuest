#ifndef ENGLISHWINDOW_H
#define ENGLISHWINDOW_H

#include <QMainWindow>
#include "foodspeller_game.h"
#include "jobspeller_game.h""
#include "placespeller_game.h"
#include "thingspeller_game.h"
#include "animalspeller_game.h""

namespace Ui {
class EnglishWindow;
}

class EnglishWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EnglishWindow(QWidget *parent = nullptr);
    ~EnglishWindow();

private slots:
    void on_animalsButton_clicked();

    void on_thingsButton_clicked();

    void on_placesButton_clicked();

    void on_jobsButton_clicked();

    void on_foodsButton_clicked();

private:
    Ui::EnglishWindow *ui;
    FoodSpeller_game *foodspeller;
    JobSpeller_game *jobspeller;
    PlaceSpeller_game *placespeller;
    ThingSpeller_game *thingspeller;
    AnimalSpeller_game * animalspeller;
};

#endif // ENGLISHWINDOW_H
