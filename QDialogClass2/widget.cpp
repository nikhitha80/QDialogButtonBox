#include "widget.h"
#include "ui_widget.h"
#include<infodialog.h>
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

void Widget::on_ProvideInfopushButton_clicked()
{
    infoDialog *dialog=new infoDialog(this);
/* Modal
    int ret=dialog->exec();
    if(ret==QDialog::Accepted)
    {
        QString position=dialog->getPosition();
        QString Os=dialog->getFavouriteOS();
        qDebug()<<"Dialog is Accepted, position is"<<position<<"and my favourite OS is"<<Os;
        ui->Infolabel->setText("your position is:"+position+"and your favourite OS is:"+Os);
    }
*/
    connect(dialog,&infoDialog::accepted,[=](){
        QString position=dialog->getPosition();
        QString Os=dialog->getFavouriteOS();
        qDebug()<<"Dialog is Accepted, position is"<<position<<"and my favourite OS is"<<Os;
        ui->Infolabel->setText("your position is:"+position+"and your favourite OS is:"+Os);
    });
    connect(dialog,&infoDialog::rejected,[=](){
        QString position=dialog->getPosition();
        QString Os=dialog->getFavouriteOS();
        qDebug()<<"Dialog is Accepted, position is"<<position<<"and my favourite OS is"<<Os;
        ui->Infolabel->setText("your position is:"+position+" and your favourite OS is:"+Os);
    });
    dialog->show();
    dialog->raise();
    dialog->activateWindow();

}
