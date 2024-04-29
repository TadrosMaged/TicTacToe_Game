#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include <QDialog>
#include "game.h"

namespace Ui {
class Main_Menu;
}

class Main_Menu : public QDialog
{
    Q_OBJECT

public:
    explicit Main_Menu(QWidget *parent = nullptr);
    ~Main_Menu();

private slots:

    void on_player_ai_clicked();

    void on_player_player_clicked();

    void on_game_history_clicked();

private:
    Ui::Main_Menu *ui;
    Game* game;
};

#endif // MAIN_MENU_H
