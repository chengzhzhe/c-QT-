#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::receiveData(QString data)
{
    ui->lineEdit->setText(data);//获取传递过来的数据
}
void Dialog::receiveData1(QString data)
{
    ui->lineEdit_2->setText(data);
}

void Dialog::on_pushButton_clicked()
{
    QString str1 =ui->lineEdit->text();
    int tmp = str1.toInt();
    if(tmp>0){
    new_Dialog3 =new Dialog3();

     new_Dialog3->show();}
    else{
        QMessageBox::warning(this,"NO TICKETS","没有票啦");
    }
}
