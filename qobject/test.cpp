#include "test.h"

test::test(QObject *parent)
    : QObject{parent}
{}

void test::dostuff()
{
    qInfo() << "Doing stuff!";
    emit close(); // emit raising the signal so it cause calling the slots
}
