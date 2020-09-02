# Music Player

A music player that made by Qt



**this is just a study app, not very good, but you can still try to use it, it's fine**



# License

***__this is just for study, DO NOT USE IT AS BUISNESS.__***



# Code Explanation



## Basic



So the basic should look like this, there is play list that contains all the music, and player plays it.

```c++
#include <QMediaPlayList>
#include <QMediaPlayer>

Widget::Widget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainScene)
    {
        ui.setupUi(this);
        
        QMediaPlayList *playList = new QMediaPlayList(this);
        
        playList->addMedia(QUrl::fromLocalFile("D:/music/0001.mp3"));
        playList->addMedia(QUrl::fromLocalFile("D:/music/0002.mp3"));
        playList->addMedia(QUrl::fromLocalFile("D:/music/0003.mp3"));
        playList->addMedia(QUrl::fromLocalFile("D:/music/0004.mp3"));
        
        QMediaPlayer *player = new QMediaPlayer(this);
        player->play();
    }
```

And a Push Button that connect to play music

```c++
QPushButton *playMusic = new QPushButton("Play Music", this);

connect(playMusic, &QPushButton::clicked, player, &QMediaPlayer::play);
```

A pause music button

```c++
QPushButton *pauseMusic = new QPushButton("Pause Music", this);

connect(pauseMusic, &QPushButton::clicked, player, &QMediaPlayer::pause);
```





