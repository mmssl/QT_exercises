#ifndef SAMPLETHREAD_H
#define SAMPLETHREAD_H

#include <QObject>
#include <QDebug>
#include <QThread>

class SampleThread : public QThread
{
    Q_OBJECT
public:
    explicit SampleThread();
// public slots:
    void doWork(int n = 20);


signals:

    // QThread interface
protected:
    void run();
};

#endif // SAMPLETHREAD_H
