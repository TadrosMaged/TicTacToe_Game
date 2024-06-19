#include "signupform.h"
#include "ui_signupform.h"
#include <QMessageBox>

SignupForm::SignupForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SignupForm)
{
    ui->setupUi(this);
    connect(ui->signupButton, &QPushButton::clicked, this, &SignupForm::signupClicked);
}

SignupForm::~SignupForm()
{
    delete ui;
}
void SignupForm::signupClicked()
{
    QString username = ui->usernameEdit->text().trimmed();
    QString password = ui->passwordEdit->text();
    QString confirm = ui->confirmEdit->text();

    // Check if password matches confirm password
    if (password != confirm) {
        QMessageBox::warning(this, "Error", "Passwords do not match.");
        return;
    }

    // Check if username already exists in database
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT username FROM Players WHERE username = ?");
    checkQuery.bindValue(0, username);
    if (checkQuery.exec() && checkQuery.next()) {
        QMessageBox::warning(this, "Error", "Username already exists in database.");
        return;
    }

    // Insert new user into database
    QSqlQuery query;
    query.prepare("INSERT INTO Players (username, password) "
                  "VALUES (:username, :password)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (!query.exec()) {
        qDebug() << "Error inserting data:" << query.lastError().text();
        QMessageBox::critical(this, "Error", "Failed to insert data into database.");
    } else {
        QMessageBox::information(this, "Success", "Signup successful!");
        clearFields();
        loginPage=new LoginPage;
        loginPage->show();
        this->close();
    }
}

void SignupForm::clearFields()
{
    ui->usernameEdit->clear();
    ui->passwordEdit->clear();
    ui->confirmEdit->clear();
}
