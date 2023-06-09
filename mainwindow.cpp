#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tdiocese.h"
#include "newwindow.h"
#include "tshop.h"
#include <QPixmap>
#include <string>
#include <QtMultimedia>
#include <QSoundEffect>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    ui->welcomelabel->setText("Laudetur Iesus Christus!");
    ui->welcomelabel->setStyleSheet("font-size: 48px; font-family: Impact;");
    QPixmap obrazek1(":/new/prefix1/pictrues/Piesel.jpg");
    ui->welcomelabel2->setPixmap(obrazek1.scaled(ui->welcomelabel2->size(),Qt::KeepAspectRatio, Qt::SmoothTransformation));
    connect(ui->radioButton, &QRadioButton::clicked, this, &MainWindow::on_radioButton_clicked);
}
void MainWindow::setDiocese(TDiocese* diocese)
{
    m_diocese = diocese; // Ustawienie wskaźnika na obiekt TDiocese
    if (m_diocese)
    {
        std::string dioceseName = m_diocese->getDioceseName();
        ui->welcomelabel3->setText(QString::fromStdString(dioceseName));
        ui->welcomelabel3->setStyleSheet("font-size: 24px; font-family: Impact;");

    }
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonBegin_clicked()
{
   newWindow.show();
}


void MainWindow::on_radioButton_clicked()
{
   QMediaPlayer* player = new QMediaPlayer();
   QUrl url = QUrl("qrc:/music/chants.mp3");
   player->setSource(url);
   player->play();

}




