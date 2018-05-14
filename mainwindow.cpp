#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    env = new environment();
    ui->setupUi(this);
    QMainWindow::showMaximized();
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
    beeing *b;
    int counter = 0;
    for (std::vector<beeing *>::iterator it = env->beeingVector.begin(); it != env->beeingVector.end(); ++it){
        log(QString::asprintf("%i",counter));
        b = *it;
        log(QString::fromStdString(b->getCode()));
        counter++;
    }

}

void MainWindow::on_actionAdd_living_beeing_triggered()
{
    if (env->addBeeing()){
        log("Living beeing added");
        log(QString::asprintf("Number of beeings:%d\n",env->countBeeings()));
    } else {
        log("Error adding living beeing");
    }
}


