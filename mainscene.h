#ifndef MAINSCENE_H
#define MAINSCENE_H

#include "mylistwidget.h"

#include <QMainWindow>
#include <QMediaPlaylist>
#include <QMediaPlayer>
#include <QVector>
#include <QPair>

extern QString oldFilePath;

QT_BEGIN_NAMESPACE
namespace Ui { class MainScene; }
QT_END_NAMESPACE

class MainScene : public QMainWindow
{
    Q_OBJECT
    
public:
    MainScene(QWidget *parent = nullptr);
    ~MainScene();
    
private:
    Ui::MainScene *ui;
    
    //the playerlist of music
    QMediaPlaylist *playList = nullptr;
    
    //the player
    QMediaPlayer *player = nullptr;
    
    //the function that will add music
    void AddMusic();
    
    //save music
    void SaveMusic();
    
    //pause and resume music
    void PlayMusic();
    
    //load music
    void LoadMusic();
    
    //update progress bar for music
    void UpdatePosition(int position);
    
    //update duration bar for music
    void UpdateDuration(int duration);
    
    //close event
    void closeEvent(QCloseEvent *) override;
    
    //list widget clicked
    void ListWidgetClicked(const QModelIndex &);
    
    //media play list index changed
    void OnMediaPlayListIndexChanged();
    
    //delete music
    void DeleteMusic(int row);
    
    //edit music
    void EditMusic(int row);
    
    //pause music
    void PauseMusic();
    
    //the container that saves title and path
    QVector<QPair<QString, QString>>titleAndPath; 
    
    //listWidget
    MyListWidget *listWidget = nullptr;
};
#endif // MAINSCENE_H
