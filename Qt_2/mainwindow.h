#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gamemodewindow.h"
class LoginPage;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void reopen()
    {
        this->show();
    }
private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    GameModeWindow *gameModeWindow;
    LoginPage *loginPage;
};

#endif // MAINWINDOW_H
