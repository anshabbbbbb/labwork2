#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menuBar(this);
<<<<<<< HEAD
    ui->statusBar("My name is Anna!");
=======
    ui->statusBar("Hop Hey!");
>>>>>>> refs/heads/pony
}

MainWindow::~MainWindow()
{
    ui->mainToolBar(this);
<<<<<<< HEAD
    ui->statusBar("I learning use git!");
=======
    ui->statusBar("La La Ley!");
>>>>>>> refs/heads/pony
    delete ui;
}
