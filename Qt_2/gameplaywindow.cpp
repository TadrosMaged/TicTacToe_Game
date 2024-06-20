#include "gameplaywindow.h"
#include "qmessagebox.h"
#include "ui_gameplaywindow.h"
#include"mainwindow.h"

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
}

void GameplayWindow::onButtonClick(int row, int col)
{
    // Check if the button is already marked
    if(buttons[row][col]->text() != "")
        return;

    // Determine which player's turn it is
    unsigned char currentPlayer = game.getCurrentPlayer();

    QChar mark = (currentPlayer == PLAYER_X) ? 'X' : 'O';

    // Set the button text to X or O
    buttons[row][col]->setText(QString(mark));

    // Make human move in game logic
    game.humanMove(game.board, currentPlayer, row, col);

    // Check for win or draw
    if(game.isWinner(game.board, currentPlayer))
    {
        // Handle win condition
        QString winnerMessage = "Player " + QString(mark) + " wins!";
        qDebug("Player 1 Wins");
        QMessageBox::information(this,"Success","PlayerXwins");
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
        unsigned char Player2 = game.getCurrentPlayer();
        QChar computerMark = (currentPlayer == PLAYER_X) ? '0' : 'X';
        buttons[computerMove.row][computerMove.col]->setText(QString(computerMark));

        // Check for win or draw after computer's move
        if(game.isWinner(game.board, Player2))
        {
            // Handle win condition
            QString winnerMessage = "Player " + QString(computerMark) + " wins!";
            qDebug(" player 2 wins ");
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

