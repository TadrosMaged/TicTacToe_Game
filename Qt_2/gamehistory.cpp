#include "gamehistory.h"
#include "choosedifficulty.h"
#include "gameplaywindow.h"
#include "loginpage.h"
#include "mainwindow.h"
#include "playerselection.h"
#include "qlabel.h"
#include "qmessagebox.h"
#include "ui_gamehistory.h"
#include<QSqlQuery>
#include<QSqlError>
gameHistory::gameHistory(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::gameHistory)
{
    ui->setupUi(this);
    Initialize();
    fetchGameHistory();
    QString text_buttons;
}
gameHistory::~gameHistory()
{
    delete ui;
}
void gameHistory::Initialize()
{
    setGeometry(100, 100, 800, 600);

    // Create a QLabel and set it as the central widget
    QLabel *backgroundLabel = new QLabel(this);
    backgroundLabel->setGeometry(0, 0, 800, 600); // Adjust dimensions as needed

    // Set the background image using QPixmap
    QPixmap backgroundImage("D:/Git - Files/Tic-Tac-Boom/TicTacToe_Game/Qt_2/Game History.png");
    backgroundLabel->setPixmap(backgroundImage.scaled(backgroundLabel->size(), Qt::IgnoreAspectRatio));

    // Ensure the label resizes with the window
    backgroundLabel->setScaledContents(true);

    // Make the label transparent so other widgets (if any) can be shown on top
    backgroundLabel->setAttribute(Qt::WA_TranslucentBackground);

    // Optional: Ensure the label is stacked behind other widgets
    backgroundLabel->lower();

}
void gameHistory::fetchGameHistory()
{
    QSqlQuery query;
    query.prepare("SELECT game_data FROM game_history WHERE username = :username order by id desc Limit 6;");

    query.bindValue(":username", username);

    if (!query.exec()) {
        qDebug() << "Error: failed to execute query - " << query.lastError();
        return;
    }
    else
        qDebug()<<"Success";
    int index = 0;
    while (query.next()) {
        QString gameData = query.value(0).toString();
        displayGameHistory(index, gameData);
        ++index;
    }

}
void gameHistory::displayGameHistory(int index, const QString& gameData)
{
    QStringList rows = gameData.split(';');
    for (int row = 0; row < rows.size(); ++row) {
        QStringList cols = rows[row].split(',');
        for (int col = 0; col < cols.size(); ++col) {
            if (index < 6 && row < 3 && col < 3) {
                if(index==3)
                    index=5;
                else if(index==5)
                    index=3;
                buttons_history2[index][row][col] = new QPushButton("", this);
                buttons_history2[index][row][col]->setFixedSize(50, 50);
                buttons_history2[index][row][col]->setStyleSheet("background-color: rgba(255, 255, 255,0);");
                buttons_history2[index][row][col]->setText(cols[col]);
                QFont font = buttons_history2[index][row][col]->font();
                font.setPointSize(30);
                buttons_history2[index][row][col]->setFont(font);
                if (index < 3) {
                    buttons_history2[index][row][col]->setGeometry(55 * (row + 1) + 68 + index * 200, 55 * (col + 1) + 115, 50, 30);
                } else if (index >= 3) {
                    buttons_history2[index][row][col]->setGeometry(55 * (row + 1) + 68 + (index - 3) * 200, 55 * (col + 1) + 108 + 200, 50, 30);
                }
                if(index==3)
                    index=5;
                else if(index==5)
                    index=3;
            }
        }
    }
}
void gameHistory::on_pushButton_clicked()
{
    if(GameMode==SINGLEPLAYER_MODE)
    {
        choosedifficulty=new chooseDifficulty;
        choosedifficulty->show();
    }
    else
    {
        playerSelection=new PlayerSelection;
        playerSelection->show();
    }
    this->hide();
}


void gameHistory::on_pushButton_2_clicked()
{
    first = 0;
    mainWindow=new MainWindow;
    mainWindow->show();
    this->hide();
}


void gameHistory::on_pushButton_3_clicked()
{
    if (replayindex[0] == 0)
        return;
    replayindex[0]--;
    unsigned char row = replay[1][replayindex[0]] / 3;
    unsigned char col = replay[1][replayindex[0]] % 3;
    buttons_history2[0][row][col]->setText(" ");

}


void gameHistory::on_pushButton_4_clicked()
{
    if (replayindex[0] == numberofplays[0])
        return;

    unsigned char row = replay[1][replayindex[0]] / 3;
    unsigned char col = replay[1][replayindex[0]] % 3;
    buttons_history2[0][row][col]->setText(buttons_history1[0][row][col]);
    replayindex[0]++;

}


void gameHistory::on_pushButton_5_clicked()
{
    if (replayindex[1] == 0)
        return;
    replayindex[1]--;
    unsigned char row = replay[2][replayindex[1]] / 3;
    unsigned char col = replay[2][replayindex[1]] % 3;
    buttons_history2[1][row][col]->setText(" ");
}


void gameHistory::on_pushButton_7_clicked()
{
    if (replayindex[1] == numberofplays[1])
        return;

    unsigned char row = replay[2][replayindex[1]] / 3;
    unsigned char col = replay[2][replayindex[1]] % 3;
    buttons_history2[1][row][col]->setText(buttons_history1[1][row][col]);
    replayindex[1]++;

}


void gameHistory::on_pushButton_8_clicked()
{
    if (replayindex[2] == 0)
        return;
    replayindex[2]--;
    unsigned char row = replay[3][replayindex[2]] / 3;
    unsigned char col = replay[3][replayindex[2]] % 3;
    buttons_history2[2][row][col]->setText(" ");
}


void gameHistory::on_pushButton_6_clicked()
{
    if (replayindex[2] == numberofplays[2])
        return;

    unsigned char row = replay[3][replayindex[2]] / 3;
    unsigned char col = replay[3][replayindex[2]] % 3;
    buttons_history2[2][row][col]->setText(buttons_history1[2][row][col]);
    replayindex[2]++;
}




void gameHistory::on_pushButton_11_clicked()
{
    if (replayindex[3] == 0)
        return;
    replayindex[3]--;
    unsigned char row = replay[4][replayindex[3]] / 3;
    unsigned char col = replay[4][replayindex[3]] % 3;
    buttons_history2[3][row][col]->setText(" ");
}


void gameHistory::on_pushButton_13_clicked()
{
    if (replayindex[3] == numberofplays[3])
        return;

    unsigned char row = replay[4][replayindex[3]] / 3;
    unsigned char col = replay[4][replayindex[3]] % 3;
    buttons_history2[3][row][col]->setText(buttons_history1[3][row][col]);
    replayindex[3]++;
}


void gameHistory::on_pushButton_9_clicked()
{
    if (replayindex[4] == 0)
        return;
    replayindex[4]--;
    unsigned char row = replay[5][replayindex[4]] / 3;
    unsigned char col = replay[5][replayindex[4]] % 3;
    buttons_history2[4][row][col]->setText(" ");
}


void gameHistory::on_pushButton_10_clicked()
{
    if (replayindex[4] == numberofplays[4])
        return;

    unsigned char row = replay[5][replayindex[4]] / 3;
    unsigned char col = replay[5][replayindex[4]] % 3;
    buttons_history2[4][row][col]->setText(buttons_history1[4][row][col]);
    replayindex[4]++;
}


void gameHistory::on_pushButton_14_clicked()
{
    if (replayindex[5] == 0)
        return;
    replayindex[5]--;
    unsigned char row = replay[6][replayindex[5]] / 3;
    unsigned char col = replay[6][replayindex[5]] % 3;
    buttons_history2[5][row][col]->setText(" ");
}


void gameHistory::on_pushButton_12_clicked()
{
    if (replayindex[5] == numberofplays[5])
        return;

    unsigned char row = replay[6][replayindex[5]] / 3;
    unsigned char col = replay[6][replayindex[5]] % 3;
    buttons_history2[5][row][col]->setText(buttons_history1[5][row][col]);
    replayindex[5]++;

}

