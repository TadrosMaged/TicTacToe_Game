#ifndef GAMEPLAYWINDOW_H
#define GAMEPLAYWINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>

namespace Ui {
class GameplayWindow;
}

class GameplayWindow : public QWidget
{
    Q_OBJECT

public:
    explicit GameplayWindow(QWidget *parent = nullptr);
    ~GameplayWindow();

private:
    Ui::GameplayWindow *ui;
    QPushButton *buttons[3][3];  // 3x3 Tic Tac Toe board
};

#endif // GAMEPLAYWINDOW_H
