#include "buy.h"

buy::buy(QWidget *parent) : QDialog(parent)
{
    this->setFixedSize(400, 300);

    label=new QLabel(this);
    label->move(50,50);
    label->resize(100,80);
    label->setText("余票：");

    label1=new QLabel(this);
    label1->move(50,150);
    label1->resize(100,80);
    label1->setText("价钱：");

    lineedit = new QLineEdit(this);
    lineedit->move(150, 75);
    lineedit->resize(100, 40);

    lineedit1 = new QLineEdit(this);
    lineedit1->move(150,175);
    lineedit1->resize(100,40);

    pushbutton = new QPushButton(this);
    pushbutton->move(50, 250);
    pushbutton->setText("购买");
    connect(pushbutton, &QPushButton::clicked, this, &buy::buy1);

    pushbutton1 = new QPushButton(this);
    pushbutton1->move(250, 250);
    pushbutton1->setText("返回");
    connect(pushbutton1, &QPushButton::clicked, this, &buy::shut);

    dialog3 = new buyform();

}

void buy::receive(QString m1,QString m2)
{
    t1=m1;
    t2=m2;
}

void buy::shut()
{
    this->close();
}

void buy::buy1()
{
    dialog3->show();
}
