#include "page.h"

page::page(QWidget *parent) : QDialog(parent)
{
    this->setFixedSize(800, 600);

    lineedit = new QLineEdit(this);
    lineedit->move(250, 100);
    lineedit->resize(200, 80);

    lineedit1 = new QLineEdit(this);
    lineedit1->move(250,250);
    lineedit1->resize(200,80);

    label=new QLabel(this);
    label->move(50,100);
    label->resize(200,80);
    label->setText("出发站：");

    label1=new QLabel(this);
    label1->move(50,250);
    label1->resize(200,80);
    label1->setText("终点站：");

    pushbutton = new QPushButton(this);
    pushbutton->move(50, 400);
    pushbutton->setText("查询余票");
    connect(pushbutton, &QPushButton::clicked, this, &page::tp);

    pushbutton1 = new QPushButton(this);
    pushbutton1->move(350, 400);
    pushbutton1->setText("车票信息查询");
    connect(pushbutton1, &QPushButton::clicked, this, &page::tp1);

    pushbutton2 = new QPushButton(this);
    pushbutton2->move(650, 400);
    pushbutton2->setText("退票");
    connect(pushbutton2, &QPushButton::clicked, this, &page::tp2);

    dialog = new buy();
    dialog1 = new query();
    dialog2 = new refund();

}

void page::tp()
{
    dialog->receive(lineedit->text(),lineedit1->text());
    dialog->show();
}

void page::tp1()
{
    dialog1->show();
}

void page::tp2()
{
    dialog2->show();
}
