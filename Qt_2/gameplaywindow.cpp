#include "gameplaywindow.h"
#include "playerselection.h"
#include "qlabel.h"
#include "qmessagebox.h"
#include "ui_gameplaywindow.h"
#include"mainwindow.h"
#include <QPushButton>
#include <QGridLayout>
#include <QFont>
#include <QList>

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
    Initialize();

   // QGridLayout *gridLayout = new QGridLayout(this);

    for(int row = 0; row < 3; ++row)
    {
        for(int col = 0; col < 3; ++col)
        {
          //  QString buttonName = QString("button%1%2").arg(row).arg(col);
          //  buttons[row][col] = window()->findChild<QPushButton*>(buttonName);
            buttons[row][col] = new QPushButton("", this);
            buttons[row][col]->setFixedSize(100, 100);  // Set a fixed size for buttons
            buttons[row][col]->setStyleSheet("background-color: rgba(255, 255, 255, 0);");  // Set button colors

            QFont font = buttons[row][col]->font();
            font.setPointSize(30);  // Adjust the font size as needed
            buttons[row][col]->setFont(font);
            buttons[row][col]->setGeometry(120*(row+1)-37, 120*(col+1)+55, 100, 30); // (x, y, width, height)
            connect(buttons[row][col], &QPushButton::clicked, [=]()
                    {
                        onButtonClick(row, col);
                    });
        }
    }

   // setLayout(gridLayout);
    game.setCurrentPlayer();
}

void GameplayWindow::Initialize()
{
    setGeometry(100, 100, 800, 600);

    // Create a QLabel and set it as the central widget
    QLabel *backgroundLabel = new QLabel(this);
    backgroundLabel->setGeometry(0, 0, 800, 600); // Adjust dimensions as needed

    // Set the background image using QPixmap
    if (GameMode == MULTIPLAYER_MODE)
    {
        QPixmap backgroundImage("D:/Git - Files/Tic-Tac-Boom/TicTacToe_Game/Qt_2/06_Multiplayer_Board.png");
        backgroundLabel->setPixmap(backgroundImage.scaled(backgroundLabel->size(), Qt::IgnoreAspectRatio));
    }else
    {
        QPixmap backgroundImage("D:/Git - Files/Tic-Tac-Boom/TicTacToe_Game/Qt_2/04_Single_Player(2).png");
        backgroundLabel->setPixmap(backgroundImage.scaled(backgroundLabel->size(), Qt::IgnoreAspectRatio));
    }
    // Ensure the label resizes with the window
    backgroundLabel->setScaledContents(true);

    // Make the label transparent so other widgets (if any) can be shown on top
    backgroundLabel->setAttribute(Qt::WA_TranslucentBackground);

    // Optional: Ensure the label is stacked behind other widgets
    backgroundLabel->lower();
}

void GameplayWindow::onButtonClick(int row, int col)
{
    // Check if the button is already marked
    if((buttons[row][col]->text() != "") || (GameState == GAME_ENDED))
        return;

    currentPlayer = game.getCurrentPlayer();
    QChar mark;
    if (GameMode == MULTIPLAYER_MODE)
    {
    if (playerstarted == 1)
    {
       mark = (currentPlayer == PLAYER_X) ? 'X' : 'O';
    }
    else if (playerstarted == 2)
    {
       mark = (currentPlayer == PLAYER_X) ? 'O' : 'X';
    }
    }
    else
    {
         mark = (currentPlayer == PLAYER_X) ? 'X' : 'O';
    }
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
         QMessageBox::information(this,"Success"," It's a draw ");
        // Additional logic for end of game
    }
    else if (GameMode == SINGLEPLAYER_MODE)
    {
        // Computer's move (if applicable)
        game.computerMove(PLAYER_O);

        // Update UI with computer's move
        Move computerMove = game.currentMove;
        QChar computerMark = (currentPlayer == PLAYER_X) ? 'O' : 'X';
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
            QMessageBox::information(this,"Success"," It's a draw ");
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


void GameplayWindow::on_pushButton_4_clicked()
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
    gameModeWindow=new GameModeWindow;
    gameModeWindow->show();
    this->hide();
}

