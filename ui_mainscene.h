/********************************************************************************
** Form generated from reading UI file 'mainscene.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCENE_H
#define UI_MAINSCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainScene
{
public:
    QAction *actionAdd_Music;
    QAction *actionHotKeys;
    QWidget *centralwidget;
    QPushButton *pushButton_addMusic;
    QPushButton *pushButton_pauseMusic;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSlider *horizontalSlider_setVolume;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QSlider *horizontalSlider_progressBar;
    QPushButton *pushButton_pause;
    QPushButton *pushButton_next;
    QPushButton *pushButton_previous;
    QPushButton *pushButton_randomMode;
    QPushButton *pushButton_loopMode;
    QPushButton *pushButton_loop1Song;
    QMenuBar *menubar;
    QMenu *menuStart;

    void setupUi(QMainWindow *MainScene)
    {
        if (MainScene->objectName().isEmpty())
            MainScene->setObjectName(QStringLiteral("MainScene"));
        MainScene->setEnabled(true);
        MainScene->resize(800, 570);
        MainScene->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/MusicIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainScene->setWindowIcon(icon);
        actionAdd_Music = new QAction(MainScene);
        actionAdd_Music->setObjectName(QStringLiteral("actionAdd_Music"));
        actionHotKeys = new QAction(MainScene);
        actionHotKeys->setObjectName(QStringLiteral("actionHotKeys"));
        centralwidget = new QWidget(MainScene);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_addMusic = new QPushButton(centralwidget);
        pushButton_addMusic->setObjectName(QStringLiteral("pushButton_addMusic"));
        pushButton_addMusic->setGeometry(QRect(710, 10, 80, 20));
        pushButton_addMusic->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_addMusic->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-radius:6px;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font: 10pt \"Consolas\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgb(0, 143, 214);\n"
"	border-style: inset;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color: rgb(0, 255, 255);\n"
"}"));
        pushButton_pauseMusic = new QPushButton(centralwidget);
        pushButton_pauseMusic->setObjectName(QStringLiteral("pushButton_pauseMusic"));
        pushButton_pauseMusic->setGeometry(QRect(53, 510, 40, 30));
        pushButton_pauseMusic->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_pauseMusic->setStyleSheet(QStringLiteral("QPushButton{border:0px}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/Resume.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_pauseMusic->setIcon(icon1);
        pushButton_pauseMusic->setIconSize(QSize(40, 40));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 261, 31));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(540, 485, 121, 58));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("Consolas"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        horizontalSlider_setVolume = new QSlider(widget);
        horizontalSlider_setVolume->setObjectName(QStringLiteral("horizontalSlider_setVolume"));
        horizontalSlider_setVolume->setCursor(QCursor(Qt::ArrowCursor));
        horizontalSlider_setVolume->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_setVolume);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(150, 485, 381, 58));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        horizontalSlider_progressBar = new QSlider(widget_2);
        horizontalSlider_progressBar->setObjectName(QStringLiteral("horizontalSlider_progressBar"));
        horizontalSlider_progressBar->setEnabled(false);
        horizontalSlider_progressBar->setCursor(QCursor(Qt::ArrowCursor));
        horizontalSlider_progressBar->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_progressBar);

        pushButton_pause = new QPushButton(centralwidget);
        pushButton_pause->setObjectName(QStringLiteral("pushButton_pause"));
        pushButton_pause->setGeometry(QRect(53, 510, 40, 30));
        pushButton_pause->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_pause->setStyleSheet(QStringLiteral("QPushButton{border:0px}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/Pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_pause->setIcon(icon2);
        pushButton_pause->setIconSize(QSize(40, 40));
        pushButton_next = new QPushButton(centralwidget);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));
        pushButton_next->setGeometry(QRect(100, 510, 40, 30));
        pushButton_next->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_next->setStyleSheet(QStringLiteral("QPushButton{border:0px}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_next->setIcon(icon3);
        pushButton_next->setIconSize(QSize(35, 30));
        pushButton_previous = new QPushButton(centralwidget);
        pushButton_previous->setObjectName(QStringLiteral("pushButton_previous"));
        pushButton_previous->setGeometry(QRect(10, 510, 40, 30));
        pushButton_previous->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_previous->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border:0px;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Images/Previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_previous->setIcon(icon4);
        pushButton_previous->setIconSize(QSize(35, 40));
        pushButton_randomMode = new QPushButton(centralwidget);
        pushButton_randomMode->setObjectName(QStringLiteral("pushButton_randomMode"));
        pushButton_randomMode->setGeometry(QRect(680, 510, 30, 30));
        pushButton_randomMode->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_randomMode->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border:0px;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Images/Random.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_randomMode->setIcon(icon5);
        pushButton_randomMode->setIconSize(QSize(30, 30));
        pushButton_loopMode = new QPushButton(centralwidget);
        pushButton_loopMode->setObjectName(QStringLiteral("pushButton_loopMode"));
        pushButton_loopMode->setGeometry(QRect(680, 510, 30, 30));
        pushButton_loopMode->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_loopMode->setStyleSheet(QStringLiteral("QPushButton{border:0px;}"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Images/Loop.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_loopMode->setIcon(icon6);
        pushButton_loopMode->setIconSize(QSize(30, 30));
        pushButton_loop1Song = new QPushButton(centralwidget);
        pushButton_loop1Song->setObjectName(QStringLiteral("pushButton_loop1Song"));
        pushButton_loop1Song->setGeometry(QRect(680, 510, 30, 30));
        pushButton_loop1Song->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_loop1Song->setStyleSheet(QStringLiteral("QPushButton{border:0px;}"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Images/Loop1Song.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_loop1Song->setIcon(icon7);
        pushButton_loop1Song->setIconSize(QSize(30, 30));
        MainScene->setCentralWidget(centralwidget);
        pushButton_pause->raise();
        pushButton_addMusic->raise();
        pushButton_pauseMusic->raise();
        label->raise();
        widget->raise();
        widget_2->raise();
        pushButton_next->raise();
        pushButton_previous->raise();
        pushButton_randomMode->raise();
        pushButton_loopMode->raise();
        pushButton_loop1Song->raise();
        menubar = new QMenuBar(MainScene);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuStart = new QMenu(menubar);
        menuStart->setObjectName(QStringLiteral("menuStart"));
        MainScene->setMenuBar(menubar);

        menubar->addAction(menuStart->menuAction());
        menuStart->addAction(actionAdd_Music);
        menuStart->addAction(actionHotKeys);

        retranslateUi(MainScene);

        QMetaObject::connectSlotsByName(MainScene);
    } // setupUi

    void retranslateUi(QMainWindow *MainScene)
    {
        MainScene->setWindowTitle(QApplication::translate("MainScene", "MainScene", Q_NULLPTR));
        actionAdd_Music->setText(QApplication::translate("MainScene", "Add Music", Q_NULLPTR));
        actionHotKeys->setText(QApplication::translate("MainScene", "Settings", Q_NULLPTR));
        pushButton_addMusic->setText(QApplication::translate("MainScene", "Add Music", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_pauseMusic->setToolTip(QApplication::translate("MainScene", "Resume", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_pauseMusic->setText(QString());
        label->setText(QApplication::translate("MainScene", "Play List", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainScene", "Volume", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainScene", "Progress Bar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_pause->setToolTip(QApplication::translate("MainScene", "Pause", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_pause->setText(QString());
        pushButton_next->setText(QString());
#ifndef QT_NO_SHORTCUT
        pushButton_next->setShortcut(QApplication::translate("MainScene", "Right", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_previous->setText(QString());
#ifndef QT_NO_SHORTCUT
        pushButton_previous->setShortcut(QApplication::translate("MainScene", "Left", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        pushButton_randomMode->setToolTip(QApplication::translate("MainScene", "playing random songs in the play list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_randomMode->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_loopMode->setToolTip(QApplication::translate("MainScene", "loop the song list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_loopMode->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_loop1Song->setToolTip(QApplication::translate("MainScene", "Loop the current song", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_loop1Song->setText(QString());
        menuStart->setTitle(QApplication::translate("MainScene", "Start", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainScene: public Ui_MainScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCENE_H
