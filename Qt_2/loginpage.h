#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>
#include<QtSql>
#include<QDebug>
#include<QFileInfo>
#include<QMessageBox>
class SignupForm;
class GameModeWindow;
class GameplayWindow;
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

private:
    Ui::LoginPage *ui;
    LoginPage *loginPage;
    QSqlDatabase mydb;
    SignupForm *signupForm;
    GameModeWindow *GamemodeWindow;
    GameplayWindow *gameplayWindow;
};

#endif // LOGINPAGE_H
