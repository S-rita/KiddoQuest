#ifndef GEOGRAPHYWINDOW_H
#define GEOGRAPHYWINDOW_H

#include <QMainWindow>
#include "flaggle_game.h"

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

private:
    Ui::GeographyWindow *ui;
    flaggle_game *flagglegame;
};

#endif // GEOGRAPHYWINDOW_H
