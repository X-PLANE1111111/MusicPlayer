/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_setting;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBox_isCopyFile;
    QWidget *tab_hotKeys;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QLabel *label;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_OK;
    QPushButton *pushButton_apply;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(400, 300);
        tabWidget = new QTabWidget(Settings);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 381, 231));
        tab_setting = new QWidget();
        tab_setting->setObjectName(QStringLiteral("tab_setting"));
        verticalLayout_4 = new QVBoxLayout(tab_setting);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        checkBox_isCopyFile = new QCheckBox(tab_setting);
        checkBox_isCopyFile->setObjectName(QStringLiteral("checkBox_isCopyFile"));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        checkBox_isCopyFile->setFont(font);

        verticalLayout_4->addWidget(checkBox_isCopyFile);

        tabWidget->addTab(tab_setting, QString());
        tab_hotKeys = new QWidget();
        tab_hotKeys->setObjectName(QStringLiteral("tab_hotKeys"));
        verticalLayout_2 = new QVBoxLayout(tab_hotKeys);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(tab_hotKeys);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);


        verticalLayout_2->addWidget(widget);

        widget_2 = new QWidget(tab_hotKeys);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_2);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(tab_hotKeys);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEdit_3 = new QLineEdit(widget_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);


        verticalLayout_2->addWidget(widget_3);

        tabWidget->addTab(tab_hotKeys, QString());
        pushButton_cancel = new QPushButton(Settings);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(240, 270, 75, 23));
        pushButton_OK = new QPushButton(Settings);
        pushButton_OK->setObjectName(QStringLiteral("pushButton_OK"));
        pushButton_OK->setGeometry(QRect(160, 270, 75, 23));
        pushButton_apply = new QPushButton(Settings);
        pushButton_apply->setObjectName(QStringLiteral("pushButton_apply"));
        pushButton_apply->setGeometry(QRect(320, 270, 75, 23));

        retranslateUi(Settings);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkBox_isCopyFile->setToolTip(QApplication::translate("Settings", "So even though you changed your music directionary, you can still play it without any issues", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkBox_isCopyFile->setText(QApplication::translate("Settings", "Backup Music", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_setting), QApplication::translate("Settings", "Settings", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("Settings", "Space", Q_NULLPTR));
        label->setText(QApplication::translate("Settings", "Pause/Resume Musiuc", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("Settings", "Left Arrow", Q_NULLPTR));
        label_2->setText(QApplication::translate("Settings", "Previous Music", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("Settings", "Right Arrow", Q_NULLPTR));
        label_3->setText(QApplication::translate("Settings", "Next Music", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_hotKeys), QApplication::translate("Settings", "Hot Keys", Q_NULLPTR));
        pushButton_cancel->setText(QApplication::translate("Settings", "Cancel", Q_NULLPTR));
        pushButton_OK->setText(QApplication::translate("Settings", "OK", Q_NULLPTR));
        pushButton_apply->setText(QApplication::translate("Settings", "Apply", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
