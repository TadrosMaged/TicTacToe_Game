/********************************************************************************
** Form generated from reading UI file 'playerselection.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERSELECTION_H
#define UI_PLAYERSELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayerSelection
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;

    void setupUi(QWidget *PlayerSelection)
    {
        if (PlayerSelection->objectName().isEmpty())
            PlayerSelection->setObjectName("PlayerSelection");
        PlayerSelection->resize(715, 691);
        PlayerSelection->setLayoutDirection(Qt::RightToLeft);
        pushButton = new QPushButton(PlayerSelection);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 190, 131, 131));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));
        pushButton_2 = new QPushButton(PlayerSelection);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(560, 190, 141, 131));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));
        pushButton_4 = new QPushButton(PlayerSelection);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(110, 410, 131, 121));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));
        label_4 = new QLabel(PlayerSelection);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(100, 360, 601, 20));
        label_3 = new QLabel(PlayerSelection);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 140, 591, 47));
        label_3->setLayoutDirection(Qt::LeftToRight);
        pushButton_3 = new QPushButton(PlayerSelection);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(560, 410, 141, 121));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));
        pushButton_5 = new QPushButton(PlayerSelection);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(330, 240, 131, 51));
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));
        pushButton_6 = new QPushButton(PlayerSelection);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(330, 450, 131, 51));
        pushButton_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));
        pushButton_7 = new QPushButton(PlayerSelection);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(130, 230, 201, 171));
        pushButton_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));
        pushButton_8 = new QPushButton(PlayerSelection);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(460, 230, 191, 171));
        pushButton_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));
        pushButton_9 = new QPushButton(PlayerSelection);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(340, 460, 121, 51));
        pushButton_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));

        retranslateUi(PlayerSelection);

        QMetaObject::connectSlotsByName(PlayerSelection);
    } // setupUi

    void retranslateUi(QWidget *PlayerSelection)
    {
        PlayerSelection->setWindowTitle(QCoreApplication::translate("PlayerSelection", "Form", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_4->setText(QString());
        label_4->setText(QCoreApplication::translate("PlayerSelection", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("PlayerSelection", "TextLabel", nullptr));
        pushButton_3->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PlayerSelection: public Ui_PlayerSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERSELECTION_H
