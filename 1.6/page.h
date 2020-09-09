#ifndef PAGE_H
#define PAGE_H
#include "headers.h"
#include <buy.h>
#include "query.h"
#include "refund.h"


struct person
{
    QString name;
    QString id;
    QString start;
    QString end;
    int price;
};
class page :public QDialog
{
public:
    explicit page(QWidget *parent = 0);
    buy *dialog;
    query *dialog1;
    refund *dialog2;
    QLineEdit *lineedit;
    QLineEdit *lineedit1;

private:
    QLabel *label;
    QLabel *label1;
    QPushButton *pushbutton;
    QPushButton *pushbutton1;
    QPushButton *pushbutton2;

public slots:
    void tp();
    void tp1();
    void tp2();

};


#endif // PAGE_H
