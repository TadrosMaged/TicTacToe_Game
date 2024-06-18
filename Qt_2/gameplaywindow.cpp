#include "gameplaywindow.h"
#include "ui_gameplaywindow.h"

GameplayWindow::GameplayWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameplayWindow)
{
    ui->setupUi(this);

    QGridLayout *gridLayout = new QGridLayout(this);

    for(int row = 0; row < 3; ++row) {
        for(int col = 0; col < 3; ++col) {
            buttons[row][col] = new QPushButton("", this);
            buttons[row][col]->setFixedSize(100, 100);  // Set a fixed size for buttons
            buttons[row][col]->setStyleSheet("background-color: white; color: black;");  // Set button colors
            gridLayout->addWidget(buttons[row][col], row, col);
            gridLayout->addWidget(buttons[row][col], row, col);
        }
    }

    setLayout(gridLayout);
}

GameplayWindow::~GameplayWindow()
{
    delete ui;
}
