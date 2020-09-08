#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "dialog.h"
#include "dialog1.h"
#include "dialog2.h"
#include <QVector>
#include "global.h"

namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    static QVector<QString> name;
    static QVector<QString> id;
    static QVector<QString> go;
    static QVector<QString> out;
    static QVector<int> price;


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    void receiveData(QString data);
    void receiveData1(QString data);


signals:
    void sendData(QString);   //用来传递数据的信号

private:
    Ui::MainWindow *ui;
    Dialog * new_Dialog;//新建一个Dialog类指针
    Dialog1 * new_Dialog1;
    Dialog2 * new_Dialog2;
};

#endif // MAINWINDOW_H
