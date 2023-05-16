#include "widget.h"
#include "ui_widget.h"
#include <QLabel>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //likeYou
    likeYou* lk = new likeYou;

    //设置窗口
    setFixedSize(250,100);
    setWindowTitle("你喜欢我么?");

    //按钮一
    btn1 = new QPushButton("是",this);
    btn1->resize(50,25);
    btn1->move(40,30);

    //按纽二
    btn2 = new QPushButton("否",this);
    btn2->resize(50,25);
    btn2->move(150,30);

    connect(btn1,&QPushButton::clicked,this,[=](){
        if(btn1->text() == "是")
            //lk->print();
            emit this->signal_widget2();
        if(btn1->text() == "否")
        {
            btn1->setText("是");
            btn2->setText("否");
        }
    });

    connect(btn2,&QPushButton::clicked,this,[=](){
        if(btn2->text() == "是")
            //lk->print();
            emit this->signal_widget2();
        if(btn2->text() == "否")
        {
            btn2->setText("是");
            btn1->setText("否");
        }
    });


}

Widget::~Widget()
{
    delete ui;
}

