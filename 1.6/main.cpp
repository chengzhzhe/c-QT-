#include "mainwindow.h"
#include <QApplication>
#include <page.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    page w;
    w.show();

    return a.exec();
}
