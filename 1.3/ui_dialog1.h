/********************************************************************************
** Form generated from reading UI file 'dialog1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG1_H
#define UI_DIALOG1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog1
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog1)
    {
        if (Dialog1->objectName().isEmpty())
            Dialog1->setObjectName(QStringLiteral("Dialog1"));
        Dialog1->resize(400, 300);
        label = new QLabel(Dialog1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 130, 91, 21));
        pushButton = new QPushButton(Dialog1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 210, 89, 27));
        lineEdit = new QLineEdit(Dialog1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 130, 113, 20));
        pushButton_2 = new QPushButton(Dialog1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 210, 89, 27));

        retranslateUi(Dialog1);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Dialog1, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog1);
    } // setupUi

    void retranslateUi(QDialog *Dialog1)
    {
        Dialog1->setWindowTitle(QApplication::translate("Dialog1", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog1", "\350\272\253\344\273\275\350\257\201/\345\247\223\345\220\215", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog1", "\346\237\245\350\257\242", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog1", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog1: public Ui_Dialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG1_H
