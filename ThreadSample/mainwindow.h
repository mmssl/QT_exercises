#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "samplethread.h"
#include <QThread>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnMessage1_clicked();

    void on_btnMessage2_clicked();

    void on_btnRun_clicked();

    void stateChanged1();

    void stateChanged2();
    void on_btnKill_clicked();

signals:
    void startOperation(int n = 20);
private:
    Ui::MainWindow *ui;
    SampleThread _sample;
    QThread _thread;
};
#endif // MAINWINDOW_H
