#ifndef GEOGRAPHYWINDOW_H
#define GEOGRAPHYWINDOW_H

#include <QMainWindow>
#include "flaggle_game.h"
#include "mapper_game.h"
#include "howtomapper.h"


namespace Ui {
class GeographyWindow;
}

class GeographyWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GeographyWindow(QWidget *parent = nullptr);
    ~GeographyWindow();

private slots:
    void on_FlaggleButton_clicked();

    void on_goBackButton_clicked();

    void on_MapperButton_clicked();

    void on_Info_mapper_clicked();

private:
    Ui::GeographyWindow *ui;
    Flaggle_game *flagglegame;
    Mapper_game *mappergame;
    HowtoMapper *howtomapper;
};

#endif // GEOGRAPHYWINDOW_H
