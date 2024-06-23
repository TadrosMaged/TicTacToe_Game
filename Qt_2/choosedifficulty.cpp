#include "choosedifficulty.h"
#include "ui_choosedifficulty.h"

chooseDifficulty::chooseDifficulty(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::chooseDifficulty)
{
    ui->setupUi(this);
}

chooseDifficulty::~chooseDifficulty()
{
    delete ui;
}

void chooseDifficulty::on_easyButton_clicked()
{
    difficulty=EASY;
    playerSelection=new PlayerSelection;
    playerSelection->show();
    this->hide();
}


void chooseDifficulty::on_hardButton_clicked()
{
    difficulty=HARD;
    playerSelection=new PlayerSelection;
    playerSelection->show();
    this->hide();
}


