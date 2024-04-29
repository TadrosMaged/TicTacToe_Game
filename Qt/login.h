#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "main_menu.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_Login_2_clicked();

private:
    Ui::Login *ui;
    Main_Menu* main_menu;
};

#endif // LOGIN_H
