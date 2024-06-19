/********************************************************************************
** Form generated from reading UI file 'customdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMDIALOG_H
#define UI_CUSTOMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customdialog
{
public:
    QLabel *outcomeLabel;

    void setupUi(QWidget *customdialog)
    {
        if (customdialog->objectName().isEmpty())
            customdialog->setObjectName("customdialog");
        customdialog->resize(922, 459);
        outcomeLabel = new QLabel(customdialog);
        outcomeLabel->setObjectName("outcomeLabel");
        outcomeLabel->setGeometry(QRect(360, 180, 191, 101));

        retranslateUi(customdialog);

        QMetaObject::connectSlotsByName(customdialog);
    } // setupUi

    void retranslateUi(QWidget *customdialog)
    {
        customdialog->setWindowTitle(QCoreApplication::translate("customdialog", "Form", nullptr));
        outcomeLabel->setText(QCoreApplication::translate("customdialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customdialog: public Ui_customdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMDIALOG_H
