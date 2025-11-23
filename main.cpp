#include "golden_spatula.h"
#include "hero/hero_collection.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    hero_collection w;
    w.resize(800,600);
    w.show();
    return a.exec();
}
