#include "page1.h"

page1::page1(QWidget *parent) : QDialog(parent)
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

    label5 = new QLabel(this);
    label5->move(150, 50);
    label5->resize(100, 40);

    label6 = new QLabel(this);
    label6->move(150,100);
    label6->resize(100,40);

    label7 = new QLabel(this);
    label7->move(150, 150);
    label7->resize(100, 40);

    label8 = new QLabel(this);
    label8->move(150,200);
    label8->resize(100,40);

    label9 = new QLabel(this);
    label9->move(150,250);
    label9->resize(100,40);

    pushbutton = new QPushButton(this);
    pushbutton->move(150, 300);
    pushbutton->setText("返回");
    connect(pushbutton, &QPushButton::clicked, this, &page1::shut);
}

void page1::shut()
{
    label5->clear();
    label6->clear();
    label7->clear();
    label8->clear();
    label9->clear();
    this->close();
}

void page1::receive(QString m1,QString m2,QString m3,QString m4,QString m5)
{
    label5->setText(m1);
    label6->setText(m2);
    label7->setText(m3);
    label8->setText(m4);
    label9->setText(m5);
}
