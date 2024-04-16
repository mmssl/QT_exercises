#include <QCoreApplication>

#include "cat.h"
#include <QDebug>


void test (Cat &cat)
{
    qInfo() << "ADDR:" << &cat;
}

void test2 (Cat *cat)
{
    qInfo() << "PTR:" << cat;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Cat kitty;
    kitty.setObjectName("kitty");

    Cat simba;
    simba.setObjectName("Simba");
    //test(kitty);

    test(kitty);
    test2(&kitty);

    test(simba);
    test2(&simba);
    return a.exec();
}
