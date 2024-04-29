/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *username_login;
    QLineEdit *lineEdit_username_li;
    QHBoxLayout *horizontalLayout_5;
    QLabel *password_login;
    QLineEdit *lineEdit_password_li;
    QPushButton *Login_2;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(697, 445);
        groupBox_2 = new QGroupBox(Login);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(160, 50, 365, 265));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 70, 281, 131));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        username_login = new QLabel(layoutWidget);
        username_login->setObjectName("username_login");

        horizontalLayout_4->addWidget(username_login);

        lineEdit_username_li = new QLineEdit(layoutWidget);
        lineEdit_username_li->setObjectName("lineEdit_username_li");

        horizontalLayout_4->addWidget(lineEdit_username_li);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        password_login = new QLabel(layoutWidget);
        password_login->setObjectName("password_login");

        horizontalLayout_5->addWidget(password_login);

        lineEdit_password_li = new QLineEdit(layoutWidget);
        lineEdit_password_li->setObjectName("lineEdit_password_li");
        lineEdit_password_li->setMinimumSize(QSize(173, 28));

        horizontalLayout_5->addWidget(lineEdit_password_li);


        verticalLayout_2->addLayout(horizontalLayout_5);

        Login_2 = new QPushButton(layoutWidget);
        Login_2->setObjectName("Login_2");

        verticalLayout_2->addWidget(Login_2);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Login", "Login", nullptr));
        username_login->setText(QCoreApplication::translate("Login", "Username", nullptr));
        password_login->setText(QCoreApplication::translate("Login", "Password", nullptr));
        Login_2->setText(QCoreApplication::translate("Login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
