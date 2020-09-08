#ifndef GLOBAL_H
#define GLOBAL_H

#include <QDialog>
extern int a;
namespace Ui {
class Global;
}

class Global : public QDialog
{
    Q_OBJECT

public:
    explicit Global(QWidget *parent = 0);
    ~Global();
    static int a;

private:
    Ui::Global *ui;
};

#endif // GLOBAL_H
