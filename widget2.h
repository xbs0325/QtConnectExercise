#ifndef WIDGET2_H
#define WIDGET2_H

#include <QWidget>
#include <QLabel>

class widget2 : public QWidget
{
    Q_OBJECT
public:
    explicit widget2(QWidget *parent = nullptr);

signals:

public slots:
    void slot_widget2();
};

#endif // WIDGET2_H
