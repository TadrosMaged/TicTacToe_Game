#include "gamemodewindow.h"
#include "ui_gamemodewindow.h"
#include "gameplaywindow.h"
GameModeWindow::GameModeWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameModeWindow),
    gameplayWindow(nullptr)  // Initialize pointer to nullptr
{
    ui->setupUi(this);

    // Set the background color to dark blue
    this->setStyleSheet("background-color: darkblue;");

    // Set button colors to white
    ui->singlePlayerButton->setStyleSheet("background-color: white; color: black;");
    ui->multiPlayerButton->setStyleSheet("background-color: white; color: black;");

    connect(ui->singlePlayerButton, &QPushButton::clicked, this, &GameModeWindow::on_singlePlayerButton_clicked);
    connect(ui->multiPlayerButton, &QPushButton::clicked, this, &GameModeWindow::on_multiPlayerButton_clicked);
}

GameModeWindow::~GameModeWindow()
{
    delete ui;
    if (gameplayWindow) {
        delete gameplayWindow;
    }
}

// gamemodewindow.cpp
#include "gameplaywindow.h"

void GameModeWindow::on_singlePlayerButton_clicked()
{
    if (!gameplayWindow) {
        gameplayWindow = new GameplayWindow(1);  // Single player mode
    }
    gameplayWindow->show();
    this->close();  // Close the GameModeWindow
}

void GameModeWindow::on_multiPlayerButton_clicked()
{
    if (!gameplayWindow) {
        gameplayWindow = new GameplayWindow(2);  // Multiplayer mode
    }
    gameplayWindow->show();
    this->close();  // Close the GameModeWindow
}

