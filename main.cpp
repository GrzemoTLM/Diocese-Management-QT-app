#include "mainwindow.h"
#include "tdiocese.h"
#include "tparish.h"
#include "tpriest.h"
#include "tshop.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QString>

int main(int argc, char *argv[])
{
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

    TDiocese D1("St Pius X", 29000,1,0,10000);

    MainWindow w;
    w.show();
    return a.exec();
}
