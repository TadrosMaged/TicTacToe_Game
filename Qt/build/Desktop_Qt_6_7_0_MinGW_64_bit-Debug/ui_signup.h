/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

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

class Ui_Signup
{
public:
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *username_signup;
    QLineEdit *lineEdit_username_su;
    QHBoxLayout *horizontalLayout_5;
    QLabel *password_signup;
    QLineEdit *lineEdit_password_su;
    QPushButton *signup;

    void setupUi(QDialog *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->resize(683, 508);
        groupBox_2 = new QGroupBox(Signup);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(130, 50, 365, 265));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 70, 281, 131));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        username_signup = new QLabel(layoutWidget);
        username_signup->setObjectName("username_signup");

        horizontalLayout_4->addWidget(username_signup);

        lineEdit_username_su = new QLineEdit(layoutWidget);
        lineEdit_username_su->setObjectName("lineEdit_username_su");

        horizontalLayout_4->addWidget(lineEdit_username_su);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        password_signup = new QLabel(layoutWidget);
        password_signup->setObjectName("password_signup");

        horizontalLayout_5->addWidget(password_signup);

        lineEdit_password_su = new QLineEdit(layoutWidget);
        lineEdit_password_su->setObjectName("lineEdit_password_su");
        lineEdit_password_su->setMinimumSize(QSize(173, 28));

        horizontalLayout_5->addWidget(lineEdit_password_su);


        verticalLayout_2->addLayout(horizontalLayout_5);

        signup = new QPushButton(layoutWidget);
        signup->setObjectName("signup");

        verticalLayout_2->addWidget(signup);


        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QDialog *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Signup", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Signup", "Signup", nullptr));
        username_signup->setText(QCoreApplication::translate("Signup", "Username", nullptr));
        password_signup->setText(QCoreApplication::translate("Signup", "Password", nullptr));
        signup->setText(QCoreApplication::translate("Signup", "Signup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
