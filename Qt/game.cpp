#include <iostream>
using namespace std;

#include "game.h"
#include "ui_game.h"

#include "App.h"

bool status[9]={};
TicTacToe ttt_game;
int choice;

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



void Game::on_pushButton_1_clicked()
{
    if(!status[0])
    {
        ttt_game.getCell(1, 3);
    if(ttt_game.getCurrentPlayer()== PLAYER_X)
    {
        ui->pushButton_1->setText("X");
        ttt_game.currentPlayer=PLAYER_O;
    }
    else if(ttt_game.getCurrentPlayer()== PLAYER_O)
    {
      ui->pushButton_1->setText("O");
        ttt_game.currentPlayer=PLAYER_X;
    }

    status[0]=1;
    }

}


void Game::on_pushButton_2_clicked()
{

    if(!status[1])
    {
        ttt_game.getCell(2, 3);
        if(ttt_game.getCurrentPlayer()== PLAYER_X)
        {
            ui->pushButton_2->setText("X");
            ttt_game.currentPlayer=PLAYER_O;
        }
        else if(ttt_game.getCurrentPlayer()== PLAYER_O)
        {
            ui->pushButton_2->setText("O");
            ttt_game.currentPlayer=PLAYER_X;
        }

        status[1]=1;
    }
}


void Game::on_pushButton_3_clicked()
{
    if(!status[2])
    {
        ttt_game.getCell(3, 3);
        if(ttt_game.getCurrentPlayer()== PLAYER_X)
        {
            ui->pushButton_3->setText("X");
            ttt_game.currentPlayer=PLAYER_O;
        }
        else if(ttt_game.getCurrentPlayer()== PLAYER_O)
        {
            ui->pushButton_3->setText("O");
            ttt_game.currentPlayer=PLAYER_X;
        }

        status[2]=1;
    }
}


void Game::on_pushButton_4_clicked()
{
    if(!status[3])
    {
        ttt_game.getCell(1, 2);
        if(ttt_game.getCurrentPlayer()== PLAYER_X)
        {
            ui->pushButton_4->setText("X");
            ttt_game.currentPlayer=PLAYER_O;
        }
        else if(ttt_game.getCurrentPlayer()== PLAYER_O)
        {
            ui->pushButton_4->setText("O");
            ttt_game.currentPlayer=PLAYER_X;
        }

        status[3]=1;
    }
}


void Game::on_pushButton_5_clicked()
{
    if(!status[4])
    {
        ttt_game.getCell(2, 2);
        if(ttt_game.getCurrentPlayer()== PLAYER_X)
        {
            ui->pushButton_5->setText("X");
            ttt_game.currentPlayer=PLAYER_O;
        }
        else if(ttt_game.getCurrentPlayer()== PLAYER_O)
        {
            ui->pushButton_5->setText("O");
            ttt_game.currentPlayer=PLAYER_X;
        }

        status[4]=1;
    }
}


void Game::on_pushButton_6_clicked()
{
    if(!status[5])
    {
        ttt_game.getCell(2, 3);
        if(ttt_game.getCurrentPlayer()== PLAYER_X)
        {
            ui->pushButton_6->setText("X");
            ttt_game.currentPlayer=PLAYER_O;
        }
        else if(ttt_game.getCurrentPlayer()== PLAYER_O)
        {
            ui->pushButton_6->setText("O");
            ttt_game.currentPlayer=PLAYER_X;
        }

        status[5]=1;
    }
}


void Game::on_pushButton_7_clicked()
{
    if(!status[6])
    {
        ttt_game.getCell(1, 1);
        if(ttt_game.getCurrentPlayer()== PLAYER_X)
        {
            ui->pushButton_7->setText("X");
            ttt_game.currentPlayer=PLAYER_O;
        }
        else if(ttt_game.getCurrentPlayer()== PLAYER_O)
        {
            ui->pushButton_7->setText("O");
            ttt_game.currentPlayer=PLAYER_X;
        }

        status[6]=1;
    }
}


void Game::on_pushButton_8_clicked()
{
    if(!status[7])
    {
        ttt_game.getCell(1, 2);
        if(ttt_game.getCurrentPlayer()== PLAYER_X)
        {
            ui->pushButton_8->setText("X");
            ttt_game.currentPlayer=PLAYER_O;
        }
        else if(ttt_game.getCurrentPlayer()== PLAYER_O)
        {
            ui->pushButton_8->setText("O");
            ttt_game.currentPlayer=PLAYER_X;
        }

        status[7]=1;
    }
}


void Game::on_pushButton_9_clicked()
{
    if(!status[8])
    {
        ttt_game.getCell(1, 3);
        if(ttt_game.getCurrentPlayer()== PLAYER_X)
        {
            ui->pushButton_9->setText("X");
            ttt_game.currentPlayer=PLAYER_O;
        }
        else if(ttt_game.getCurrentPlayer()== PLAYER_O)
        {
            ui->pushButton_9->setText("O");
            ttt_game.currentPlayer=PLAYER_X;
        }

        status[8]=1;
    }
}
