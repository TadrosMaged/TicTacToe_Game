#ifndef GAMEMODEWINDOW_H
#define GAMEMODEWINDOW_H

#include <QWidget>
#include "gameplaywindow.h"

namespace Ui {
class GameModeWindow;
}

class GameModeWindow : public QWidget
{
    Q_OBJECT

public:
    explicit GameModeWindow(QWidget *parent = nullptr);
    ~GameModeWindow();

    // gamemodewindow.h
private slots:
    void on_singlePlayerButton_clicked();
    void on_multiPlayerButton_clicked();


private:
    Ui::GameModeWindow *ui;
    GameplayWindow *gameplayWindow;  // Single instance of GameplayWindow
};

#endif // GAMEMODEWINDOW_H
