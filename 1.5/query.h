#ifndef QUERY_H
#define QUERY_H
#include "headers.h"

class query :public QDialog
{
public:
    explicit query(QWidget *parent = 0);
    void shut();

private:
    QLineEdit *lineedit;
    QLabel *label;
    QPushButton *pushbutton;
    QPushButton *pushbutton1;

};
#endif // QUERY_H
