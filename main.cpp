#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //Test Run
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
