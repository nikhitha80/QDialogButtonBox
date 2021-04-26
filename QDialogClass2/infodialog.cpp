#include "infodialog.h"
#include "ui_infodialog.h"

infoDialog::infoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infoDialog)
{
    ui->setupUi(this);
}

infoDialog::~infoDialog()
{
    delete ui;
}

void infoDialog::on_OKpushButton_clicked()
{
    QString UserPosition=ui->PositionlineEdit->text();
    if(!UserPosition.isEmpty())
    {
        position=UserPosition;
        if(ui->WindowsradioButton->isChecked())
        {
            FavouriteOS="Windows";
        }
        if(ui->MacradioButton->isChecked())
        {
            FavouriteOS="Mac";
        }
        if(ui->LinuxradioButton->isChecked())
        {
            FavouriteOS="Linux";
        }
    }
    accept();
}

void infoDialog::on_CANCELpushButton_clicked()
{
    reject();
}

QString infoDialog::getPosition() const
{
    return position;
}

QString infoDialog::getFavouriteOS() const
{
    return FavouriteOS;
}
