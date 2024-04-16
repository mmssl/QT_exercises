#include <QCoreApplication>
#include <QTimer>
#include <QDebug>
/*QT memory management
    Parent Child Relationship*/


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTimer timer;

    qInfo() << "Hello World";
    timer.singleShot(3000,&a,&QCoreApplication::quit);

    int value = a.exec();
    qInfo() << "Exit Code" << value;



    return value;
}
