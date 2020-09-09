#ifndef PURCHASE_H
#define PURCHASE_H
#include "headers.h"

class purchase :public QDialog
{
public:
    explicit purchase(QWidget *parent = 0);
    void shut();
    QLineEdit *lineedit;
    QLineEdit *lineedit1;

private:
    QLabel *label;
    QLabel *label1;
    QPushButton *pushbutton;
    QPushButton *pushbutton1;

};
#endif // PURCHASE_H
