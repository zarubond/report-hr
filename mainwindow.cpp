#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    if (arg1 == "ondrej" || arg1 == "Ondrej" || arg1 == "ondra" || arg1 == "Ondra") {
        ui->pushButton->setEnabled(false);
    } else {
        ui->pushButton->setEnabled(true);
    }
}
