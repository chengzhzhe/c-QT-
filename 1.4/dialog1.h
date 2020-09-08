#ifndef DIALOG1_H
#define DIALOG1_H

#include <QDialog>
#include <dialog4.h>

namespace Ui {
class Dialog1;
}

class Dialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog1(QWidget *parent = 0);
    ~Dialog1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog1 *ui;
    Dialog4 * new_Dialog4;
};

#endif // DIALOG1_H
