#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "environment.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void log(const QString message);

private slots:
    void on_actionRun_triggered();

    void on_actionAdd_living_beeing_triggered();

private:
    Ui::MainWindow *ui;
    environment *env;
};

#endif // MAINWINDOW_H
