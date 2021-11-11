#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menuBar(this);
    ui->statusBar("My name is Anna! Hop Hey!");
}

MainWindow::~MainWindow()
{
    ui->mainToolBar(this);
    ui->statusBar("I learning use git! La La Ley!");
    delete ui;
}
