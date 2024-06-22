#ifndef PLAYERSELECTION_H
#define PLAYERSELECTION_H


#include <QWidget>
class GameplayWindow;
namespace Ui {
class PlayerSelection;
}

class PlayerSelection : public QWidget
{
    Q_OBJECT

public:
    explicit PlayerSelection(QWidget *parent = nullptr);
    ~PlayerSelection();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void changeButtonStyle(const QString &styleName); // Slot to change button style
    void Initialize();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::PlayerSelection *ui;
    GameplayWindow *gameplayWindow;  // Single instance of GameplayWindow
    QString style1;
    QString style2;
};

extern QString username,username1;
extern unsigned char currentPlayer;
extern unsigned char Player1;
extern unsigned char Player2;

#endif // PLAYERSELECTION_H
