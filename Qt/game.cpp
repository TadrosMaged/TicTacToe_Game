#include <iostream>
using namespace std;

#include "game.h"
#include "main_menu.h"
#include "ui_game.h"

#include "App.h"

TicTacToe ttt_game;
int status[9]={0};



Game::Game(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Game)
{
    ui->setupUi(this);
}

Game::~Game()
{
    delete ui;
}


void Game:: handleMove(int index) {

        if (!status[index]) {
            // Update game board
            ttt_game.getCell((index / 3), (index % 3));

            // Update UI
            QString buttonName = QString("pushButton_%1").arg(index + 1);
            QPushButton* button = this->findChild<QPushButton*>(buttonName);
            if (button)
            {
                if (choice)
                {
                    if (ttt_game.getCurrentPlayer() == PLAYER_X)
                    {
                        button->setText("X");
                        ttt_game.humanMove(ttt_game.board, PLAYER_X);
                    }
                    else
                    {
                        button->setText("O");
                        ttt_game.computerMove();
                    }


                    if (ttt_game.isWinner(ttt_game.board, PLAYER_X))
                    {
                        std::cout << "You win!" << std::endl;
                    }
                    if (ttt_game.isWinner(ttt_game.board, PLAYER_O)) {
                        std::cout << "Computer wins!" << std::endl;
                    }
                    if (!RemPlays)
                    {
                        std::cout << "It's a tie!" << std::endl;
                    }

                }
                else
                {
                    char currentPlayer = ttt_game.getCurrentPlayer();
                    if (currentPlayer== PLAYER_X)
                    {
                        button->setText("X");
                        ttt_game.humanMove(ttt_game.board, currentPlayer);
                    }
                    else
                    {
                        button->setText("O");
                        ttt_game.humanMove(ttt_game.board, currentPlayer);
                    }



                    if (ttt_game.isWinner(ttt_game.board, PLAYER_X)) {
                        std::cout << "Player X wins!" << std::endl;
                    }
                    if (ttt_game.isWinner(ttt_game.board, PLAYER_O)) {

                        std::cout << "Player O wins!" << std::endl;
                    }
                    if (!RemPlays)
                    {
                        std::cout << "It's a tie!" << std::endl;
                    }

                }
            }

            // Update game status
            status[index] = true;
        }
}


void Game::on_pushButton_1_clicked()
{
    handleMove(0);
}


void Game::on_pushButton_2_clicked()
{

    handleMove(1);
}


void Game::on_pushButton_3_clicked()
{
    handleMove(2);
}


void Game::on_pushButton_4_clicked()
{
    handleMove(3);
}


void Game::on_pushButton_5_clicked()
{
    handleMove(4);
}


void Game::on_pushButton_6_clicked()
{
    handleMove(5);
}


void Game::on_pushButton_7_clicked()
{
    handleMove(6);
}


void Game::on_pushButton_8_clicked()
{
    handleMove(7);
}


void Game::on_pushButton_9_clicked()
{
    handleMove(8);
}