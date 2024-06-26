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
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;

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
        pushButton_3 = new QPushButton(gameHistory);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(70, 100, 93, 29));
        pushButton_4 = new QPushButton(gameHistory);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(180, 100, 93, 29));
        pushButton_5 = new QPushButton(gameHistory);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(300, 100, 93, 29));
        pushButton_6 = new QPushButton(gameHistory);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(630, 100, 93, 29));
        pushButton_7 = new QPushButton(gameHistory);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(400, 100, 93, 29));
        pushButton_8 = new QPushButton(gameHistory);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(520, 100, 93, 29));
        pushButton_9 = new QPushButton(gameHistory);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(300, 510, 93, 29));
        pushButton_10 = new QPushButton(gameHistory);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(400, 510, 93, 29));
        pushButton_11 = new QPushButton(gameHistory);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(70, 510, 93, 29));
        pushButton_12 = new QPushButton(gameHistory);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(630, 510, 93, 29));
        pushButton_13 = new QPushButton(gameHistory);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(180, 510, 93, 29));
        pushButton_14 = new QPushButton(gameHistory);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(520, 510, 93, 29));

        retranslateUi(gameHistory);

        QMetaObject::connectSlotsByName(gameHistory);
    } // setupUi

    void retranslateUi(QWidget *gameHistory)
    {
        gameHistory->setWindowTitle(QCoreApplication::translate("gameHistory", "Form", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("gameHistory", "Hide", nullptr));
        pushButton_4->setText(QCoreApplication::translate("gameHistory", "Reveal", nullptr));
        pushButton_5->setText(QCoreApplication::translate("gameHistory", "Hide", nullptr));
        pushButton_6->setText(QCoreApplication::translate("gameHistory", "Reveal", nullptr));
        pushButton_7->setText(QCoreApplication::translate("gameHistory", "Reveal", nullptr));
        pushButton_8->setText(QCoreApplication::translate("gameHistory", "Hide", nullptr));
        pushButton_9->setText(QCoreApplication::translate("gameHistory", "Hide", nullptr));
        pushButton_10->setText(QCoreApplication::translate("gameHistory", "Reveal", nullptr));
        pushButton_11->setText(QCoreApplication::translate("gameHistory", "Hide", nullptr));
        pushButton_12->setText(QCoreApplication::translate("gameHistory", "Reveal", nullptr));
        pushButton_13->setText(QCoreApplication::translate("gameHistory", "Reveal", nullptr));
        pushButton_14->setText(QCoreApplication::translate("gameHistory", "Hide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gameHistory: public Ui_gameHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEHISTORY_H
