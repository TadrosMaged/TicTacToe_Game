#include "CustomDialog.h"
#include "ui_CustomDialog.h"

CustomDialog::CustomDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomDialog)
{
    ui->setupUi(this);  // This initializes the UI components defined in Qt Designer
}

CustomDialog::~CustomDialog()
{
    delete ui;
}

void CustomDialog::setMessage(const QString &message)
{
    ui->outcomeLabel->setText(message);  // Sets the text of outcomeLabel
}
