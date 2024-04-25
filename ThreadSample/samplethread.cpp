#include "samplethread.h"

SampleThread::SampleThread()

{}

void SampleThread::doWork(int n)
{
    for (int i = 0; i < n; i++)
    {
        qDebug() << i;
        QThread::msleep(200);
    }
}

void SampleThread::run()
{
    doWork();
}
