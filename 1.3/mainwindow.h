#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "dialog.h"
#include "dialog1.h"
#include "dialog2.h"
#include <QMap>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    static int a;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    Dialog * new_Dialog;//新建一个Dialog类指针
    Dialog1 * new_Dialog1;
    Dialog2 * new_Dialog2;
    struct person{
        QString name;
        int st[18];
        QString go;
        QString out;
        int price;
    };
    struct person st[100];

};

#endif // MAINWINDOW_H
