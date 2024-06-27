/********************************************************************************
** Form generated from reading UI file 'choosedifficulty.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEDIFFICULTY_H
#define UI_CHOOSEDIFFICULTY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chooseDifficulty
{
public:
    QPushButton *easyButton;
    QPushButton *hardButton;

    void setupUi(QWidget *chooseDifficulty)
    {
        if (chooseDifficulty->objectName().isEmpty())
            chooseDifficulty->setObjectName("chooseDifficulty");
        chooseDifficulty->resize(878, 726);
        easyButton = new QPushButton(chooseDifficulty);
        easyButton->setObjectName("easyButton");
        easyButton->setGeometry(QRect(62, 160, 271, 371));
        easyButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));
        hardButton = new QPushButton(chooseDifficulty);
        hardButton->setObjectName("hardButton");
        hardButton->setGeometry(QRect(460, 160, 291, 371));
        hardButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none"));

        retranslateUi(chooseDifficulty);

        QMetaObject::connectSlotsByName(chooseDifficulty);
    } // setupUi

    void retranslateUi(QWidget *chooseDifficulty)
    {
        chooseDifficulty->setWindowTitle(QCoreApplication::translate("chooseDifficulty", "Form", nullptr));
        easyButton->setText(QString());
        hardButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class chooseDifficulty: public Ui_chooseDifficulty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEDIFFICULTY_H
