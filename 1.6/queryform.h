#ifndef QUERYFORM_H
#define QUERYFORM_H
#include "headers.h"

class queryform :public QDialog
{
public:
    explicit queryform(QWidget *parent = 0);
    void shut();

private:
    QLineEdit *lineedit;
    QLineEdit *lineedit1;
    QLineEdit *lineedit2;
    QLineEdit *lineedit3;
    QLineEdit *lineedit4;
    QLabel *label;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QPushButton *pushbutton;

};
#endif // QUERYFORM_H
