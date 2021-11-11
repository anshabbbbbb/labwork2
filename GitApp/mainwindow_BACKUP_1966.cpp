#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menuBar(this);
<<<<<<< HEAD
    ui->statusBar("My name is Anna! Hop Hey!");
=======
>>>>>>> d9d44b271a330bd8009a039a85a9f33e416a157a
}

MainWindow::~MainWindow()
{
    ui->mainToolBar(this);
<<<<<<< HEAD
    ui->statusBar("I learning use git! La La Ley!");
=======
>>>>>>> d9d44b271a330bd8009a039a85a9f33e416a157a
    delete ui;
}
