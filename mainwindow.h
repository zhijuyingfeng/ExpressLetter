#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QApplication>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_agree_clicked();

    void on_disagree_clicked();

    void on_quit_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
