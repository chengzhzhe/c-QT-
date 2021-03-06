#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <dialog3.h>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_clicked();
    void receiveData(QString data);   //接收传递过来的数据的槽
    void receiveData1(QString data);   //接收传递过来的数据的槽

private:
    Ui::Dialog *ui;
    Dialog3 * new_Dialog3;
};

#endif // DIALOG_H
