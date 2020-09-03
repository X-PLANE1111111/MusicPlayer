/********************************************************************************
** Form generated from reading UI file 'addmusicwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMUSICWIDGET_H
#define UI_ADDMUSICWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddMusicWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_noTitle;
    QLineEdit *lineEdit_title;
    QLabel *label_2;
    QLabel *label_noPath;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_musicPath;
    QPushButton *pushButton_openFileDialog;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_confirm;

    void setupUi(QWidget *AddMusicWidget)
    {
        if (AddMusicWidget->objectName().isEmpty())
            AddMusicWidget->setObjectName(QStringLiteral("AddMusicWidget"));
        AddMusicWidget->resize(400, 220);
        AddMusicWidget->setMinimumSize(QSize(300, 180));
        AddMusicWidget->setMaximumSize(QSize(500, 250));
        verticalLayout = new QVBoxLayout(AddMusicWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(AddMusicWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_noTitle = new QLabel(AddMusicWidget);
        label_noTitle->setObjectName(QStringLiteral("label_noTitle"));

        verticalLayout->addWidget(label_noTitle);

        lineEdit_title = new QLineEdit(AddMusicWidget);
        lineEdit_title->setObjectName(QStringLiteral("lineEdit_title"));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(10);
        lineEdit_title->setFont(font);

        verticalLayout->addWidget(lineEdit_title);

        label_2 = new QLabel(AddMusicWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label_noPath = new QLabel(AddMusicWidget);
        label_noPath->setObjectName(QStringLiteral("label_noPath"));

        verticalLayout->addWidget(label_noPath);

        frame = new QFrame(AddMusicWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_musicPath = new QLineEdit(frame);
        lineEdit_musicPath->setObjectName(QStringLiteral("lineEdit_musicPath"));
        lineEdit_musicPath->setFont(font);

        horizontalLayout->addWidget(lineEdit_musicPath);

        pushButton_openFileDialog = new QPushButton(frame);
        pushButton_openFileDialog->setObjectName(QStringLiteral("pushButton_openFileDialog"));
        pushButton_openFileDialog->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(225, 225, 225);\n"
"    border-style: outset;\n"
"    border-width: 0px;\n"
"    border-radius: 12px;\n"
"    border-color: beige;\n"
"	font: 10pt \"Consolas\";\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(0, 170, 255);\n"
"	border-color: rgb(0, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"	background-color: rgb(0, 129, 193);\n"
"    border-style: inset;\n"
"}"));

        horizontalLayout->addWidget(pushButton_openFileDialog);


        verticalLayout->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_confirm = new QPushButton(AddMusicWidget);
        pushButton_confirm->setObjectName(QStringLiteral("pushButton_confirm"));
        pushButton_confirm->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(173, 173, 173);\n"
"	border-radius: 12px;\n"
"	font: 10pt \"Consolas\";\n"
"	border-width: 2px;\n"
"	padding: 2px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(1, 132, 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgb(1, 132, 200);\n"
"}"));

        verticalLayout->addWidget(pushButton_confirm);


        retranslateUi(AddMusicWidget);

        QMetaObject::connectSlotsByName(AddMusicWidget);
    } // setupUi

    void retranslateUi(QWidget *AddMusicWidget)
    {
        AddMusicWidget->setWindowTitle(QApplication::translate("AddMusicWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AddMusicWidget", "Title", Q_NULLPTR));
        label_noTitle->setText(QApplication::translate("AddMusicWidget", "Title cannot be none!", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddMusicWidget", "Music Path", Q_NULLPTR));
        label_noPath->setText(QApplication::translate("AddMusicWidget", "music path cannot be none!", Q_NULLPTR));
        pushButton_openFileDialog->setText(QApplication::translate("AddMusicWidget", "Open Directionary", Q_NULLPTR));
        pushButton_confirm->setText(QApplication::translate("AddMusicWidget", "Confirm", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddMusicWidget: public Ui_AddMusicWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMUSICWIDGET_H
