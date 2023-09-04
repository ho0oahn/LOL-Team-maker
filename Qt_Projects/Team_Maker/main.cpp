#include "team_maker.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Team_maker w;
    w.show();
    return a.exec();
}
