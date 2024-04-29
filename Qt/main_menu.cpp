#include "main_menu.h"
#include "ui_main_menu.h"

#include "App.h"

bool choice;

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
    choice = true;
    hide();
    game=new Game(this);
    game->show();
}


void Main_Menu::on_player_player_clicked()
{
    choice = false;
    hide();
    game=new Game(this);
    game->show();
}


void Main_Menu::on_game_history_clicked()
{
    //display table from db
}

