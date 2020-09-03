#ifndef ADDMUSICWIDGET_H
#define ADDMUSICWIDGET_H

#include <QWidget>

namespace Ui {
class AddMusicWidget;
}

class AddMusicWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit AddMusicWidget(QWidget *parent = nullptr);
    ~AddMusicWidget();
    
    QString title;
    QString filePath;
    QString artist;
    
    void SetTitle(QString title);
    void SetPath(QString path);
    void SetArtist(QString artist);
    
    bool eventFilter(QObject *o, QEvent *e);
   
signals:
    void FinishedAddingMusic();
    
private:
    Ui::AddMusicWidget *ui;
};

#endif // ADDMUSICWIDGET_H
