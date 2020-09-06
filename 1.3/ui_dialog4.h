/********************************************************************************
** Form generated from reading UI file 'dialog4.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG4_H
#define UI_DIALOG4_H

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

class Ui_Dialog4
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog4)
    {
        if (Dialog4->objectName().isEmpty())
            Dialog4->setObjectName(QStringLiteral("Dialog4"));
        Dialog4->resize(400, 300);
        label = new QLabel(Dialog4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 50, 63, 14));
        label_2 = new QLabel(Dialog4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 90, 63, 14));
        label_3 = new QLabel(Dialog4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 130, 63, 14));
        label_4 = new QLabel(Dialog4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 170, 63, 14));
        label_5 = new QLabel(Dialog4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 210, 63, 14));
        lineEdit = new QLineEdit(Dialog4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 50, 113, 20));
        lineEdit_2 = new QLineEdit(Dialog4);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 90, 113, 20));
        lineEdit_3 = new QLineEdit(Dialog4);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 130, 113, 20));
        lineEdit_4 = new QLineEdit(Dialog4);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(160, 170, 113, 20));
        lineEdit_5 = new QLineEdit(Dialog4);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(160, 210, 113, 20));
        pushButton = new QPushButton(Dialog4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 250, 89, 27));

        retranslateUi(Dialog4);
        QObject::connect(pushButton, SIGNAL(clicked()), Dialog4, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog4);
    } // setupUi

    void retranslateUi(QDialog *Dialog4)
    {
        Dialog4->setWindowTitle(QApplication::translate("Dialog4", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog4", "\345\247\223\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog4", "\350\272\253\344\273\275\350\257\201\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog4", "\350\265\267\347\202\271\347\253\231", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog4", "\347\273\210\347\202\271\347\253\231", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog4", "\344\273\267\351\222\261", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog4", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog4: public Ui_Dialog4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG4_H
