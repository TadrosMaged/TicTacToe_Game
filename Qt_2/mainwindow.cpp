#include "mainwindow.h"
#include "loginpage.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Boutros/Downloads/TicTacBoom.jpg");
    ui->label->setPixmap(pix.scaled(200,200,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    loginPage=new LoginPage;
    loginPage->show();
    this->close();
}
