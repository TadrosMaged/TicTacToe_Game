/********************************************************************************
** Form generated from reading UI file 'playerchoosenamewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERCHOOSENAMEWINDOW_H
#define UI_PLAYERCHOOSENAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_playerchoosenamewindow
{
public:
    QPushButton *XButton;
    QPushButton *OButton;
    QTextEdit *nameLineEdit;

    void setupUi(QWidget *playerchoosenamewindow)
    {
        if (playerchoosenamewindow->objectName().isEmpty())
            playerchoosenamewindow->setObjectName("playerchoosenamewindow");
        playerchoosenamewindow->resize(837, 424);
        XButton = new QPushButton(playerchoosenamewindow);
        XButton->setObjectName("XButton");
        XButton->setGeometry(QRect(130, 170, 191, 181));
        XButton->setIconSize(QSize(40, 40));
        OButton = new QPushButton(playerchoosenamewindow);
        OButton->setObjectName("OButton");
        OButton->setGeometry(QRect(480, 170, 191, 181));
        OButton->setIconSize(QSize(40, 40));
        nameLineEdit = new QTextEdit(playerchoosenamewindow);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(150, 60, 511, 87));

        retranslateUi(playerchoosenamewindow);

        QMetaObject::connectSlotsByName(playerchoosenamewindow);
    } // setupUi

    void retranslateUi(QWidget *playerchoosenamewindow)
    {
        playerchoosenamewindow->setWindowTitle(QCoreApplication::translate("playerchoosenamewindow", "Form", nullptr));
        XButton->setText(QCoreApplication::translate("playerchoosenamewindow", "X", nullptr));
        OButton->setText(QCoreApplication::translate("playerchoosenamewindow", "O", nullptr));
    } // retranslateUi

};

namespace Ui {
class playerchoosenamewindow: public Ui_playerchprivprivate slots:
                                                                     void on_XButton_clicked();
ate slots:
                                                                 void on_playerchoosenamewindow_customContextMenuRequested(const QPoint &pos);
oosenamewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERCHOOSENAMEWINDOW_H
