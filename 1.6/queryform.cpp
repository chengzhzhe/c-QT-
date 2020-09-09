#include "queryform.h"

queryform::queryform(QWidget *parent) : QDialog(parent)
{
    this->setFixedSize(400, 350);
    label=new QLabel(this);
    label->move(50,25);
    label->resize(100,80);
    label->setText("姓名：");

    label1=new QLabel(this);
    label1->move(50,75);
    label1->resize(100,80);
    label1->setText("身份证：");

    label2=new QLabel(this);
    label2->move(50,125);
    label2->resize(100,80);
    label2->setText("起点站：");

    label3=new QLabel(this);
    label3->move(50,175);
    label3->resize(100,80);
    label3->setText("终点站：");

    label4=new QLabel(this);
    label4->move(50,225);
    label4->resize(100,80);
    label4->setText("价钱：");

    lineedit = new QLineEdit(this);
    lineedit->move(150, 50);
    lineedit->resize(100, 40);

    lineedit1 = new QLineEdit(this);
    lineedit1->move(150,100);
    lineedit1->resize(100,40);

    lineedit2 = new QLineEdit(this);
    lineedit2->move(150, 150);
    lineedit2->resize(100, 40);

    lineedit3 = new QLineEdit(this);
    lineedit3->move(150,200);
    lineedit3->resize(100,40);

    lineedit4 = new QLineEdit(this);
    lineedit4->move(150,250);
    lineedit4->resize(100,40);

    pushbutton = new QPushButton(this);
    pushbutton->move(150, 300);
    pushbutton->setText("返回");
    connect(pushbutton, &QPushButton::clicked, this, &queryform::shut);
}

void queryform::shut()
{
   this->close();
}
