#include "infodialog.h"
#include "ui_infodialog.h"
#include<QAbstractButton>
#include<QDebug>

infodialog::infodialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infodialog)
{
    ui->setupUi(this);
}

infodialog::~infodialog()
{
    delete ui;
}

void infodialog::on_buttonBox_clicked(QAbstractButton *button)
{
    QDialogButtonBox::StandardButton stdButton=ui->buttonBox->standardButton(button);
    if(stdButton==QDialogButtonBox::Ok)
    {
        accept();
        qDebug()<<"Ok button is clicked";
    }
    if(stdButton==QDialogButtonBox::Save)
    {
        qDebug()<<"Save button is clicked";
    }
    if(stdButton==QDialogButtonBox::SaveAll)
    {
        qDebug()<<"SaveAll button is clicked";
    }
    if(stdButton==QDialogButtonBox::No)
    {
        qDebug()<<"No button is clicked";
    }
    if(stdButton==QDialogButtonBox::NoToAll)
    {
        qDebug()<<"NoToAll button is clicked";
    }
    if(stdButton==QDialogButtonBox::Open)
    {
        qDebug()<<"Open button is clicked";
    }
    if(stdButton==QDialogButtonBox::Cancel)
    {
        reject();
        qDebug()<<"Cancel button is clicked";
    }
}
