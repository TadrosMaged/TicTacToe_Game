#ifndef CustomDialog_H
#define CustomDialog_H

#include <QDialog>

namespace Ui {
class CustomDialog;
}

class CustomDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CustomDialog(QWidget *parent = nullptr);
    ~CustomDialog();

    void setMessage(const QString &message);

private:
    Ui::CustomDialog *ui;
};

#endif // CustomDialog_H
