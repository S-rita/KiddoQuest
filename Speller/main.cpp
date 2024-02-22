#include "englishwindow.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EnglishWindow w;
    w.show();
    return a.exec();
}
