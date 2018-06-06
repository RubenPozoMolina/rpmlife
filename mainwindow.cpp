#include <QDialog>
#include <QInputDialog>
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



void MainWindow::on_actionAdd_beeings_triggered()
{
    bool ok;
    int numberBeeings = QInputDialog::getInt(this,tr("Input dialog"),tr("Number of beeings to add"),1,1,10000,1,&ok);
    if (ok){
        for(int i=0;i<numberBeeings;i++){
            env->addBeeing();
        }
    }
}








