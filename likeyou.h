#ifndef LIKEYOU_H
#define LIKEYOU_H

#include <QObject>
#include <QDebug>

class likeYou : public QObject
{
    Q_OBJECT
public:
    explicit likeYou(QObject *parent = nullptr);
public slots:
    void print();
signals:
    void isFalse();
};

#endif // LIKEYOU_H
