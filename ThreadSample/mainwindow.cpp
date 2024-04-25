#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // connect(this, &MainWindow::startOperation, &_sample, &SampleThread::doWork); // connect the signal to slot
    // _sample.moveToThread(&_thread);
    // _thread.start();
    connect(&_sample, &SampleThread::started, this, &MainWindow::stateChanged1);
    connect(&_sample, &SampleThread::finished, this, &MainWindow::stateChanged2);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnMessage1_clicked()
{
    ui->lblMessage->setText("Message 1...");
}


void MainWindow::on_btnMessage2_clicked()
{
    _sample.wait();
    ui->lblMessage->setText("Message 2...");

}


void MainWindow::on_btnRun_clicked()
{
    _sample.start();
}

void MainWindow::stateChanged1()
{
    ui->lblThread->setText("Thread started...");
}

void MainWindow::stateChanged2()
{
    ui->lblThread->setText("Thread finished...");

}

void MainWindow::on_btnKill_clicked()
{
    if(_sample.isRunning())
    {
        _sample.terminate();
    }
}

