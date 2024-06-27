/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QLineEdit *lineEdit_user;
    QLineEdit *lineEdit_pass;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName("LoginPage");
        LoginPage->resize(919, 757);
        LoginPage->setStyleSheet(QString::fromUtf8(""));
        lineEdit_user = new QLineEdit(LoginPage);
        lineEdit_user->setObjectName("lineEdit_user");
        lineEdit_user->setGeometry(QRect(480, 300, 251, 41));
        lineEdit_user->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:none\n"
""));
        lineEdit_pass = new QLineEdit(LoginPage);
        lineEdit_pass->setObjectName("lineEdit_pass");
        lineEdit_pass->setGeometry(QRect(480, 340, 251, 51));
        lineEdit_pass->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgba(0, 0, 0);\n"
"border:none\n"
""));
        lineEdit_pass->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(LoginPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(410, 400, 291, 61));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"border:none"));
        pushButton_2 = new QPushButton(LoginPage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(642, 458, 101, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 2550);\n"
"border:none\n"
""));

        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QWidget *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "Form", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
