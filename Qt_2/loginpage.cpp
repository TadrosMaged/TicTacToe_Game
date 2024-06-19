#include "loginpage.h"
#include "gamemodewindow.h"
#include"gameplaywindow.h"
#include "signupform.h"
#include "ui_loginpage.h"
int count_signIns=0;
LoginPage::LoginPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginPage)
{
    ui->setupUi(this);
    mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("D:/TicTacBoom-git/TicTacToe_Game/Qt_2/TicTacBoom.db");
    if(mydb.open())
        ui->label->setText("connected");
    else
        ui->label->setText("Not Connected");
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_pushButton_2_clicked()
{
    signupForm=new SignupForm;
    signupForm->show();
    this->close();
}


void LoginPage::on_pushButton_clicked()
{
    QString username,password;
    username=ui->lineEdit_user->text();
    password=ui->lineEdit_pass->text();
    QSqlQuery qry;
    if(qry.exec("select * from Players where username='"+username +"'and password='"+password+"'"))
    {
        int count=0;
        while(qry.next())
        {
            count++;
        }
        if(count==1)
        {
            QMessageBox::information(this, "Success", "SignIn successful,Hello "+username);
            if(count_signIns==0)
            {
                count_signIns++;
            GamemodeWindow=new GameModeWindow;
            GamemodeWindow->show();
            this->close();
            }
            else if(count_signIns==1)
            {
                this->close();
                count_signIns=0;
                gameplayWindow=new GameplayWindow;
                gameplayWindow->show();
            }
        }
        if(count<1)
            QMessageBox::critical(this, "Error", "username or password is incorrect.");
    }
}

