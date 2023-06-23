#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "tdiocese.h"
#include "newwindow.h"
#include <QtMultimedia>
#include <QAudio>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void setDiocese(TDiocese* diocese);
    NewWindow newWindow;
    ~MainWindow();

private slots:


    void on_buttonBegin_clicked();

    void on_radioButton_clicked();

    void on_radioButton_released();

    void on_radioButton_clicked(bool checked);

private:
    Ui::MainWindow *ui;
    TDiocese* m_diocese;
    QMediaPlayer *Player;
    QAudioOutput *audioOutput;

};
#endif // MAINWINDOW_H
