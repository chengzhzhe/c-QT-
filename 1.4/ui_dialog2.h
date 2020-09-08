/********************************************************************************
** Form generated from reading UI file 'dialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG2_H
#define UI_DIALOG2_H

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

class Ui_Dialog2
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog2)
    {
        if (Dialog2->objectName().isEmpty())
            Dialog2->setObjectName(QStringLiteral("Dialog2"));
        Dialog2->resize(400, 300);
        label = new QLabel(Dialog2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 110, 101, 21));
        pushButton = new QPushButton(Dialog2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 220, 89, 27));
        lineEdit = new QLineEdit(Dialog2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 110, 113, 20));
        pushButton_2 = new QPushButton(Dialog2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 220, 89, 27));

        retranslateUi(Dialog2);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Dialog2, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog2);
    } // setupUi

    void retranslateUi(QDialog *Dialog2)
    {
        Dialog2->setWindowTitle(QApplication::translate("Dialog2", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog2", "\350\272\253\344\273\275\350\257\201/\345\247\223\345\220\215", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog2", "\351\200\200\347\245\250", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog2", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog2: public Ui_Dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_H
