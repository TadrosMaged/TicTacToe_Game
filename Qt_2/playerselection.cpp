#include "playerselection.h"
#include "ui_playerselection.h"

PlayerSelection::PlayerSelection(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PlayerSelection)
{
    ui->setupUi(this);
}

PlayerSelection::~PlayerSelection()
{
    delete ui;
}
