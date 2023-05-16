#include "widget2.h"

widget2::widget2(QWidget *parent)
    : QWidget{parent}
{

}

void widget2::slot_widget2()
{
    this->resize(100,20);
    QLabel* mylabel = new QLabel(this);
    mylabel->setText("我也喜欢我自己");
    this->show();
}
