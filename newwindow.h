#ifndef NEWWINDOW_H
#define NEWWINDOW_H
#include "qdialog.h"
#include "qstackedwidget.h"
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
      void loadPriestsForParishes();
    void addPriestsToList();
    ~NewWindow();

private slots:
    void on_comboBoxShop_currentIndexChanged(int index);

    void loadItemsFromFile(TParish* parish, const QString& fileName);

    void on_ButtonBuy_clicked();

    void updateItemView(int index);

    void on_ButtonAddPriest_clicked();

    void on_accept_clicked();



private:
    Ui::NewWindow *ui;
    TDiocese* mdiocese;
    std::vector<TShop> shopItems;
    QStackedWidget* stackedWidget;
    QDialog dialog;



};

#endif // NEWWINDOW_H
