#include "refund.h"

refund::refund(QWidget *parent) : QDialog(parent)
{
    this->setFixedSize(400, 300);

    label=new QLabel(this);
    label->move(50,100);
    label->resize(100,80);
    label->setText("姓名/身份证：");


    lineedit = new QLineEdit(this);
    lineedit->move(150, 125);
    lineedit->resize(150, 40);

    pushbutton = new QPushButton(this);
    pushbutton->move(50, 250);
    pushbutton->setText("退票");
    connect(pushbutton, &QPushButton::clicked, this, &refund::refund1);

    pushbutton1 = new QPushButton(this);
    pushbutton1->move(250, 250);
    pushbutton1->setText("返回");
    connect(pushbutton1, &QPushButton::clicked, this, &refund::shut);

}

void refund::shut()
{
    this->close();
}

void refund::refund1()
{
    QMessageBox::information(NULL, "提示", "退票成功");
}
