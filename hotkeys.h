#ifndef HOTKEYS_H
#define HOTKEYS_H

#include <QWidget>

namespace Ui {
class HotKeys;
}

class HotKeys : public QWidget
{
    Q_OBJECT
    
public:
    explicit HotKeys(QWidget *parent = nullptr);
    ~HotKeys();
    
private:
    Ui::HotKeys *ui;
};

#endif // HOTKEYS_H
