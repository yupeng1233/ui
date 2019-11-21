#include "ceshi.h"
#include "ui_ceshi.h"

ceshi::ceshi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ceshi)
{
    ui->setupUi(this);
}

ceshi::~ceshi()
{
    delete ui;
}
