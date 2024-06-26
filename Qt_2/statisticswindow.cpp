#include "statisticswindow.h"
#include "ui_statisticswindow.h"
#include "qlabel.h"
#include "userprofile.h"

statisticsWindow::statisticsWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::statisticsWindow)
{
    ui->setupUi(this);
    Initialize();
}

void statisticsWindow::Initialize()
{
    setGeometry(100, 100, 800, 600);

    // Create a QLabel and set it as the central widget
    QLabel *backgroundLabel = new QLabel(this);
    backgroundLabel->setGeometry(0, 0, 800, 600); // Adjust dimensions as needed

    // Set the background image using QPixmap
    QPixmap backgroundImage("D:/Git - Files/Tic-Tac-Boom/TicTacToe_Game/Qt_2/statistics.png");
    backgroundLabel->setPixmap(backgroundImage.scaled(backgroundLabel->size(), Qt::IgnoreAspectRatio));

    // Ensure the label resizes with the window
    backgroundLabel->setScaledContents(true);

    // Make the label transparent so other widgets (if any) can be shown on top
    backgroundLabel->setAttribute(Qt::WA_TranslucentBackground);

    // Optional: Ensure the label is stacked behind other widgets
    backgroundLabel->lower();

}
statisticsWindow::~statisticsWindow()
{
    delete ui;
}

void statisticsWindow::on_pushButton_clicked()
{
    userprofile=new userProfile;
    userprofile->show();
    this->close();
}

