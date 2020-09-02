#include "addmusicwidget.h"
#include "ui_addmusicwidget.h"
#include "mainscene.h"

#include <QFileDialog>
#include <QDebug>

AddMusicWidget::AddMusicWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddMusicWidget)
{
    ui->setupUi(this);
    
    //init ui
    ui->label_noPath->hide();
    ui->label_noTitle->hide();
    ui->lineEdit_musicPath->setReadOnly(true);
    
    ui->label_noPath->setPalette(QPalette(QPalette::WindowText, Qt::red));
    ui->label_noTitle->setPalette(QPalette(QPalette::WindowText, Qt::red));
    
    //set title
    this->setWindowTitle("Add Music");
    
    connect(ui->pushButton_openFileDialog, &QPushButton::clicked, [=]()
    {
        qDebug() << oldFilePath;
        QString path = QFileDialog::getOpenFileName(this, "Open Music...", oldFilePath, "Music Format(*.mp3)");
        ui->lineEdit_musicPath->setText(path);
        oldFilePath = path;
        qDebug() << path;
    });
    
    connect(ui->pushButton_confirm, &QPushButton::clicked, [=]()
    {
        ui->label_noPath->hide();
        ui->label_noTitle->hide();
        
        if(ui->lineEdit_title->text() == "" || ui->lineEdit_musicPath->text() == "")
        {
            if(ui->lineEdit_title->text() == "")
                ui->label_noTitle->show();
            
            if(ui->lineEdit_musicPath->text() == "")
                ui->label_noPath->show();
            
            return;
        }
        
        this->title = ui->lineEdit_title->text();
        this->filePath = ui->lineEdit_musicPath->text();
        this->close();
        
        emit this->FinishedAddingMusic();
    });
}

AddMusicWidget::~AddMusicWidget()
{
    delete ui;
}

void AddMusicWidget::SetTitle(QString title)
{
    ui->lineEdit_title->setText(title);
}

void AddMusicWidget::SetPath(QString path)
{
    ui->lineEdit_musicPath->setText(path);
}
