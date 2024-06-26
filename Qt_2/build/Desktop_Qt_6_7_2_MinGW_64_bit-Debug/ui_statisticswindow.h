/********************************************************************************
** Form generated from reading UI file 'statisticswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICSWINDOW_H
#define UI_STATISTICSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statisticsWindow
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *statisticsWindow)
    {
        if (statisticsWindow->objectName().isEmpty())
            statisticsWindow->setObjectName("statisticsWindow");
        statisticsWindow->resize(690, 508);
        pushButton = new QPushButton(statisticsWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 200, 71, 271));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(0, 0, 0);\n"
"border:none\n"
""));

        retranslateUi(statisticsWindow);

        QMetaObject::connectSlotsByName(statisticsWindow);
    } // setupUi

    void retranslateUi(QWidget *statisticsWindow)
    {
        statisticsWindow->setWindowTitle(QCoreApplication::translate("statisticsWindow", "Form", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class statisticsWindow: public Ui_statisticsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICSWINDOW_H
