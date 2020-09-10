/********************************************************************************
** Form generated from reading UI file 'hotkeys.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTKEYS_H
#define UI_HOTKEYS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HotKeys
{
public:
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
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

    void setupUi(QWidget *HotKeys)
    {
        if (HotKeys->objectName().isEmpty())
            HotKeys->setObjectName(QStringLiteral("HotKeys"));
        HotKeys->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/MusicIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HotKeys->setWindowIcon(icon);
        horizontalLayout_4 = new QHBoxLayout(HotKeys);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        widget_4 = new QWidget(HotKeys);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        verticalLayout = new QVBoxLayout(widget_4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(widget_4);
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


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_4);
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


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEdit_3 = new QLineEdit(widget_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);


        verticalLayout->addWidget(widget_3);


        horizontalLayout_4->addWidget(widget_4);


        retranslateUi(HotKeys);

        QMetaObject::connectSlotsByName(HotKeys);
    } // setupUi

    void retranslateUi(QWidget *HotKeys)
    {
        HotKeys->setWindowTitle(QApplication::translate("HotKeys", "Form", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("HotKeys", "Space", Q_NULLPTR));
        label->setText(QApplication::translate("HotKeys", "Pause/Resume Musiuc", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("HotKeys", "Left Arrow", Q_NULLPTR));
        label_2->setText(QApplication::translate("HotKeys", "Previous Music", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("HotKeys", "Right Arrow", Q_NULLPTR));
        label_3->setText(QApplication::translate("HotKeys", "Next Music", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HotKeys: public Ui_HotKeys {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTKEYS_H
