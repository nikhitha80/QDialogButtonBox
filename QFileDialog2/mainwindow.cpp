#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
/* Open an existing directory
 QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                  "C://",
                                                  QFileDialog::ShowDirsOnly
                                                  | QFileDialog::DontResolveSymlinks);
 qDebug()<<"Your chosen directory is: "<<dir;
*/
/* To open a file
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "/home",
                                                    tr("Images (*.png *.xpm *.jpg)"));
    qDebug()<<"Your chosen file is: "<<fileName;
*/
/* To choose multiple files
    QStringList files = QFileDialog::getOpenFileNames(
                            this,
                            "Select one or more files to open",
                            "/home",
                            "Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)");
    qDebug()<<"Your chosen files are: "<<files;
*/
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                               "/home/jana/untitled.png",
                               tr("Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)"));

    qDebug()<<"Your chosen saved Files are: "<<fileName;
}
