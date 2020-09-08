#ifndef BUY_H
#define BUY_H
#include "headers.h"

class buy :public QDialog
{
public:
    explicit buy(QWidget *parent = 0);
    void receive(QString,QString);
    void shut();
private:
    QLineEdit *lineedit;
    QLineEdit *lineedit1;
    QLabel *label;
    QLabel *label1;
    QPushButton *pushbutton;
    QPushButton *pushbutton1;

};

#endif // BUY_H
