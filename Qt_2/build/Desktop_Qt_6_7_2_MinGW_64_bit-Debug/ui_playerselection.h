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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayerSelection
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QWidget *PlayerSelection)
    {
        if (PlayerSelection->objectName().isEmpty())
            PlayerSelection->setObjectName("PlayerSelection");
        PlayerSelection->resize(715, 691);
        PlayerSelection->setLayoutDirection(Qt::RightToLeft);
        pushButton = new QPushButton(PlayerSelection);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 150, 201, 151));
        pushButton_2 = new QPushButton(PlayerSelection);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(460, 150, 201, 151));
        pushButton_3 = new QPushButton(PlayerSelection);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(470, 450, 201, 151));
        pushButton_4 = new QPushButton(PlayerSelection);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(90, 450, 201, 151));
        label_4 = new QLabel(PlayerSelection);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(100, 400, 559, 20));
        label_3 = new QLabel(PlayerSelection);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 60, 551, 47));
        label_3->setLayoutDirection(Qt::LeftToRight);
        widget = new QWidget(PlayerSelection);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(330, 70, 95, 841));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");

        verticalLayout->addWidget(pushButton_6);


        retranslateUi(PlayerSelection);

        QMetaObject::connectSlotsByName(PlayerSelection);
    } // setupUi

    void retranslateUi(QWidget *PlayerSelection)
    {
        PlayerSelection->setWindowTitle(QCoreApplication::translate("PlayerSelection", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("PlayerSelection", "PLAYER X", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PlayerSelection", "PLAYER O", nullptr));
        pushButton_3->setText(QCoreApplication::translate("PlayerSelection", "PLAYER O", nullptr));
        pushButton_4->setText(QCoreApplication::translate("PlayerSelection", "PLAYER X", nullptr));
        label_4->setText(QCoreApplication::translate("PlayerSelection", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("PlayerSelection", "TextLabel", nullptr));
        pushButton_5->setText(QCoreApplication::translate("PlayerSelection", "Confirm", nullptr));
        pushButton_6->setText(QCoreApplication::translate("PlayerSelection", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlayerSelection: public Ui_PlayerSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERSELECTION_H
