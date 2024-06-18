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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameplayWindow
{
public:

    void setupUi(QWidget *GameplayWindow)
    {
        if (GameplayWindow->objectName().isEmpty())
            GameplayWindow->setObjectName("GameplayWindow");
        GameplayWindow->resize(850, 594);
        GameplayWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 102);"));

        retranslateUi(GameplayWindow);

        QMetaObject::connectSlotsByName(GameplayWindow);
    } // setupUi

    void retranslateUi(QWidget *GameplayWindow)
    {
        GameplayWindow->setWindowTitle(QCoreApplication::translate("GameplayWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameplayWindow: public Ui_GameplayWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPLAYWINDOW_H
