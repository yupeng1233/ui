#include "ceshi.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ceshi w;
    w.setWindowTitle("haha");
    w.show();

    return a.exec();
}
