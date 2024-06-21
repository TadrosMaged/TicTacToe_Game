#include "loginpage.h"
#include "gamemodewindow.h"
#include"gameplaywindow.h"
#include "playerselection.h"
#include "signupform.h"
#include "ui_loginpage.h"

int count_signIns=0;
QString username,password,username1;
unsigned char first =0;

LoginPage::LoginPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginPage)
{
    ui->setupUi(this);
    Initialize();
    mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("D:/Git - Files/Tic-Tac-Boom/TicTacToe_Game/Qt_2/TicTacBoom.db");
    mydb.open();
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

void LoginPage::Initialize()
{
    setGeometry(100, 100, 800, 600);

    // Create a QLabel and set it as the central widget
    QLabel *backgroundLabel = new QLabel(this);
    backgroundLabel->setGeometry(0, 0, 800, 600); // Adjust dimensions as needed

    // Set the background image using QPixmap
    QPixmap backgroundImage("D:/Git - Files/Tic-Tac-Boom/TicTacToe_Game/Qt_2/01_Login.png");
    backgroundLabel->setPixmap(backgroundImage.scaled(backgroundLabel->size(), Qt::IgnoreAspectRatio));

    // Ensure the label resizes with the window
    backgroundLabel->setScaledContents(true);

    // Make the label transparent so other widgets (if any) can be shown on top
    backgroundLabel->setAttribute(Qt::WA_TranslucentBackground);

    // Optional: Ensure the label is stacked behind other widgets
    backgroundLabel->lower();
}

void LoginPage::on_pushButton_clicked()
{
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
            if (first ==0)
            {
                username1 = username;
                    first = 1;
            }
            this->close();
            if(count_signIns==0)
            {
                count_signIns++;
            GamemodeWindow=new GameModeWindow;
            GamemodeWindow->show();
            }
            else if(count_signIns==1)
            {
                this->close();
                count_signIns=0;
               playerSelection=new PlayerSelection;
               playerSelection->show();
            }
        }
        if(count<1)
            QMessageBox::critical(this, "Error", "username or password is incorrect.");
    }
}

