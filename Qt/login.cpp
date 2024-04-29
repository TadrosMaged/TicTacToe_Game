#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_Login_2_clicked()
{
    QString username_login = ui->lineEdit_username_li->text();
    QString password_login = ui->lineEdit_password_li->text();

    /*if(username_login == db_username && password_login == db_password)
    {*/
        hide();
        main_menu = new Main_Menu(this);
        main_menu->show();

    //}
}

