#include "widget.h"
#include "ui_widget.h"
#include "infodialog.h"
#include<QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_showInfoButton_clicked()
{
    infodialog *dialog=new infodialog(this);
    connect(dialog,&infodialog::accepted,[=](){
        qDebug()<<"Dialog Accepted";
    });
    connect(dialog,&infodialog::rejected,[=](){
        qDebug()<<"Dialog rejected";


    });
    dialog->exec();
}
