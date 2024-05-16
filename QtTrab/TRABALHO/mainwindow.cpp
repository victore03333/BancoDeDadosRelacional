#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "operacoes.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Coronel_clicked()
{
    Operacoes form(nullptr, 1);
    form.exec();
}


void MainWindow::on_Tenente_clicked()
{
    Operacoes form(nullptr, 2);
    form.exec();
}


void MainWindow::on_Soldado_clicked()
{
    Operacoes form(nullptr, 3);
    form.exec();
}


void MainWindow::on_Brigada_clicked()
{
    Operacoes form(nullptr, 4);
    form.exec();
}


void MainWindow::on_Batalhao_clicked()
{
    Operacoes form(nullptr, 5);
    form.exec();
}


void MainWindow::on_Armamento_clicked()
{
    Operacoes form(nullptr, 6);
    form.exec();
}


void MainWindow::on_Missao_clicked()
{
    Operacoes form(nullptr, 7);
    form.exec();
}

