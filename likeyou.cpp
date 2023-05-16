#include "likeyou.h"

likeYou::likeYou(QObject *parent)
    : QObject{parent}
{

}

void likeYou::print()
{
    qDebug() <<"我也喜欢你";
}


