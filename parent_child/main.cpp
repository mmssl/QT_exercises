#include <QCoreApplication>
#include <QTimer>
#include <QDebug>
#include "test.h"

/*QT memory management
    Parent Child Relationship*/

// Setting in the constructor

Test* getTest (QObject* parent)
{
    return new Test(parent);
}
// Setting up after the constructor
Test* getTest ()
{
    return new Test();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTimer timer;
    timer.singleShot(3000,&a,&QCoreApplication::quit);

    //Setting in the constructor
    Test* dog = getTest(&a);
    dog->setObjectName("Spot");

    // Setting up after the constructor
    Test* cat = getTest();
    cat->setObjectName("Simba");
    cat->setParent(dog);

    int value = a.exec();
    qInfo() << "Exit Code" << value;



    return value;
}
