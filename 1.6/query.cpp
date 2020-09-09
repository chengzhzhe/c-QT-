#include "query.h"

query::query(QWidget *parent) : QDialog(parent)
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
    pushbutton->setText("查询");
    connect(pushbutton, &QPushButton::clicked, this, &query::query1);

    pushbutton1 = new QPushButton(this);
    pushbutton1->move(250, 250);
    pushbutton1->setText("返回");
    connect(pushbutton1, &QPushButton::clicked, this, &query::shut);

    dialog4 = new queryform();

}

void query::shut()
{
    this->close();
}

void query::query1()
{
    dialog4->show();
}
