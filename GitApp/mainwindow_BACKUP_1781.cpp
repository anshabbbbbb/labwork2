#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menuBar(this);
<<<<<<< HEAD
    ui->statusBar("Hop Hey!");
=======
    ui->statusBar("My name is Anna!");
>>>>>>> 88237c5 (Third commit master branch)
}

MainWindow::~MainWindow()
{
    ui->mainToolBar(this);
<<<<<<< HEAD
    ui->statusBar("La La Ley!");
=======
    ui->statusBar("I learning use git!");
>>>>>>> 88237c5 (Third commit master branch)
    delete ui;
}
