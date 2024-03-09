#include "mainmenuwindow.h"
#include <QApplication>
#include <QVBoxLayout>
#include <QPushButton>
#include <QMainWindow>
#include "backgroundmusicmanager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BackgroundMusicManager musicManager;


    MainMenuWindow w;
    w.show();

    return a.exec();
}
