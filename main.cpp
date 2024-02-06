#include "mainmenuwindow.h"
#include "flaggle_game.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainMenuWindow w;
    w.show();
    return a.exec();
}
