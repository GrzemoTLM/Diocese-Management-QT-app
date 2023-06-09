#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "tdiocese.h"
#include "newwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void setDiocese(TDiocese* diocese);
    ~MainWindow();

private slots:


    void on_buttonBegin_clicked();

private:
    Ui::MainWindow *ui;
    TDiocese* m_diocese;
    NewWindow newWindow;
};
#endif // MAINWINDOW_H
