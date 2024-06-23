/********************************************************************************
** Form generated from reading UI file 'gamehistory.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEHISTORY_H
#define UI_GAMEHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gameHistory
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *gameHistory)
    {
        if (gameHistory->objectName().isEmpty())
            gameHistory->setObjectName("gameHistory");
        gameHistory->resize(832, 705);
        pushButton = new QPushButton(gameHistory);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(700, 220, 71, 231));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));
        pushButton_2 = new QPushButton(gameHistory);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 220, 71, 231));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));

        retranslateUi(gameHistory);

        QMetaObject::connectSlotsByName(gameHistory);
    } // setupUi

    void retranslateUi(QWidget *gameHistory)
    {
        gameHistory->setWindowTitle(QCoreApplication::translate("gameHistory", "Form", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gameHistory: public Ui_gameHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEHISTORY_H
