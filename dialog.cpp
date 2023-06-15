#include "dialog.h"
#include "ui_dialog.h"
#include <QFile>

Dialog::Dialog(const QString& fileName, QWidget* parent) :
    QDialog(parent),
    ui(new Ui::Dialog),
    NameFile(fileName)
{
    ui->setupUi(this);

    // Tutaj możesz użyć wartości fileName do odpowiednich operacji
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_buttonBox_accepted()
{
    // Pobierz wartości tekstowe z QLineEdit
    QString name = ui->lineEditName->text();
    QString surname = ui->lineEditSurename->text();
    QString role = ui->lineEditRole->text();

    // Otwórz plik w trybie zapisu
    QFile file(NameFile);
    if (file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
    {
        // Utwórz strumień tekstowy dla pliku
        QTextStream stream(&file);

        // Zapisz dane w formacie "imie,nazwisko,rola"
        stream << name << "," << surname << "," << role << Qt::endl;

        // Zamknij plik
        file.close();
    }
    else
    {
        // Obsłuż błąd, jeśli nie udało się otworzyć pliku
        qDebug() << "Błąd otwarcia pliku!";
    }

    // Zamykanie okna dialogowego
    accept();
}

void Dialog::on_buttonBox_rejected()
{
    this->close();
}

