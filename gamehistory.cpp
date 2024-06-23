#include "gamehistory.h"
#include "qlabel.h"
#include "ui_gamehistory.h"
gameHistory::gameHistory(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::gameHistory)
{
    ui->setupUi(this);
    Initialize();
    QString text_buttons;
    for(int index=0;index<6;++index)
    {
        for(int row = 0; row < 3; ++row)
        {
            for(int col = 0; col < 3; ++col)
            {
                //  QString buttonName = QString("button%1%2").arg(row).arg(col);
                //  buttons[row][col] = window()->findChild<QPushButton*>(buttonName);
                buttons_history2[index][row][col] = new QPushButton("", this);
                buttons_history2[index][row][col]->setFixedSize(50, 50);  // Set a fixed size for buttons
                buttons_history2[index][row][col]->setStyleSheet("background-color: rgba(255, 255, 255,0);");  // Set button colors
                text_buttons=buttons_history[index][row][col]->text();
                buttons_history2[index][row][col]->setText(QString(text_buttons));
                QFont font = buttons_history2[index][row][col]->font();
                font.setPointSize(30);  // Adjust the font size as needed
                buttons_history2[index][row][col]->setFont(font);
                if(index<3)
                    buttons_history2[index][row][col]->setGeometry(55*(row+1)+68+index*200, 55*(col+1)+115, 50, 30); // (x, y, width, height)
                else if(index>=3)
                    buttons_history2[index][row][col]->setGeometry(55*(row+1)+68+(index-3)*200, 55*(col+1)+108+200, 50, 30); // (x, y, width, height)

            }
        }
    }
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
    QPixmap backgroundImage("D:/TicTacBoom-git/TicTacToe_Game/Qt_2/Game History.png");
    backgroundLabel->setPixmap(backgroundImage.scaled(backgroundLabel->size(), Qt::IgnoreAspectRatio));

    // Ensure the label resizes with the window
    backgroundLabel->setScaledContents(true);

    // Make the label transparent so other widgets (if any) can be shown on top
    backgroundLabel->setAttribute(Qt::WA_TranslucentBackground);

    // Optional: Ensure the label is stacked behind other widgets
    backgroundLabel->lower();

}

