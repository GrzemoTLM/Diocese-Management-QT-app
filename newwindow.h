#ifndef NEWWINDOW_H
#define NEWWINDOW_H
#include "tshop.h"
#include <vector>
#include <QMainWindow>

namespace Ui {
class NewWindow;
}

class NewWindow : public QMainWindow
{
    Q_OBJECT

public:
     explicit NewWindow(QWidget *parent = nullptr);
    ~NewWindow();

private:
    Ui::NewWindow *ui;
    std::vector<TShop> shopItems;
};

#endif // NEWWINDOW_H
