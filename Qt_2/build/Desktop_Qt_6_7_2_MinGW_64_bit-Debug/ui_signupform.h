/********************************************************************************
** Form generated from reading UI file 'signupform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPFORM_H
#define UI_SIGNUPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignupForm
{
public:
    QLineEdit *usernameEdit;
    QLineEdit *passwordEdit;
    QLineEdit *confirmEdit;
    QPushButton *signupButton;

    void setupUi(QWidget *SignupForm)
    {
        if (SignupForm->objectName().isEmpty())
            SignupForm->setObjectName("SignupForm");
        SignupForm->resize(707, 686);
        SignupForm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        usernameEdit = new QLineEdit(SignupForm);
        usernameEdit->setObjectName("usernameEdit");
        usernameEdit->setGeometry(QRect(482, 310, 211, 26));
        usernameEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(0, 0, 0);\n"
"border:none"));
        passwordEdit = new QLineEdit(SignupForm);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(482, 350, 231, 26));
        passwordEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(0, 0, 0);\n"
"border:none"));
        confirmEdit = new QLineEdit(SignupForm);
        confirmEdit->setObjectName("confirmEdit");
        confirmEdit->setGeometry(QRect(480, 410, 221, 26));
        confirmEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(0, 0, 0);\n"
"border:none"));
        signupButton = new QPushButton(SignupForm);
        signupButton->setObjectName("signupButton");
        signupButton->setGeometry(QRect(300, 460, 401, 29));
        signupButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(0, 0, 0);\n"
"border:none"));

        retranslateUi(SignupForm);

        QMetaObject::connectSlotsByName(SignupForm);
    } // setupUi

    void retranslateUi(QWidget *SignupForm)
    {
        SignupForm->setWindowTitle(QCoreApplication::translate("SignupForm", "Form", nullptr));
        signupButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignupForm: public Ui_SignupForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPFORM_H
