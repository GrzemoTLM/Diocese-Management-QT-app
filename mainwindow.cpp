#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tdiocese.h"
#include "newwindow.h"
#include "tshop.h"
#include <QPixmap>
#include <string>
#include <QtMultimedia>
#include <QSoundEffect>
#include <QFont>
#include <QGraphicsDropShadowEffect>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    ui->welcomelabel->setText("Laudetur Iesus Christus!");
    ui->welcomelabel_2->setText("Laudetur Iesus Christus!");
    ui->welcomelabel->setStyleSheet("font-size: 48px;");
    ui->welcomelabel_2->setStyleSheet("font-size: 48px;");
    QPixmap obrazek1(":/new/prefix1/pictrues/Piesel.jpg");
    QPixmap obrazek2(":/new/prefix1/pictrues/note.png");
    QPixmap background(":/new/prefix1/pictrues/back3.jpg");
    QPalette palette;
    palette.setBrush(QPalette::Window, background.scaled(this->size(), Qt::IgnoreAspectRatio));
    this->setPalette(palette);

    int fontId2 = QFontDatabase::addApplicationFont(":/new/prefix1/fonts/Seagram tfb.ttf");

        QString fontName = QFontDatabase::applicationFontFamilies(fontId2).at(0);
        QFont fontOutline(fontName,48,QFont::Bold);
        fontOutline.setStyleStrategy(QFont::PreferOutline);
        fontOutline.setPointSize(48);

        QFont fontInline(fontName,48,QFont::Bold);
        fontInline.setPointSize(48);

    ui->welcomelabel->setStyleSheet("QLabel { color: black; }");
   ui->welcomelabel->setFont(fontInline);
   ui->welcomelabel_2->setStyleSheet("QLabel { color: white; }");
    ui->welcomelabel_2->setFont(fontOutline);
   // ui->welcomelabel_2->move(ui->welcomelabel->pos()+QPoint(3,3));
    QGraphicsDropShadowEffect *shadowEffect = new QGraphicsDropShadowEffect;
    shadowEffect->setBlurRadius(0);
    shadowEffect->setColor(Qt::black);
    shadowEffect->setOffset(3, 3);
    ui->welcomelabel_2->setGraphicsEffect(shadowEffect);
    ui->LabelNote->setPixmap(obrazek2.scaled(ui->LabelNote->size(),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->welcomelabel2->setPixmap(obrazek1.scaled(ui->welcomelabel2->size(),Qt::KeepAspectRatio, Qt::SmoothTransformation));
    Player= new QMediaPlayer;
    audioOutput = new QAudioOutput;
    QUrl url = QUrl("qrc:/music/chants.mp3");
    Player->setSource(url);
    Player->setAudioOutput(audioOutput);
    audioOutput->setVolume(50);
    connect(Player, SIGNAL(positionChanged(qint256)), this, SLOT(positionChanged(qint256)));
}
void MainWindow::setDiocese(TDiocese* diocese)
{
    m_diocese = diocese; // Ustawienie wskaźnika na obiekt TDiocese
    if (m_diocese)
    {
        std::string dioceseName = m_diocese->getDioceseName();
        ui->welcomelabel3->setText(QString::fromStdString(dioceseName));
        ui->welcomelabel3->setStyleSheet("font-size: 24px;");

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

void MainWindow::on_radioButton_clicked(bool checked)
{
   if(checked==true)
   Player->play();
   else
   Player->pause();
}

