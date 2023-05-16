#ifndef UNDERMOUSE_H
#define UNDERMOUSE_H

#include <QObject>

class undermouse : public QObject
{
    Q_OBJECT
public:
    explicit undermouse(QObject *parent = nullptr);

signals:
    void IsUnderMouse();
};

#endif // UNDERMOUSE_H
