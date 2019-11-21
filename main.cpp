#include "ceshi.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ceshi w;
    w.show();

    return a.exec();
}
