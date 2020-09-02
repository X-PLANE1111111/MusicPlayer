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
    QMenuBar *menubar;
    QMenu *menuStart;

    void setupUi(QMainWindow *MainScene)
    {
        if (MainScene->objectName().isEmpty())
            MainScene->setObjectName(QStringLiteral("MainScene"));
        MainScene->resize(800, 571);
        actionAdd_Music = new QAction(MainScene);
        actionAdd_Music->setObjectName(QStringLiteral("actionAdd_Music"));
        centralwidget = new QWidget(MainScene);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_addMusic = new QPushButton(centralwidget);
        pushButton_addMusic->setObjectName(QStringLiteral("pushButton_addMusic"));
        pushButton_addMusic->setGeometry(QRect(710, 520, 80, 20));
        pushButton_addMusic->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_addMusic->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-radius:6px;\n"
"	background-color: rgb(0, 170, 255);\n"
"	font: 10pt \"Consolas\";\n"
"}"));
        pushButton_pauseMusic = new QPushButton(centralwidget);
        pushButton_pauseMusic->setObjectName(QStringLiteral("pushButton_pauseMusic"));
        pushButton_pauseMusic->setGeometry(QRect(50, 510, 40, 30));
        pushButton_pauseMusic->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_pauseMusic->setStyleSheet(QStringLiteral("QPushButton{border:0px}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/Resume.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_pauseMusic->setIcon(icon);
        pushButton_pauseMusic->setIconSize(QSize(50, 50));
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
        widget->setGeometry(QRect(560, 490, 131, 58));
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
        horizontalSlider_setVolume->setCursor(QCursor(Qt::SizeHorCursor));
        horizontalSlider_setVolume->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_setVolume);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(150, 490, 401, 58));
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
        horizontalSlider_progressBar->setCursor(QCursor(Qt::SizeHorCursor));
        horizontalSlider_progressBar->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_progressBar);

        pushButton_pause = new QPushButton(centralwidget);
        pushButton_pause->setObjectName(QStringLiteral("pushButton_pause"));
        pushButton_pause->setGeometry(QRect(50, 510, 40, 30));
        pushButton_pause->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_pause->setStyleSheet(QStringLiteral("QPushButton{border:0px}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/Pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_pause->setIcon(icon1);
        pushButton_pause->setIconSize(QSize(50, 50));
        MainScene->setCentralWidget(centralwidget);
        pushButton_pause->raise();
        pushButton_addMusic->raise();
        pushButton_pauseMusic->raise();
        label->raise();
        widget->raise();
        widget_2->raise();
        menubar = new QMenuBar(MainScene);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuStart = new QMenu(menubar);
        menuStart->setObjectName(QStringLiteral("menuStart"));
        MainScene->setMenuBar(menubar);

        menubar->addAction(menuStart->menuAction());
        menuStart->addAction(actionAdd_Music);

        retranslateUi(MainScene);

        QMetaObject::connectSlotsByName(MainScene);
    } // setupUi

    void retranslateUi(QMainWindow *MainScene)
    {
        MainScene->setWindowTitle(QApplication::translate("MainScene", "MainScene", Q_NULLPTR));
        actionAdd_Music->setText(QApplication::translate("MainScene", "Add Music", Q_NULLPTR));
        pushButton_addMusic->setText(QApplication::translate("MainScene", "Add Music", Q_NULLPTR));
        pushButton_pauseMusic->setText(QString());
        label->setText(QApplication::translate("MainScene", "Play List", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainScene", "Volume", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainScene", "Progress Bar", Q_NULLPTR));
        pushButton_pause->setText(QString());
        menuStart->setTitle(QApplication::translate("MainScene", "Start", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainScene: public Ui_MainScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCENE_H
