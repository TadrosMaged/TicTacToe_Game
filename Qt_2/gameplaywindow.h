#ifndef GAMEPLAYWINDOW_H
#define GAMEPLAYWINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QMessageBox>
#include "App.h"

namespace Ui {
class GameplayWindow;
}

class GameplayWindow : public QWidget
{
    Q_OBJECT

public:
    explicit GameplayWindow(QWidget *parent = nullptr);
    explicit GameplayWindow(int mode, QWidget *parent = nullptr);  // New constructor for different game modes
    ~GameplayWindow();

private slots:
    void handleButtonClick();

private:
    Ui::GameplayWindow *ui;
    QPushButton *buttons[3][3];  // 3x3 Tic Tac Toe board
    TicTacToe game;
    unsigned char currentPlayer;
    int gameMode;  // Variable to store the game mode

    void initializeBoard();
    void updateBoard();
    void checkGameStatus(int row, int col);
    void resetGame();
};

#endif // GAMEPLAYWINDOW_H
