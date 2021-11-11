#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menuBar(this);
    ui->statusBar("Hop Hey!");
}

MainWindow::~MainWindow()
{
    ui->mainToolBar(this);
    ui->statusBar("La La Ley!");
    delete ui;
}
