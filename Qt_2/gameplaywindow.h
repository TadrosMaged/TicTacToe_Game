#ifndef GAMEPLAYWINDOW_H
#define GAMEPLAYWINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include<QMessageBox>
#include "App.h"
#define SINGLEPLAYER_MODE (0U)
#define MULTIPLAYER_MODE  (1U)
class MainWindow;
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


void on_pushButton_clicked();

private:
    Ui::GameplayWindow *ui;
    QPushButton *buttons[3][3];    // 3x3 Tic Tac Toe board
    TicTacToe game;
    MainWindow *mainWindow;

};
extern unsigned char GameMode;
#endif // GAMEPLAYWINDOW_H
