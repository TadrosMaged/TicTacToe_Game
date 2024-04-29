#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Login_Welc_clicked()
{
    hide();
    login = new Login(this);
    login->show();
}


void MainWindow::on_Signup_Welc_clicked()
{
    hide();
    signup = new Signup(this);
    signup->show();
}

