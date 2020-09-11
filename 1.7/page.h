#ifndef PAGE_H
#define PAGE_H
#include "headers.h"
#include "page1.h"

class page :public QDialog
{
public:
    explicit page(QWidget *parent = 0);
    int t,tt,temp,k,j,kk,jj;
    QString s;
    QString go;
    QString out;
    QList<QString> list;
    QPushButton *pushbutton;
    QPushButton *pushbutton1;
    QPushButton *pushbutton2;
    QPushButton *pushbutton3;
    page1 *dialog;
    QString s1;
    QString s2;
    QString s3;
    QString s4;
    QString s5;

private:
    QLabel *label;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *label5;
    QLabel *label6;
    QLabel *label7;
    QLabel *label8;
    QLineEdit *lineedit;
    QLineEdit *lineedit1;
    QLineEdit *lineedit2;
    QLineEdit *lineedit3;
    QLineEdit *lineedit4;
    struct person
    {
        QString name;
        QString id;
        QString start;
        QString end;
        QString price;
    }per[100];
    int i;


public slots:
    void tp();
    void tp1();
    void tp2();
    void tp3();


};

#endif // PAGE_H
