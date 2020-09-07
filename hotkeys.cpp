#include "hotkeys.h"
#include "ui_hotkeys.h"

HotKeys::HotKeys(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HotKeys)
{
    ui->setupUi(this);
}

HotKeys::~HotKeys()
{
    delete ui;
}
