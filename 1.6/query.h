#ifndef QUERY_H
#define QUERY_H
#include "headers.h"
#include "queryform.h"

class query :public QDialog
{
public:
    explicit query(QWidget *parent = 0);
    void shut();
    void query1();
    queryform *dialog4;

private:
    QLineEdit *lineedit;
    QLabel *label;
    QPushButton *pushbutton;
    QPushButton *pushbutton1;

};
#endif // QUERY_H
