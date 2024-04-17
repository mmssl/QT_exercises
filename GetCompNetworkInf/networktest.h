#ifndef NETWORKTEST_H
#define NETWORKTEST_H

#include <QObject>
#include <QDebug>
#include <QtNetwork/QNetworkInterface>
#include <QtCore>


class NetworkTest : public QObject
{
    Q_OBJECT
public:
    explicit NetworkTest(QObject *parent = nullptr);
    ~NetworkTest();
signals:
};

#endif // NETWORKTEST_H
