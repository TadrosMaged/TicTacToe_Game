#ifndef GAMEHISTORY_H
#define GAMEHISTORY_H

#include <QWidget>
#include<QPushButton>
class chooseDifficulty;
class PlayerSelection;
class MainWindow;
namespace Ui {
class gameHistory;
}

class gameHistory : public QWidget
{
    Q_OBJECT

public:
    explicit gameHistory(QWidget *parent = nullptr);
    ~gameHistory();
    void Initialize();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::gameHistory *ui;
    chooseDifficulty  *choosedifficulty;
    PlayerSelection *playerSelection;
     QPushButton *buttons_history2[6][3][3];
    MainWindow *mainWindow;
};
extern QString buttons_history1[6][3][3];

#endif // GAMEHISTORY_H
