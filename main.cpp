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

int main(int argc, char *argv[])
{
    std::string dioceseName("Diocese of Saint Doggi X");
    TDiocese diocese(dioceseName);
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
// ------------------------------------------------------------

    MainWindow w;
    w.setDiocese(&diocese);
    w.show();
    return a.exec();
}
