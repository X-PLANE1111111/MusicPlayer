#ifndef MYLISTWIDGET_H
#define MYLISTWIDGET_H

#include <QListWidget>
#include <QAction>

class MyListWidget : public QListWidget
{
    Q_OBJECT
public:
    explicit MyListWidget(QWidget *parent = nullptr);
    
    void contextMenuEvent(QContextMenuEvent *e);
    
    QAction *addAction = nullptr;
    QAction *deleteAction = nullptr;
    QAction *editAction = nullptr;
    
signals:
    void NeedToAddMusic();
    void DeleteMusic(int index);
    void EditMusic(int index);
};

#endif // MYLISTWIDGET_H
