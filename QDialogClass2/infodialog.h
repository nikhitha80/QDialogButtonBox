#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>

namespace Ui {
class infoDialog;
}

class infoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit infoDialog(QWidget *parent = nullptr);
    ~infoDialog();

    QString getFavouriteOS() const;

    QString getPosition() const;

private slots:
    void on_OKpushButton_clicked();

    void on_CANCELpushButton_clicked();


private:
    QString position;
    QString FavouriteOS;
    Ui::infoDialog *ui;
};

#endif // INFODIALOG_H
