/********************************************************************************
** Form generated from reading UI file 'dialog3.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG3_H
#define UI_DIALOG3_H

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

class Ui_Dialog3
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog3)
    {
        if (Dialog3->objectName().isEmpty())
            Dialog3->setObjectName(QStringLiteral("Dialog3"));
        Dialog3->resize(400, 300);
        label = new QLabel(Dialog3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 110, 63, 14));
        label_2 = new QLabel(Dialog3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 150, 63, 14));
        lineEdit = new QLineEdit(Dialog3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 110, 113, 20));
        lineEdit_2 = new QLineEdit(Dialog3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 150, 113, 20));
        pushButton = new QPushButton(Dialog3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 230, 89, 27));
        pushButton_2 = new QPushButton(Dialog3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 230, 89, 27));

        retranslateUi(Dialog3);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Dialog3, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog3);
    } // setupUi

    void retranslateUi(QDialog *Dialog3)
    {
        Dialog3->setWindowTitle(QApplication::translate("Dialog3", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog3", "\345\247\223\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog3", "\350\272\253\344\273\275\350\257\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog3", "\350\264\255\344\271\260", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog3", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog3: public Ui_Dialog3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG3_H
