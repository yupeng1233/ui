#ifndef CESHI_H
#define CESHI_H

#include <QMainWindow>

namespace Ui {
class ceshi;
}

class ceshi : public QMainWindow
{
    Q_OBJECT

public:
    explicit ceshi(QWidget *parent = 0);
    ~ceshi();

private:
    Ui::ceshi *ui;
};

#endif // CESHI_H
