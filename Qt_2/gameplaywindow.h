#ifndef GAMEPLAYWINDOW_H
#define GAMEPLAYWINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include<QMessageBox>
#include "App.h"


#define SINGLEPLAYER_MODE (0U)
#define MULTIPLAYER_MODE  (1U)
#define GAME_RUNNING      (0U)
#define GAME_ENDED        (1U)


class MainWindow;
class PlayerSelection;
class GameModeWindow;
namespace Ui {
class GameplayWindow;
}
class GameplayWindow : public QWidget
{
    Q_OBJECT

public:
    explicit GameplayWindow(QWidget *parent = nullptr);
    ~GameplayWindow();

private slots:
void onButtonClick(int row, int col);
void Initialize();
void on_pushButton_clicked();
void on_pushButton_2_clicked();

void on_pushButton_4_clicked();

private:
    Ui::GameplayWindow *ui;
    QPushButton *buttons[3][3];    // 3x3 Tic Tac Toe board
    TicTacToe game;
    MainWindow *mainWindow;
    PlayerSelection *playerSelection;
    GameModeWindow *gameModeWindow;

};
extern unsigned char GameMode;
extern unsigned char StartPLayer;
extern unsigned char playerstarted;
extern QString username;
extern QString username1;

#endif // GAMEPLAYWINDOW_H
