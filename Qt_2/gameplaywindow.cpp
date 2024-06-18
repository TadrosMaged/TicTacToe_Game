#include "gameplaywindow.h"
#include "ui_gameplaywindow.h"

GameplayWindow::GameplayWindow( int mode,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameplayWindow),
    gameMode(mode),
    currentPlayer(PLAYER_X)  // Start with player X
{
    ui->setupUi(this);
    QGridLayout *gridLayout = new QGridLayout(this);

    for(int row = 0; row < 3; ++row) {
        for(int col = 0; col < 3; ++col) {
            buttons[row][col] = new QPushButton("", this);
            buttons[row][col]->setStyleSheet("background-color: white; color: black;");
            buttons[row][col]->setFixedSize(100, 100);
            gridLayout->addWidget(buttons[row][col], row, col);
            connect(buttons[row][col], &QPushButton::clicked, [this, row, col]() {
                if (buttons[row][col]->text() == "") {
                    buttons[row][col]->setText(currentPlayer == PLAYER_X ? "X" : "O");
                    game.board[row][col] = currentPlayer;
                    game.currentMove = {row, col};
                    checkGameStatus(row, col);
                    currentPlayer = (currentPlayer == PLAYER_X) ? PLAYER_O : PLAYER_X;
                    if (gameMode == 1 && currentPlayer == PLAYER_O) {
                        game.computerMove(currentPlayer);
                        buttons[game.currentMove.row][game.currentMove.col]->setText("O");
                        checkGameStatus(game.currentMove.row, game.currentMove.col);
                        currentPlayer = PLAYER_X;
                    }
                }
            });
        }
    }

    setLayout(gridLayout);
    resetGame();
}

GameplayWindow::~GameplayWindow()
{
    delete ui;
}

void GameplayWindow::handleButtonClick()
{
    // Placeholder for any additional button click handling
}

void GameplayWindow::checkGameStatus(int row, int col)
{
    if (game.isWinner(game.board, currentPlayer)) {
        QMessageBox::information(this, "Game Over", currentPlayer == PLAYER_X ? "Player X wins!" : "Player O wins!");
        resetGame();
    } else if (game.isBoardFull(game.board)) {
        QMessageBox::information(this, "Game Over", "It's a tie!");
        resetGame();
    }
}

void GameplayWindow::resetGame()
{
    game.clearBoard(game.board);
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            buttons[row][col]->setText("");
        }
    }
    currentPlayer = PLAYER_X;
}
