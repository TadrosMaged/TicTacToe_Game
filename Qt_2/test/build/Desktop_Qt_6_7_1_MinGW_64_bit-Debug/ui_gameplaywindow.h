/********************************************************************************
** Form generated from reading UI file 'gameplaywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEPLAYWINDOW_H
#define UI_GAMEPLAYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameplayWindow
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_5;

    void setupUi(QWidget *GameplayWindow)
    {
        if (GameplayWindow->objectName().isEmpty())
            GameplayWindow->setObjectName("GameplayWindow");
        GameplayWindow->resize(831, 682);
        GameplayWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(GameplayWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(470, 410, 271, 51));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));
        pushButton_2 = new QPushButton(GameplayWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(470, 250, 271, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));
        pushButton_3 = new QPushButton(GameplayWindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(470, 490, 271, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));
        pushButton_4 = new QPushButton(GameplayWindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(470, 330, 271, 51));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));
        label = new QLabel(GameplayWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(470, 171, 281, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Gilroy-Bold")});
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(GameplayWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(470, 190, 281, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));
        label_2->setAlignment(Qt::AlignCenter);
        pushButton_5 = new QPushButton(GameplayWindow);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(10, 100, 91, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));

        retranslateUi(GameplayWindow);

        QMetaObject::connectSlotsByName(GameplayWindow);
    } // setupUi

    void retranslateUi(QWidget *GameplayWindow)
    {
        GameplayWindow->setWindowTitle(QCoreApplication::translate("GameplayWindow", "Form", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        label->setText(QCoreApplication::translate("GameplayWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("GameplayWindow", "TextLabel", nullptr));
        pushButton_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameplayWindow: public Ui_GameplayWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPLAYWINDOW_H
