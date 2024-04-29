#include "signup.h"
#include "ui_signup.h"

Signup::Signup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Signup)
{
    ui->setupUi(this);
}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_pushButton_clicked()
{
    QString username_signup = ui->lineEdit_username_su->text();
    QString password_signup = ui->lineEdit_password_su->text();

    /*if(username_signup==username__db)
    {
        QMessageBox::warning(this,"Unavailable username","The username you entered is already in use")
    }
    else
    {*/
    hide();
    login = new Login(this);
    login->show();
    //}
}

