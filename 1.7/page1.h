#ifndef PAGE1_H
#define PAGE1_H
#include "headers.h"

class page1 :public QDialog
{
public:
    explicit page1(QWidget *parent = 0);
    QLabel *label;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *label5;
    QLabel *label6;
    QLabel *label7;
    QLabel *label8;
    QLabel *label9;
    void receive(QString,QString,QString,QString,QString);
    void shut();

private:
    QPushButton *pushbutton;

};
#endif // PAGE1_H
