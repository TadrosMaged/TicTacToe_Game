#include "gamemodewindow.h"
#include "ui_gamemodewindow.h"

unsigned char GameMode = SINGLEPLAYER_MODE;
GameModeWindow::GameModeWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameModeWindow),
    gameplayWindow(nullptr)  // Initialize pointer to nullptr
{
    ui->setupUi(this);
    //ui->label->setPixmap(pix.scaled(200,200,Qt::KeepAspectRatio));
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

void GameModeWindow::on_singlePlayerButton_clicked()
{
    if (!gameplayWindow) {
        gameplayWindow = new GameplayWindow();
    }
    GameMode =  SINGLEPLAYER_MODE ;
    gameplayWindow->show();
    this->close();  // Close the GameModeWindow
}

void GameModeWindow::on_multiPlayerButton_clicked()
{
    if (!gameplayWindow) {
        gameplayWindow = new GameplayWindow();
    }
     GameMode =  MULTIPLAYER_MODE ;
    gameplayWindow->show();
    this->close();  // Close the GameModeWindow
}
