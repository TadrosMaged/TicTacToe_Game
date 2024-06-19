#include "gameplaywindow.h"
#include "ui_gameplaywindow.h"



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
    QString mark = (currentPlayer == PLAYER_X) ? "X" : "O";

    // Set the button text to X or O
    buttons[row][col]->setText(mark);

    // Make human move in game logic
    game.humanMove(game.board, currentPlayer, row, col);

    // Check for win or draw
    if(game.isWinner(game.board, currentPlayer))
    {
        // Handle win condition
        qDebug() << "Player " << currentPlayer << " wins!";
        this->close();
    }
    else if(game.isBoardFull(game.board))
    {
        // Handle draw condition
        qDebug() << "It's a draw!";
        this->close();
    }
    else
    {
        currentPlayer = (currentPlayer == PLAYER_X) ? PLAYER_O : PLAYER_X;
        // Computer's move (if applicable)
        game.computerMove(PLAYER_O);

        // Update UI with computer's move
        Move computerMove = game.currentMove;
        QString computerMark = (currentPlayer == PLAYER_X) ? "X" : "O";
        buttons[computerMove.row][computerMove.col]->setText(computerMark);

        // Check for win or draw after computer's move
        if(game.isWinner(game.board, currentPlayer))
        {
            // Handle win condition
            qDebug() << "Player " << currentPlayer << " wins!";
            this->close();
        }
        else if(game.isBoardFull(game.board))
        {
            // Handle draw condition
            qDebug() << "It's a draw!";
             this->close();
        }
           currentPlayer = (currentPlayer == PLAYER_X) ? PLAYER_O : PLAYER_X;
    }
}


GameplayWindow::~GameplayWindow()
{
    delete ui;
}
