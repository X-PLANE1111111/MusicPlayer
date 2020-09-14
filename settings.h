#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>

namespace Ui {
class Settings;
}

class Settings : public QWidget
{
    Q_OBJECT
    
public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();
    
    bool isCopyFile;
    
signals:
    void FinishedSetting();
    
private:
    Ui::Settings *ui;
    
    //init connections
    void InitConnect();
    
    //when click apply
    void ChangeSettings();
};

#endif // SETTINGS_H
