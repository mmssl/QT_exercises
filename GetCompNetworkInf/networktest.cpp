#include "networktest.h"

NetworkTest::NetworkTest(QObject *parent)
    : QObject{parent}
{

}

NetworkTest::~NetworkTest()
{
    qInfo() << this << "Deconstructed" << parent();
}
