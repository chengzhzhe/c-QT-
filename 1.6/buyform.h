#ifndef BUYFORM_H
#define BUYFORM_H
#include "headers.h"

class buyform :public QDialog
{
public:
    explicit buyform(QWidget *parent = 0);
    void shut();
    void buyform1();
    QString t1;
    QString t2;
    QLineEdit *lineedit;
    QLineEdit *lineedit1;
private:
    QLabel *label;
    QLabel *label1;
    QPushButton *pushbutton;
    QPushButton *pushbutton1;

};

#endif // BUYFORM_H
