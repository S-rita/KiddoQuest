#ifndef GEOGRAPHYWINDOW_H
#define GEOGRAPHYWINDOW_H

#include <QMainWindow>

namespace Ui {
class GeographyWindow;
}

class GeographyWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GeographyWindow(QWidget *parent = nullptr);
    ~GeographyWindow();

private:
    Ui::GeographyWindow *ui;
};

#endif // GEOGRAPHYWINDOW_H
