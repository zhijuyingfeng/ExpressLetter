#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(this->width(),this->height());
    setWindowFlags(windowFlags() &~ Qt::WindowCloseButtonHint);

    QPixmap bg_0("01.jpg");
    ui->label->setPixmap(bg_0);
    ui->quit->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_agree_clicked()
{
    QPixmap bg_1("02.jpg");
    ui->label->setPixmap(bg_1);
    ui->disagree->hide();
    ui->agree->hide();
    ui->quit->show();
}

void MainWindow::on_disagree_clicked()
{
    ui->disagree->setGeometry(rand()%515,rand()%590,93,28);
}

void MainWindow::on_quit_clicked()
{
    QApplication::quit();
}
