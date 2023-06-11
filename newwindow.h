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

private slots:
    void on_comboBoxShop_currentIndexChanged(int index);

    void on_ButtonBuy_clicked();

    void updateItemView(int index);

private:
    Ui::NewWindow *ui;
    TDiocese* mdiocese;


};

#endif // NEWWINDOW_H
