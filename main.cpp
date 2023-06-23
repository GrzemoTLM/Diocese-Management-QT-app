#include "mainwindow.h"
#include "tdiocese.h"
#include "tparish.h"
#include "tpriest.h"
#include "tshop.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QString>
#include <string>
#include <fstream>
#include <QDebug>
#include <QtMultimedia>
#include <QFontDatabase>

int main(int argc, char *argv[])
{
    std::string dioceseName("Diocese of Saint Doggi X");
    TDiocese diocese(dioceseName);
    std::string fileName = ":/new/prefix2/parishes.txt";
    diocese.loadParishesFromFile(fileName);

    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "DioceseManagement_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    int fontId = QFontDatabase::addApplicationFont(":/new/prefix1/fonts/OldLondon.ttf");
    int fontId2 = QFontDatabase::addApplicationFont(":/new/prefix1/fonts/Seagram tfb.ttf");
    if (fontId != -1)
    {
        QString fontName = QFontDatabase::applicationFontFamilies(fontId2).at(0);
        QFont font(fontName);
        a.setFont(font);
    }
    MainWindow w;
    w.show();
    w.setDiocese(&diocese);
    w.newWindow.setDiocese(&diocese);
    w.newWindow.loadPriestsForParishes();
    w.newWindow.addPriestsToList();
    w.show();
    return a.exec();
}
