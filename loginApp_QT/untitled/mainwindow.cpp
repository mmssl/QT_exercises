#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if (username == "admin" && password == "admin")
    {
        QMessageBox::information(this, "Login", "Login Succesfully!");
        hide();
        secDialog = new SecDialog(this);
        secDialog->show();
    }
    else
    {
        QMessageBox::warning(this, "Login", "Try Again!!");
    }
}

