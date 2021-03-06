#include "mainscene.h"
#include "ui_mainscene.h"
#include "rapidjson/stringbuffer.h"
#include "rapidjson/writer.h"
#include "rapidjson/document.h"

#include <QFileDialog>
#include <fstream>
#include <string>
#include <QKeyEvent>

using std::ifstream;
using std::ofstream;
using std::ios;
using std::string;

#define FILENAME "MusicData.json"

QString oldFilePath = ""; 

MainScene::MainScene(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainScene)
{
    ui->setupUi(this);
    
    //set fixed size
    this->setFixedSize(800, 570);
    
    //init other stuff
    this->InitElse();
    
    //load music
    this->LoadMusic();
    
    //add it into old file path
    if(this->titleAndPath.size() != 0)
    {
        oldFilePath = this->titleAndPath[this->titleAndPath.size()-1].second;
    }
    
    //init connect
    this->InitConnect();
}

MainScene::~MainScene()
{
    delete ui;
}

void MainScene::InitElse()
{
    //init player
    this->playList = new QMediaPlaylist(this);
    player = new QMediaPlayer(this);
    player->setPlaylist(this->playList);
    
    //init list widget
    this->listWidget = new MyListWidget(this);
    this->listWidget->setGeometry(0, 60, 260, 460);
    
    //set hot keys for Pause Button and Resume Button
    ui->pushButton_pause->setShortcut(QKeySequence("Space"));
    ui->pushButton_pauseMusic->setShortcut(QKeySequence("Space"));
    
    //set volume
    ui->horizontalSlider_setVolume->setValue(50);
    player->setVolume(50);
    
    //init play back mode button
    ui->pushButton_loop1Song->hide();
    ui->pushButton_randomMode->hide();
    
    
    //init pause and resume button
    ui->pushButton_pause->hide();
    
    //set playback mode
    this->playList->setPlaybackMode(QMediaPlaylist::Loop);
    
    //init setting scene
    this->settingScene = new Settings;
    settingScene->setFixedSize(400, 300);
    settingScene->setWindowTitle("Settings");
}

void MainScene::InitConnect()
{
    //connect list widget
    connect(this->listWidget, &MyListWidget::clicked, this, &MainScene::ListWidgetClicked);
    
    //need to add music
    connect(this->listWidget, &MyListWidget::NeedToAddMusic, this, &MainScene::AddMusic);
    
    //delete music
    connect(this->listWidget, &MyListWidget::DeleteMusic, this, &MainScene::DeleteMusic);
    
    //edit music
    connect(this->listWidget, &MyListWidget::EditMusic, this, &MainScene::EditMusic);
    
    //connect these play back mode button
    connect(ui->pushButton_loopMode, &QPushButton::clicked, [=]()
    {
        ui->pushButton_loop1Song->show();
        ui->pushButton_loopMode->hide();
        playList->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    });
    
    connect(ui->pushButton_loop1Song, &QPushButton::clicked, [=]()
    {
        ui->pushButton_randomMode->show();
        ui->pushButton_loop1Song->hide();
        playList->setPlaybackMode(QMediaPlaylist::Random);
    });
    
    connect(ui->pushButton_randomMode, &QPushButton::clicked, [=]()
    {
        ui->pushButton_loopMode->show();
        ui->pushButton_randomMode->hide();
        playList->setPlaybackMode(QMediaPlaylist::Loop);
    });
    
    //click the button to add music
    connect(ui->pushButton_addMusic, &QPushButton::clicked, this, &MainScene::AddMusic);
    
    //pause and continue music
    connect(ui->pushButton_pauseMusic, &QPushButton::clicked, this, &MainScene::PlayMusic);
    
    connect(ui->pushButton_pause, &QPushButton::clicked, this, &MainScene::PauseMusic);
    
    //connect the horizontal slide bar and the music volume
    connect(ui->horizontalSlider_setVolume, &QSlider::valueChanged, this->player, &QMediaPlayer::setVolume);
    
    //connect if the current index was changed if the QMediaPlayList's music changed
    connect(this->playList, &QMediaPlaylist::currentIndexChanged, this, &MainScene::OnMediaPlayListIndexChanged); 
    
    //connect progress bar
    connect(player, &QMediaPlayer::positionChanged, this, &MainScene::UpdatePosition);
    connect(player, &QMediaPlayer::durationChanged, this, &MainScene::UpdateDuration);
    
    //connect the slider for media player
    connect(ui->horizontalSlider_progressBar, &QSlider::valueChanged, player, &QMediaPlayer::setPosition);
    
    
    //previous and next music button
    connect(ui->pushButton_previous, &QPushButton::clicked, this, &MainScene::PreviousMusic);
    connect(ui->pushButton_next, &QPushButton::clicked, this, &MainScene::NextMusic);
    
    //connect add music button in the menu bar
    connect(ui->actionAdd_Music, &QAction::triggered, this, &MainScene::AddMusic);
    
    //connect hot keys action
    connect(ui->actionHotKeys, &QAction::triggered, this->settingScene, &Settings::show);
    connect(this->settingScene, &Settings::FinishedSetting, this, &MainScene::CopyAllFiles);
}

void MainScene::AddMusic()
{    
    //    AddMusicWidget *addMusicWidget = new AddMusicWidget;
    //    addMusicWidget->show();
    
    //    //put path into play list
    //    connect(addMusicWidget, &AddMusicWidget::FinishedAddingMusic, [=]()
    //    {
    //        qDebug() << "file path =" << addMusicWidget->filePath;
    //        qDebug() << "title =" << addMusicWidget->title;
    
    //        QString realTitle = addMusicWidget->title;
    
    //        if(addMusicWidget->artist != "")
    //        {
    //            realTitle += " - ";
    //            realTitle += addMusicWidget->artist;
    //        }
    
    //        //add media and list widget
    //        this->playList->addMedia(QUrl::fromLocalFile(addMusicWidget->filePath));
    //        QListWidgetItem *item = new QListWidgetItem(realTitle);
    //        this->listWidget->addItem(item);
    
    //        //add this filepath to the container
    //        titleAndPath.push_back(qMakePair(realTitle, addMusicWidget->filePath));
    
    //        //save the music into json file
    //        this->SaveMusic();
    
    //        //delete the addMusicWidget
    //        delete addMusicWidget;
    //    });
    
    QStringList songFileList = QFileDialog::getOpenFileNames(this, 
                                                             "Choose Your Favorite Music Right Here...", 
                                                             oldFilePath, 
                                                             "Music Format(*.mp3)");
    
    qDebug() << songFileList;
    
    for(auto it = songFileList.begin(); it != songFileList.end(); it++)
    {
        QFileInfo info = *it;
        QString title = info.fileName();
        
        int position = title.indexOf(".mp3");
        title.remove(position, 4);
        qDebug() << title;
        
        this->titleAndPath.push_back(qMakePair(title, *it));
        this->listWidget->addItem(title);
        this->playList->addMedia(QUrl::fromLocalFile(*it));
    }
    
    this->SaveMusic();
}

void MainScene::SaveMusic()
{
    rapidjson::StringBuffer strBuf;
    rapidjson::Writer<rapidjson::StringBuffer>writer(strBuf);
    
    writer.StartObject();
    writer.Key("music");
    writer.StartArray();
    
    qDebug() << "-------------------------start saving stuff...-------------------------";
    
    for(auto it = this->titleAndPath.begin(); it != this->titleAndPath.end(); it++)
    {
        writer.StartObject();
        
        writer.Key("title");
        writer.String(it->first.toUtf8().data());
        
        writer.Key("path");
        writer.String(it->second.toUtf8().data());
        
        writer.EndObject();
    }
    
    writer.EndArray();
    writer.EndObject();
    
    QString data = strBuf.GetString();
    qDebug() << data;
    
    ofstream ofs(FILENAME, ios::out);
    ofs << data.toUtf8().data();
    ofs.close();   
    
    qDebug() << "-------------------------Ended saving stuff...-------------------------";
}

void MainScene::PlayMusic()
{
    player->play();
    this->listWidget->setCurrentRow(playList->currentIndex());
    ui->pushButton_pause->show();
    ui->pushButton_pauseMusic->hide();
}

void MainScene::LoadMusic()
{
    QFile file(FILENAME);
    bool isOpen = file.open(QFile::ReadOnly);
    if(!isOpen)
    {
        qDebug() << "Open json file failed!";
        return;
    }
    
    QString str = file.readAll();
    qDebug() << str.toUtf8().data();
    
    rapidjson::Document doc;
    doc.Parse(str.toUtf8().data());
    
    if(!doc.HasParseError())
    {
        if(doc.HasMember("music") && doc["music"].IsArray())
        {
            rapidjson::Value &array = doc["music"];
            
            int size = array.Size();
            
            for(int i = 0; i < size; i++)
            {
                rapidjson::Value &object = array[i];
                
                if(object.IsObject())
                {
                    const char *title = "";
                    const char *path = "";
                    
                    if(object.HasMember("title") && object["title"].IsString())
                    {
                        title = object["title"].GetString();
                        qDebug() << object["title"].GetString();
                    }
                    
                    if(object.HasMember("path") && object["path"].IsString())
                    {
                        path = object["path"].GetString();
                        qDebug() << object["path"].GetString();
                    }
                    
                    titleAndPath.push_back(qMakePair((QString)title, (QString)path));
                    qDebug() << "first =" << titleAndPath[i].first;
                    qDebug() << "second =" << titleAndPath[i].second;
                }
            }
        }
    }
    
    int times = 0;
    
    for(auto it = this->titleAndPath.begin(); it != this->titleAndPath.end(); it++)
    {
        times++;
        qDebug() << times;
        
        qDebug() << "key = " << it->first;
        qDebug() << "value = " << it->second;
        
        QListWidgetItem *item = new QListWidgetItem(it->first);
        this->listWidget->addItem(item);
        
        qDebug() << "finished adding items to the list widget";
        
        this->playList->addMedia(QUrl::fromLocalFile(it->second));
    }
}

void MainScene::UpdatePosition(int position)
{
    disconnect(ui->horizontalSlider_progressBar, &QSlider::valueChanged, player, &QMediaPlayer::setPosition);
    
    ui->horizontalSlider_progressBar->setValue(position);
    
    connect(ui->horizontalSlider_progressBar, &QSlider::valueChanged, player, &QMediaPlayer::setPosition);
}

void MainScene::UpdateDuration(int duration)
{
    ui->horizontalSlider_progressBar->setRange(0, duration);
    ui->horizontalSlider_progressBar->setEnabled(duration > 0);
    
    ui->horizontalSlider_progressBar->setPageStep(duration / 10);
}

void MainScene::closeEvent(QCloseEvent *)
{
    exit(0);
}

void MainScene::ListWidgetClicked(const QModelIndex &)
{
    qDebug() << "currect Row:" << this->listWidget->currentRow();
    
    disconnect(this->playList, &QMediaPlaylist::currentIndexChanged, this, &MainScene::OnMediaPlayListIndexChanged); 
    
    this->playList->setCurrentIndex(this->listWidget->currentRow());
    this->listWidget->setCurrentRow(this->listWidget->currentRow());
    
    qDebug() << "currect index for play list:" << playList->currentIndex();
    qDebug() << "how many media in play list:" << playList->mediaCount();
    
    connect(this->playList, &QMediaPlaylist::currentIndexChanged, this, &MainScene::OnMediaPlayListIndexChanged); 
}

void MainScene::OnMediaPlayListIndexChanged()
{
    qDebug() << "triggered OnMediaPlayListIndexChanged";
    
    int currentRow = this->playList->currentIndex();
    
    this->listWidget->setCurrentRow(currentRow);
}

void MainScene::DeleteMusic(int row)
{
    qDebug() << "current row:" << row;
    
    QListWidgetItem *item = this->listWidget->takeItem(row);
    delete item;
    
    QVector<QPair<QString, QString>>::iterator it = this->titleAndPath.begin();
    
    for(int i = 0; i < row; i++)
        it++;
    
    this->titleAndPath.erase(it);
    this->playList->removeMedia(row);
    
    this->SaveMusic();
}

void MainScene::EditMusic(int row)
{
    qDebug() << "title:" << this->titleAndPath[row].first.toUtf8().data() << "path:" << this->titleAndPath[row].second.toUtf8().data();
    
    //    AddMusicWidget *addMusicWidget = new AddMusicWidget;
    //    addMusicWidget->show();
    //    addMusicWidget->SetTitle(this->titleAndPath[row].first);
    //    addMusicWidget->SetPath(this->titleAndPath[row].second);
    
    //    //put path into play list
    //    connect(addMusicWidget, &AddMusicWidget::FinishedAddingMusic, [=]()
    //    {
    //        qDebug() << "file path =" << addMusicWidget->filePath;
    //        qDebug() << "title =" << addMusicWidget->title;
    
    //        //add media and list widget
    //        this->playList->insertMedia(row, QUrl::fromLocalFile(addMusicWidget->filePath));
    //        QListWidgetItem *item = new QListWidgetItem(addMusicWidget->title);
    //        this->listWidget->insertItem(row, item);
    
    //        //add this filepath to the container
    //        titleAndPath.insert(row, qMakePair(addMusicWidget->title, addMusicWidget->filePath));
    
    //        //delete the old one
    //        DeleteMusic(row+1);
    
    //        //save the music into json file
    //        this->SaveMusic();
    
    //        //delete the addMusicWidget
    //        delete addMusicWidget;
    
    //        this->playList->setCurrentIndex(row);
    //        this->listWidget->setCurrentRow(row);
    //    });
    
    QString newDir = QFileDialog::getOpenFileName(this, 
                                                  "Choose Your Favorite Music Right Here...", 
                                                  oldFilePath, 
                                                  "Music Format(*.mp3)");
    
    qDebug() << newDir;
    if(newDir == "")
        return;
    
    QFileInfo info = newDir;
    QString fileName = info.fileName();
    fileName.replace(".mp3", "");
    qDebug() << fileName;
    
    //delete the old one
    DeleteMusic(row);
    
    //insert the new one
    this->titleAndPath.push_back(qMakePair(fileName, newDir));
    this->listWidget->addItem(fileName);
    this->playList->addMedia(QUrl::fromLocalFile(newDir));
    
    this->SaveMusic();
}

void MainScene::PauseMusic()
{
    player->pause();
    ui->pushButton_pause->hide();
    ui->pushButton_pauseMusic->show();
}

void MainScene::PreviousMusic()
{
    int currentRow = this->listWidget->currentRow();
    
    if(--currentRow == -1)
        currentRow = this->listWidget->count() - 1;
    
    this->playList->setCurrentIndex(currentRow);
    this->listWidget->setCurrentRow(currentRow);
}

void MainScene::NextMusic()
{
    int currentRow = this->listWidget->currentRow();
    
    if(++currentRow == this->listWidget->count())
        currentRow = 0;
    
    this->playList->setCurrentIndex(currentRow);
    this->listWidget->setCurrentRow(currentRow);
}

void MainScene::CopyAllFiles()
{
    for(auto it = this->titleAndPath.begin(); it != this->titleAndPath.end(); it++)
    {
        qDebug() << qApp->applicationDirPath();
        
        QDir dir = QString(qApp->applicationDirPath());
        dir.mkdir("Music");
        bool isCopySuccessful = QFile::copy(
                    it->second, 
                    QString("%1%2%3").arg(qApp->applicationDirPath()).arg("/Music/").arg(it->first + ".mp3")
                    );
        
        qDebug() << QString("%1%2%3").arg(qApp->applicationDirPath()).arg("/Music/").arg(it->first + ".mp3");
        qDebug() << "copied successful:" << isCopySuccessful;
        
        it->second = QString("%1%2%3").arg(qApp->applicationDirPath()).arg("/Music/").arg(it->first + ".mp3");
    }
    
    this->SaveMusic();
    
    //    QDir dir = (QString)"D:\\";
    //    dir.mkdir("Music");
    
    //    qDebug() << "Start Copying Files...";
    //    bool isCopySuccessful = QFile::copy("D:\\4. My Working Stuff\\99. Convert\\The Calling - TheFatRat.mp3", "D:\\Music\\Test01.mp3");
    //    qDebug() << isCopySuccessful;
}