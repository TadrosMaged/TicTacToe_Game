/********************************************************************************
** Form generated from reading UI file 'gamemodewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEMODEWINDOW_H
#define UI_GAMEMODEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameModeWindow
{
public:
    QLabel *label;
    QPushButton *singlePlayerButton;
    QPushButton *multiPlayerButton;

    void setupUi(QWidget *GameModeWindow)
    {
        if (GameModeWindow->objectName().isEmpty())
            GameModeWindow->setObjectName("GameModeWindow");
        GameModeWindow->resize(963, 602);
        GameModeWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 79);"));
        label = new QLabel(GameModeWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 0, 211, 211));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 66);"));
        singlePlayerButton = new QPushButton(GameModeWindow);
        singlePlayerButton->setObjectName("singlePlayerButton");
        singlePlayerButton->setGeometry(QRect(350, 290, 241, 29));
        singlePlayerButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        multiPlayerButton = new QPushButton(GameModeWindow);
        multiPlayerButton->setObjectName("multiPlayerButton");
        multiPlayerButton->setGeometry(QRect(350, 330, 241, 29));
        multiPlayerButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        retranslateUi(GameModeWindow);

        QMetaObject::connectSlotsByName(GameModeWindow);
    } // setupUi

    void retranslateUi(QWidget *GameModeWindow)
    {
        GameModeWindow->setWindowTitle(QCoreApplication::translate("GameModeWindow", "Form", nullptr));
        label->setText(QString());
        singlePlayerButton->setText(QCoreApplication::translate("GameModeWindow", "SINGLE PLAYER", nullptr));
        multiPlayerButton->setText(QCoreApplication::translate("GameModeWindow", "MULTI PLAYER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameModeWindow: public Ui_GameModeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEMODEWINDOW_H
