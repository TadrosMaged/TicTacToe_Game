#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QMessageBox>
#include "login.h"
#include "signup.h"
#include "main_menu.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_Login_Welc_clicked();

    void on_Signup_Welc_clicked();

private:
    Ui::MainWindow *ui;
    Login     *login;
    Signup    *signup;
    Main_Menu *main_menu;
};
#endif // MAINWINDOW_H
