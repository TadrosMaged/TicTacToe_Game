#include "main_menu.h"
#include "ui_main_menu.h"

#include "App.h"


Main_Menu::Main_Menu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Main_Menu)
{
    ui->setupUi(this);
}

Main_Menu::~Main_Menu()
{
    delete ui;
}

void Main_Menu::on_player_ai_clicked()
{
    choice = 2;
    hide();
    game=new Game(this);
    game->show();
}


void Main_Menu::on_player_player_clicked()
{
    choice = 1;
    hide();
    game=new Game(this);
    game->show();
}


void Main_Menu::on_game_history_clicked()
{
    //display tabl from db
}

