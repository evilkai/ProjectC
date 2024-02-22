#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "prophile.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString inputLogin = ui->input_login->text();
    QString inputPassword = ui->input_password->text();
    if(inputLogin == "anapa" && inputPassword == "2007"){
    hide();
    form = new Form;
    form->show();
    form->setFixedSize(300, 400);


    }
}
