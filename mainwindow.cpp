#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    env = new environment();
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete env;
}

void MainWindow::log(const QString message)
{
    ui->teLog->appendPlainText(message);
}

void MainWindow::on_actionRun_triggered()
{
    log("Run");
}
