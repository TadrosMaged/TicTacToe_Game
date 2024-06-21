#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>
#include<QtSql>
#include<QDebug>
#include<QFileInfo>
#include<QMessageBox>
#include<QPixmap>
#include<QLabel>
class SignupForm;
class GameModeWindow;
class GameplayWindow;
class PlayerSelection;
namespace Ui {
class LoginPage;
}

class LoginPage : public QWidget
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = nullptr);
    ~LoginPage();

private slots:

    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void Initialize();

private:
    Ui::LoginPage *ui;
    LoginPage *loginPage;
    QSqlDatabase mydb;
    SignupForm *signupForm;
    GameModeWindow *GamemodeWindow;
    GameplayWindow *gameplayWindow;
    PlayerSelection *playerSelection;
};

#endif // LOGINPAGE_H
