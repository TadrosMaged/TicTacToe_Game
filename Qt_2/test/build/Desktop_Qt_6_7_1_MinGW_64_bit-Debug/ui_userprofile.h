/********************************************************************************
** Form generated from reading UI file 'userprofile.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPROFILE_H
#define UI_USERPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userProfile
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *userProfile)
    {
        if (userProfile->objectName().isEmpty())
            userProfile->setObjectName("userProfile");
        userProfile->resize(964, 612);
        pushButton = new QPushButton(userProfile);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(700, 220, 71, 231));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(0, 0, 0);\n"
"border:none"));
        pushButton_2 = new QPushButton(userProfile);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(40, 220, 71, 231));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(0, 0, 0);\n"
"border:none\n"
""));
        pushButton_3 = new QPushButton(userProfile);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(160, 340, 231, 161));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(0, 0, 0);\n"
"border:none"));
        pushButton_4 = new QPushButton(userProfile);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(420, 340, 231, 161));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(0, 0, 0);\n"
"border:none\n"
"\n"
""));
        label = new QLabel(userProfile);
        label->setObjectName("label");
        label->setGeometry(QRect(450, 180, 611, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Gilroy-Bold")});
        font.setPointSize(14);
        font.setBold(false);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label_2 = new QLabel(userProfile);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(450, 210, 611, 51));
        label_2->setFont(font);
        label_2->setLayoutDirection(Qt::LeftToRight);

        retranslateUi(userProfile);

        QMetaObject::connectSlotsByName(userProfile);
    } // setupUi

    void retranslateUi(QWidget *userProfile)
    {
        userProfile->setWindowTitle(QCoreApplication::translate("userProfile", "Form", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        label->setText(QCoreApplication::translate("userProfile", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("userProfile", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userProfile: public Ui_userProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPROFILE_H
