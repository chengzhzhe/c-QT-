#ifndef DIALOG3_H
#define DIALOG3_H


namespace Ui {
class Dialog3;
}

class Dialog3 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog3(QWidget *parent = 0);
    ~Dialog3();

private slots:
    void on_pushButton_clicked();

signals:
    void sendData(QString);

private:
    Ui::Dialog3 *ui;
};

#endif // DIALOG3_H
