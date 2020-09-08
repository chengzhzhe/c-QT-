#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "global.h"
#include <QMessageBox>

QString MainWindow::name=QVector<QString>();
QString MainWindow::id=QVector<QString>();
QString MainWindow::go=QVector<QString>();
QString MainWindow::out=QVector<QString>();
int MainWindow::price=QVector<int>();
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

    int i,j=0,k=0,t=0;
    for(i=0;i<a;i++){
        if(t1<st[i].out&&t2>st[i].go)
        {j++;}
    }
    for(i=0;i<a;i++){
        if(t1==st[a].go)
            t=1;
        if(t2==st[a].out)
            t=0;
        if(t==1){k++;}
    }
    j=10-j;
    new_Dialog = new Dialog();//实例化Dialog窗口对象
    emit sendData(QString::number(j));  //获取j的值并且传递出去
    Dialog *dlg = new Dialog;
    connect(this ,SIGNAL(sendData(QString)), dlg, SLOT(receiveData(QString)));
    emit sendData(QString::number(k));  //获取k的值并且传递出去
    connect(this ,SIGNAL(sendData(QString)), dlg, SLOT(receiveData1(QString)));

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
