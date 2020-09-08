#include "global.h"
#include "ui_global.h"

int a = 0;
Global::Global(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Global)
{
    ui->setupUi(this);
}

Global::~Global()
{
    delete ui;
}
