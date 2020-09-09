#ifndef BUY_H
#define BUY_H
#include "headers.h"
#include "buyform.h"

class buy :public QDialog
{
public:
    explicit buy(QWidget *parent = 0);
    void receive(QString,QString);
    void shut();
    void buy1();
    QString t1;
    QString t2;
    buyform *dialog3;
private:
    QLineEdit *lineedit;
    QLineEdit *lineedit1;
    QLabel *label;
    QLabel *label1;
    QPushButton *pushbutton;
    QPushButton *pushbutton1;

};

#endif // BUY_H
