#include "settings.h"
#include "ui_settings.h"

#include <QDebug>

Settings::Settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    
    this->InitConnect();
}

Settings::~Settings()
{
    delete ui;
}

void Settings::InitConnect()
{
    //cancel button
    connect(ui->pushButton_cancel, &QPushButton::clicked, this, &Settings::close);
    
    //OK button
    connect(ui->pushButton_OK, &QPushButton::clicked, [=]()
    {
        emit ui->pushButton_apply->clicked();
        emit this->FinishedSetting();
        this->close();
    });
    
    //Apply Button
    connect(ui->pushButton_apply, &QPushButton::clicked, this, &Settings::ChangeSettings);
}

void Settings::ChangeSettings()
{
    //is copy file
    int isChecked = ui->checkBox_isCopyFile->checkState();
    this->isCopyFile = isChecked;
    
    qDebug() << "is copy file:" << isCopyFile;
}
