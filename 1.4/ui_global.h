/********************************************************************************
** Form generated from reading UI file 'global.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBAL_H
#define UI_GLOBAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Global
{
public:

    void setupUi(QDialog *Global)
    {
        if (Global->objectName().isEmpty())
            Global->setObjectName(QStringLiteral("Global"));
        Global->resize(400, 300);

        retranslateUi(Global);

        QMetaObject::connectSlotsByName(Global);
    } // setupUi

    void retranslateUi(QDialog *Global)
    {
        Global->setWindowTitle(QApplication::translate("Global", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Global: public Ui_Global {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBAL_H
