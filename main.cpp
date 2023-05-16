#include "widget.h"
#include "widget2.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget* w = new Widget;
    w->show();
    widget2* w2 = new widget2;
    QObject::connect(w,&Widget::signal_widget2,w2,&widget2::slot_widget2);
    return a.exec();
}
