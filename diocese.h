#ifndef DIOCESE_H
#define DIOCESE_H

#include <QDeclarativeItem>
#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>

class DioceseData;

class Diocese
{
    Q_OBJECT
    QML_ELEMENT
public:
    Diocese();
    Diocese(const Diocese &);
    Diocese &operator=(const Diocese &);
    ~Diocese();

private:
    QSharedDataPointer<DioceseData> data;
};

#endif // DIOCESE_H
