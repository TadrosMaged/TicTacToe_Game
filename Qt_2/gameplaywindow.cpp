#include "gameplaywindow.h"
#include "playerselection.h"
#include "qmessagebox.h"
#include "ui_gameplaywindow.h"
#include"mainwindow.h"

unsigned char StartPLayer;
unsigned char currentPlayer;
unsigned char Player1;
unsigned char Player2;
unsigned char GameState = GAME_RUNNING;

GameplayWindow::GameplayWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameplayWindow)
{
    ui->setupUi(this);

    QGridLayout *gridLayout = new QGridLayout(this);

    for(int row = 0; row < 3; ++row)
    {
        for(int col = 0; col < 3; ++col)
        {
            buttons[row][col] = new QPushButton("", this);
            buttons[row][col]->setFixedSize(100, 100);  // Set a fixed size for buttons
            buttons[row][col]->setStyleSheet("background-color: white; color: black;");  // Set button colors

            QFont font = buttons[row][col]->font();
            font.setPointSize(30);  // Adjust the font size as needed
            buttons[row][col]->setFont(font);

            gridLayout->addWidget(buttons[row][col], row, col);
            gridLayout->addWidget(buttons[row][col], row, col);

            connect(buttons[row][col], &QPushButton::clicked, [=]()
                    {
                        onButtonClick(row, col);
                    });
        }
    }

    setLayout(gridLayout);
    game.setCurrentPlayer();
}

void GameplayWindow::onButtonClick(int row, int col)
{
    // Check if the button is already marked
    if((buttons[row][col]->text() != "") || (GameState == GAME_ENDED))
        return;

    currentPlayer = game.getCurrentPlayer();
    QChar mark = (currentPlayer == PLAYER_X) ? 'X' : 'O';
    QString winnerMessage;
    // Set the button text to X or O
    buttons[row][col]->setText(QString(mark));

    // Make human move in game logic
    game.humanMove(game.board, currentPlayer, row, col);

    // Check for win or draw
    if(game.isWinner(game.board, currentPlayer))
    {
        GameState = GAME_ENDED;
        // Handle win condition
        if(currentPlayer == Player1)
        {
         winnerMessage =  QString(username1) + " wins!";
        }else
        {
         winnerMessage =  QString(username) + " wins!";
        }
        QMessageBox::information(this,"Success",winnerMessage);
    }
    else if(game.isBoardFull(game.board))
    {
        // Handle draw condition
        qDebug("It's a draw!");
        // Additional logic for end of game
    }
    else if (GameMode == SINGLEPLAYER_MODE)
    {
        // Computer's move (if applicable)
        game.computerMove(PLAYER_O);

        // Update UI with computer's move
        Move computerMove = game.currentMove;
        QChar computerMark = (currentPlayer == PLAYER_X) ? '0' : 'X';
        buttons[computerMove.row][computerMove.col]->setText(QString(computerMark));

        // Check for win or draw after computer's move
        if(game.isWinner(game.board, Player2))
        {
            // Handle win condition
            QString winnerMessage = "Computer wins!";
            QMessageBox::information(this,"Success",winnerMessage);
            qDebug(" Computer wins ");
            GameState = GAME_ENDED;
            // Additional logic for end of game
        }
        else if(game.isBoardFull(game.board))
        {
            // Handle draw condition
            qDebug("It's a draw!");
            // Additional logic for end of game
        }

    }
}

//void GameplayWindow::qDebug(const QString &message)
//{
//  CustomDialog dialog(this);
//dialog.setMessage(message);
//dialog.exec();
//}


GameplayWindow::~GameplayWindow()
{
    delete ui;
}

void GameplayWindow::on_pushButton_clicked()
{
    mainWindow=new MainWindow;
    mainWindow->show();
    this->hide();
}


void GameplayWindow::on_pushButton_2_clicked()
{
    for(int row = 0; row < 3; ++row)
    {
        for(int col = 0; col < 3; ++col)
        {
          buttons[row][col]->setText("");
        }
    }
    game.clearBoard(game.board);
    game.setCurrentPlayer();
    GameState = GAME_RUNNING;
    playerSelection=new PlayerSelection;
    playerSelection->show();
    this->hide();
}

