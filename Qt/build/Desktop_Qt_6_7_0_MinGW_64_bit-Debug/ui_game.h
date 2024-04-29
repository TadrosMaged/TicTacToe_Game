/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_1;
    QPushButton *pushButton_8;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;

    void setupUi(QDialog *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName("Game");
        Game->resize(587, 500);
        widget = new QWidget(Game);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(80, 20, 401, 371));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(50, 100));
        pushButton_2->setBaseSize(QSize(0, 0));
        pushButton_2->setFlat(true);

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMinimumSize(QSize(50, 100));
        pushButton_6->setBaseSize(QSize(0, 0));
        pushButton_6->setFlat(true);

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(50, 100));
        pushButton_3->setBaseSize(QSize(0, 0));
        pushButton_3->setFlat(true);

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setMinimumSize(QSize(50, 100));
        pushButton_9->setBaseSize(QSize(0, 0));
        pushButton_9->setFlat(true);

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(50, 100));
        pushButton_5->setBaseSize(QSize(0, 0));
        pushButton_5->setFlat(true);

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_1 = new QPushButton(widget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setMinimumSize(QSize(50, 100));
        pushButton_1->setBaseSize(QSize(0, 0));
        pushButton_1->setFlat(true);

        gridLayout->addWidget(pushButton_1, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setMinimumSize(QSize(50, 100));
        pushButton_8->setBaseSize(QSize(0, 0));
        pushButton_8->setFlat(true);

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(50, 100));
        pushButton_4->setBaseSize(QSize(0, 0));
        pushButton_4->setFlat(true);

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setMinimumSize(QSize(50, 100));
        pushButton_7->setBaseSize(QSize(0, 0));
        pushButton_7->setFlat(true);

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);


        retranslateUi(Game);

        pushButton_2->setDefault(false);
        pushButton_6->setDefault(false);
        pushButton_3->setDefault(false);
        pushButton_9->setDefault(false);
        pushButton_5->setDefault(false);
        pushButton_1->setDefault(false);
        pushButton_8->setDefault(false);
        pushButton_4->setDefault(false);
        pushButton_7->setDefault(false);


        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QDialog *Game)
    {
        Game->setWindowTitle(QCoreApplication::translate("Game", "Dialog", nullptr));
        pushButton_2->setText(QString());
        pushButton_6->setText(QString());
        pushButton_3->setText(QString());
        pushButton_9->setText(QString());
        pushButton_5->setText(QString());
        pushButton_1->setText(QString());
        pushButton_8->setText(QString());
        pushButton_4->setText(QString());
        pushButton_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
