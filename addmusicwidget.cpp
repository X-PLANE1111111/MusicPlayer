#include "addmusicwidget.h"
#include "ui_addmusicwidget.h"
#include "mainscene.h"

#include <QFileDialog>
#include <QDebug>
#include <QKeyEvent>

AddMusicWidget::AddMusicWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddMusicWidget)
{
    ui->setupUi(this);
    
    //init ui
    ui->label_noPath->hide();
    ui->label_noTitle->hide();
    ui->label_noArtist->hide();
    ui->lineEdit_musicPath->setReadOnly(true);
    ui->lineEdit_title->installEventFilter(this);
    
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
        
        if(ui->lineEdit_title->text() == "" || ui->lineEdit_musicPath->text() == "" || ui->lineEdit_artist->text() == "")
        {
            if(ui->lineEdit_title->text() == "")
                ui->label_noTitle->show();
            
            if(ui->lineEdit_musicPath->text() == "")
                ui->label_noPath->show();
            
            if(ui->lineEdit_artist->text() == "")
                ui->label_noArtist->show();
            
            return;
        }
        
        this->title = ui->lineEdit_title->text();
        this->filePath = ui->lineEdit_musicPath->text();
        this->artist = ui->lineEdit_artist->text();
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

bool AddMusicWidget::eventFilter(QObject *o, QEvent *e)
{
    if(o == ui->lineEdit_title)
    {
        if(e->type() == QEvent::KeyPress)
        {
            QKeyEvent *keyEvent = (QKeyEvent*)e;
            switch(keyEvent->key())
            {
            case Qt::Key_Minus:
                return true;
            }
            
            return ui->lineEdit_title->eventFilter(o, e);
        }
    }
    if(o == ui->lineEdit_artist)
    {
        if(e->type() == QEvent::KeyPress)
        {
            QKeyEvent *keyEvent = (QKeyEvent*)e;
            switch(keyEvent->key())
            {
            case Qt::Key_Minus:
                return true;
            }
            
            return ui->lineEdit_title->eventFilter(o, e);
        }
    }
    
    return QObject::eventFilter(o, e);
}
