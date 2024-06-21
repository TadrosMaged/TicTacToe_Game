#ifndef SIGNUPFORM_H
#define SIGNUPFORM_H

#include <QMainWindow>
#include <QtSql>
#include"loginpage.h"
class LoginPage;
namespace Ui {
class SignupForm;
}

class SignupForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit SignupForm(QWidget *parent = nullptr);
    ~SignupForm();

private slots:
    void signupClicked();
    void Initialize();

private:
    Ui::SignupForm *ui;
    void clearFields();
    LoginPage* loginPage;
};

#endif // SIGNUPFORM_H
