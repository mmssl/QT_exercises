#include <QCoreApplication>
#include "networktest.h"

void test_ip(NetworkTest &test)
{
    for (const QHostAddress &address : QNetworkInterface::allAddresses())
    {
        if (address.protocol() == QAbstractSocket::IPv4Protocol && address != QHostAddress(QHostAddress::LocalHost))
        {
            qInfo() << "IP address is:" << address.toString();
        }
        qInfo() << "------ Interfaces Options ------";

        for (const QNetworkInterface &eth : QNetworkInterface::allInterfaces())
        {
            //qInfo() << eth.name();
            qInfo() << eth.humanReadableName();
            qInfo() << eth.hardwareAddress();
            qInfo() << eth.type();
            qInfo() << "------ ------ ------ ------ ------ ------";
        }
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    NetworkTest myIP;
    test_ip(myIP);

    return a.exec();
}
