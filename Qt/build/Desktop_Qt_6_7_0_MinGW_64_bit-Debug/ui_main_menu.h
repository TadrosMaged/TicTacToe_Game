/********************************************************************************
** Form generated from reading UI file 'main_menu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_MENU_H
#define UI_MAIN_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_Menu
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QPushButton *player_ai;
    QPushButton *player_player;
    QPushButton *game_history;

    void setupUi(QDialog *Main_Menu)
    {
        if (Main_Menu->objectName().isEmpty())
            Main_Menu->setObjectName("Main_Menu");
        Main_Menu->resize(536, 338);
        widget = new QWidget(Main_Menu);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(131, 61, 261, 191));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        widget1 = new QWidget(groupBox);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 30, 261, 111));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        player_ai = new QPushButton(widget1);
        player_ai->setObjectName("player_ai");

        verticalLayout->addWidget(player_ai);

        player_player = new QPushButton(widget1);
        player_player->setObjectName("player_player");

        verticalLayout->addWidget(player_player);


        verticalLayout_2->addWidget(groupBox);

        game_history = new QPushButton(widget);
        game_history->setObjectName("game_history");

        verticalLayout_2->addWidget(game_history);


        retranslateUi(Main_Menu);

        QMetaObject::connectSlotsByName(Main_Menu);
    } // setupUi

    void retranslateUi(QDialog *Main_Menu)
    {
        Main_Menu->setWindowTitle(QCoreApplication::translate("Main_Menu", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Main_Menu", "Game Mode", nullptr));
        player_ai->setText(QCoreApplication::translate("Main_Menu", "Player vs AI", nullptr));
        player_player->setText(QCoreApplication::translate("Main_Menu", "Player vs Player", nullptr));
        game_history->setText(QCoreApplication::translate("Main_Menu", "Game History", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Main_Menu: public Ui_Main_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_MENU_H
