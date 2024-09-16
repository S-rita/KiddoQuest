#include "mainmenuwindow.h"
#include <QApplication>
#include <QVBoxLayout>
#include <QPushButton>
#include <QMainWindow>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainMenuWindow w;
    w.show();

    return a.exec();
}
