#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString t1,t2;
    t1= ui->lineEdit->text();
    t2= ui->lineEdit_2->text();//从lineedit中获取数据
    new_Dialog = new Dialog();//实例化Dialog窗口对象

        new_Dialog->show();//显示Dialog窗口
}

void MainWindow::on_pushButton_2_clicked()
{
    new_Dialog1 = new Dialog1();//实例化Dialog1窗口对象

        new_Dialog1->show();//显示Dialog1窗口
}

void MainWindow::on_pushButton_3_clicked()
{
    new_Dialog2 = new Dialog2();//实例化Dialog2窗口对象

        new_Dialog2->show();//显示Dialog2窗口
}
