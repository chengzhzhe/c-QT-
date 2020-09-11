#include "page.h"

page::page(QWidget *parent) : QDialog(parent)
{
    this->setFixedSize(1200, 400);

    i=0;

    lineedit = new QLineEdit(this);
    lineedit->move(150, 100);
    lineedit->resize(200, 40);

    lineedit1 = new QLineEdit(this);
    lineedit1->move(150,150);
    lineedit1->resize(200,40);

    lineedit2 = new QLineEdit(this);
    lineedit2->move(150, 250);
    lineedit2->resize(200, 40);

    lineedit3 = new QLineEdit(this);
    lineedit3->move(150,300);
    lineedit3->resize(200,40);

    lineedit4 = new QLineEdit(this);
    lineedit4->move(550,300);
    lineedit4->resize(200,40);

    label=new QLabel(this);
    label->move(50,75);
    label->resize(200,80);
    label->setText("出发站：");

    label1=new QLabel(this);
    label1->move(50,125);
    label1->resize(200,80);
    label1->setText("终点站：");

    label2=new QLabel(this);
    label2->move(50,225);
    label2->resize(200,80);
    label2->setText("身份证：");

    label3=new QLabel(this);
    label3->move(50,275);
    label3->resize(200,80);
    label3->setText("姓名：");

    label5=new QLabel(this);
    label5->move(600,100);
    label5->resize(200,80);
    label5->setText("余票：");

    label6=new QLabel(this);
    label6->move(600,150);
    label6->resize(200,80);
    label6->setText("价钱：");

    label7=new QLabel(this);
    label7->move(700,100);
    label7->resize(200,80);

    label4=new QLabel(this);
    label4->move(700,150);
    label4->resize(200,80);

    label8=new QLabel(this);
    label8->move(450,300);
    label8->resize(200,40);
    label8->setText("姓名/身份证：");

    pushbutton = new QPushButton(this);
    pushbutton->move(450, 125);
    pushbutton->resize(150,80);
    pushbutton->setText("查询余票");
    connect(pushbutton, &QPushButton::clicked, this, &page::tp);

    pushbutton1 = new QPushButton(this);
    pushbutton1->move(800, 125);
    pushbutton1->resize(150,80);
    pushbutton1->setText("购票");
    connect(pushbutton1, &QPushButton::clicked, this, &page::tp1);

    pushbutton2 = new QPushButton(this);
    pushbutton2->move(800, 275);
    pushbutton2->resize(150,40);
    pushbutton2->setText("车票信息查询功能");
    connect(pushbutton2, &QPushButton::clicked, this, &page::tp2);

    pushbutton3 = new QPushButton(this);
    pushbutton3->move(800, 325);
    pushbutton3->resize(150,40);
    pushbutton3->setText("退票");
    connect(pushbutton3, &QPushButton::clicked, this, &page::tp3);

    dialog = new page1();
}

void page::tp()
{
    list.append("A1");
    list.append("A2");
    list.append("A3");
    list.append("A4");
    list.append("A5");
    list.append("A6");
    list.append("A7");
    list.append("A8");
    list.append("A9");
    list.append("A10");

    for(j=0; j<list.size(); j++){
        if(list.at(j)==lineedit->text())
            break;
    }
    for(k=0; k<list.size(); k++){
        if(list.at(k)==lineedit1->text())
            break;
    }
    temp=k-j;
    s=QString::number(temp);
    label4->setText(s);
    tt=10;
    for(t=0;t<i;t++){
        for(jj=0; jj<list.size(); jj++){
            if(list.at(jj)==per[t].start)
                break;
        }
        for(kk=0; kk<list.size(); kk++){
            if(list.at(kk)==per[t].end)
                break;
        }
        if(k>jj&&j<kk)
            tt--;
    }
    label7->setText(QString::number(tt));
}

void page::tp1()
{
    if(label7->text().compare("0")==0){
        QMessageBox::information(NULL, "提示", "购买失败");
    }
    else{
    per[i].name=lineedit2->text();
    per[i].id=lineedit3->text();
    per[i].start=lineedit->text();
    per[i].end=lineedit1->text();
    per[i].price=label4->text();
    qDebug()<<per[i].name;
    i++;
    label4->clear();
    label7->clear();
    lineedit->clear();
    lineedit1->clear();
    lineedit2->clear();
    lineedit3->clear();
    QMessageBox::information(NULL, "提示", "购买成功");}
}

void page::tp2()
{
    for(j=0;j<i;j++){
        if(per[j].name.compare(lineedit4->text())==0)
            break;
    }
    if(j==i){
        for(j=0;j<i;j++){
            if(per[j].id.compare(lineedit4->text())==0)
                break;
        }
    }
    s1=per[j].name;
    s2=per[j].id;
    s3=per[j].start;
    s4=per[j].end;
    s5=per[j].price;
    dialog->receive(s1,s2,s3,s4,s5);
    dialog->show();
    lineedit4->clear();

}

void page::tp3()
{
    for(j=0;j<i;j++){
        if(per[j].name.compare(lineedit4->text())==0)
            break;
    }
    if(j==i){
        for(j=0;j<i;j++){
            if(per[j].id.compare(lineedit4->text())==0)
                break;
        }
    }
    for(;j<i-1;j++){
        per[j].name=per[j+1].name;
        per[j].id=per[j+1].id;
        per[j].start=per[j+1].start;
        per[j].end=per[j+1].end;
        per[j].price=per[j+1].price;
    }
    i--;
    lineedit4->clear();
    QMessageBox::information(NULL, "提示", "退票成功");

}
