#ifndef REFUND_H
#define REFUND_H
#include "headers.h"

class refund :public QDialog
{
public:
    explicit refund(QWidget *parent = 0);
    void shut();

private:
    QLineEdit *lineedit;
    QLabel *label;
    QPushButton *pushbutton;
    QPushButton *pushbutton1;

};
#endif // REFUND_H
