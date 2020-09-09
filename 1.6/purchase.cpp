#include "purchase.h"

purchase::purchase(QWidget *parent) : QDialog(parent)
{
    this->setFixedSize(400, 300);

    label=new QLabel(this);
    label->move(50,50);
    label->resize(100,80);
    label->setText("姓名：");

    label1=new QLabel(this);
    label1->move(50,150);
    label1->resize(100,80);
    label1->setText("身份证：");

    lineedit = new QLineEdit(this);
    lineedit->move(150, 75);
    lineedit->resize(100, 40);

    lineedit1 = new QLineEdit(this);
    lineedit1->move(150,175);
    lineedit1->resize(100,40);

    pushbutton = new QPushButton(this);
    pushbutton->move(50, 250);
    pushbutton->setText("购买");

    pushbutton1 = new QPushButton(this);
    pushbutton1->move(250, 250);
    pushbutton1->setText("返回");
    connect(pushbutton1, &QPushButton::clicked, this, &purchase::shut);

}


void purchase::shut()
{
    this->close();
}
