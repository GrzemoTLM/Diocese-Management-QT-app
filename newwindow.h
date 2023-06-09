#ifndef NEWWINDOW_H
#define NEWWINDOW_H
#include "tshop.h"
#include <vector>
#include <QMainWindow>
#include "tdiocese.h"
namespace Ui {
class NewWindow;
}

class NewWindow : public QMainWindow
{
    Q_OBJECT

public:
     explicit NewWindow(QWidget *parent = nullptr);
    void setDiocese(TDiocese* diocese);
    ~NewWindow();

private:
    Ui::NewWindow *ui;
    TDiocese* mdiocese;


};

#endif // NEWWINDOW_H
