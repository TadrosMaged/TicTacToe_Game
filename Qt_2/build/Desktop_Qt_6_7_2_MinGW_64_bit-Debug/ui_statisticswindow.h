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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statisticsWindow
{
public:
    QPushButton *pushButton;
    QLabel *wins;
    QLabel *losses;
    QLabel *ties;

    void setupUi(QWidget *statisticsWindow)
    {
        if (statisticsWindow->objectName().isEmpty())
            statisticsWindow->setObjectName("statisticsWindow");
        statisticsWindow->resize(860, 508);
        pushButton = new QPushButton(statisticsWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 60, 71, 271));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(0, 0, 0);\n"
"border:none\n"
""));
        wins = new QLabel(statisticsWindow);
        wins->setObjectName("wins");
        wins->setGeometry(QRect(220, 450, 63, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Gilroy-Bold")});
        font.setPointSize(11);
        wins->setFont(font);
        losses = new QLabel(statisticsWindow);
        losses->setObjectName("losses");
        losses->setGeometry(QRect(390, 400, 63, 20));
        losses->setFont(font);
        ties = new QLabel(statisticsWindow);
        ties->setObjectName("ties");
        ties->setGeometry(QRect(570, 450, 63, 20));
        ties->setFont(font);

        retranslateUi(statisticsWindow);

        QMetaObject::connectSlotsByName(statisticsWindow);
    } // setupUi

    void retranslateUi(QWidget *statisticsWindow)
    {
        statisticsWindow->setWindowTitle(QCoreApplication::translate("statisticsWindow", "Form", nullptr));
        pushButton->setText(QString());
        wins->setText(QString());
        losses->setText(QString());
        ties->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class statisticsWindow: public Ui_statisticsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICSWINDOW_H
