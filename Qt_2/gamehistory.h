#ifndef GAMEHISTORY_H
#define GAMEHISTORY_H

#include <QWidget>
#include<QPushButton>
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

private:
    Ui::gameHistory *ui;
     QPushButton *buttons_history2[6][3][3];
};
extern QPushButton *buttons_history[6][3][3];
//extern gameHistory history;
#endif // GAMEHISTORY_H
