#include "mylistwidget.h"

#include <QMenu>
#include <QDebug>

MyListWidget::MyListWidget(QWidget *parent) : QListWidget(parent)
{

}

void MyListWidget::contextMenuEvent(QContextMenuEvent *)
{
    QMenu *popMenu = new QMenu(this);
    
    addAction = new QAction("Add Music", this);
    deleteAction = new QAction("Delete", this);
    editAction = new QAction("Edit", this);
    
    popMenu->addAction(addAction);
    
    if(this->itemAt(mapFromGlobal(QCursor::pos())) != nullptr)
    {        
        popMenu->addAction(deleteAction);
        popMenu->addAction(editAction);
    }
    
    connect(addAction, &QAction::triggered, [=]()
    {
        qDebug() << "pressed add action";
        emit this->NeedToAddMusic();
    });
    
    connect(deleteAction, &QAction::triggered, [=]()
    {
        emit this->DeleteMusic(this->currentRow()); 
    });
    
    connect(editAction, &QAction::triggered, [=]()
    {
        qDebug() << "current row:" << this->currentRow();
        emit this->EditMusic(this->currentRow()); 
    });
    
    popMenu->exec(QCursor::pos());
}