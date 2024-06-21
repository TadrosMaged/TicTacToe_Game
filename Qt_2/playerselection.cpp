#include "playerselection.h"
#include "gameplaywindow.h"
#include "ui_playerselection.h"
#include "App.h"

unsigned char Choice1 = 0,Choice2 = 0;
PlayerSelection::PlayerSelection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlayerSelection)
{
    ui->setupUi(this);
    ui->label_3->setAlignment(Qt::AlignCenter);
    ui->label_4->setAlignment(Qt::AlignCenter);
    ui->label_3->setText(username1 + " Selection:");
    ui->label_4->setText(username + " Selection:");
    // Define styles
    style1 = R"(
        QPushButton {
            background-color: #4CAF50; /* Green */
            border: none;
            color: white;
            padding: 15px 32px;
            text-align: center;
            text-decoration: none;
            display: inline-block;
            font-size: 16px;
            margin: 4px 2px;
            transition-duration: 0.4s;
            cursor: pointer;
        }
        QPushButton:hover {
            background-color: white;
            color: black;
            border: 2px solid #4CAF50;
        }
    )";

    style2 = R"(
        QPushButton {
            background-color: #008CBA; /* Blue */
            border: none;
            color: white;
            padding: 20px 40px;
            text-align: center;
            text-decoration: none;
            display: inline-block;
            font-size: 18px;
            margin: 4px 2px;
            transition-duration: 0.4s;
            cursor: pointer;
        }
        QPushButton:hover {
            background-color: white;
            color: black;
            border: 2px solid #008CBA;
        }
    )";

    // Set initial style for buttons
    ui->pushButton->setStyleSheet(style1);
    ui->pushButton_2->setStyleSheet(style1);
    ui->pushButton_3->setStyleSheet(style1);
    ui->pushButton_4->setStyleSheet(style1);

    if (GameMode ==  SINGLEPLAYER_MODE)
    {
        ui->pushButton_3->hide();
        ui->pushButton_4->hide();
    }

    // Connect combo box signal to slot for changing style
   // connect(ui->comboBox, &QComboBox::currentTextChanged, this, &PlayerSelection::changeButtonStyle);
}

PlayerSelection::~PlayerSelection()
{
    delete ui;
}

void PlayerSelection::on_pushButton_clicked()
{
     Choice1 ='X';
}

void PlayerSelection::on_pushButton_2_clicked()
{
     Choice1 ='O';
}

void PlayerSelection::changeButtonStyle(const QString &styleName)
{
    if (styleName == "Style 1") {
        ui->pushButton->setStyleSheet(style1);
        ui->pushButton_2->setStyleSheet(style1);
    } else if (styleName == "Style 2") {
        ui->pushButton->setStyleSheet(style2);
        ui->pushButton_2->setStyleSheet(style2);
    }
}

void PlayerSelection::on_pushButton_3_clicked()
{
    Choice2 ='X';
}

void PlayerSelection::on_pushButton_4_clicked()
{
    Choice2 ='O';
}

void PlayerSelection::on_pushButton_5_clicked()
{
    if(Choice1 == 'X' ||Choice1 == 'O')
    {
        StartPLayer = Choice1;
        Player1 = Choice1;
        Player2 = (Choice1 == PLAYER_X) ? 'O' : 'X';
        gameplayWindow = new GameplayWindow;
        gameplayWindow ->show();
        this->close();  // Close the GameModeWindow
    }
    Choice2 =0;
    Choice1 =0;
}


void PlayerSelection::on_pushButton_6_clicked()
{
    if(Choice2 == 'X' ||Choice2 == 'O')
    {
        StartPLayer = Choice2;
        Player2 = Choice2;
        Player1 = (Choice2 == PLAYER_X) ? 'O' : 'X';
        gameplayWindow = new GameplayWindow;
        gameplayWindow ->show();
        this->close();  // Close the GameModeWindow
    }
    Choice2 =0;
    Choice1 =0;
}

