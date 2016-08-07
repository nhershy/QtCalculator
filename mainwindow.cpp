#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

using namespace std;

QString num1 = "";
QString num2 = "";
bool num1exists = false;
int operate = 0;


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

//1
void MainWindow::on_pushButton_7_clicked()
{
    if (!num1exists)
    {
        num1 = num1 + '1';
        ui->textEdit->setText(num1);
    }
    else
    {
        num2 = num2 + '1';
        ui->textEdit->setText(num2);
    }
}

//2
void MainWindow::on_pushButton_8_clicked()
{
    if (!num1exists)
    {
        num1 = num1 + '2';
        ui->textEdit->setText(num1);
    }
    else
    {
        num2 = num2 + '2';
        ui->textEdit->setText(num2);
    }
}

//3
void MainWindow::on_pushButton_9_clicked()
{
    if (!num1exists)
    {
        num1 = num1 + '3';
        ui->textEdit->setText(num1);
    }
    else
    {
        num2 = num2 + '3';
        ui->textEdit->setText(num2);
    }
}

//4
void MainWindow::on_pushButton_4_clicked()
{
    if (!num1exists)
    {
        num1 = num1 + '4';
        ui->textEdit->setText(num1);
    }
    else
    {
        num2 = num2 + '4';
        ui->textEdit->setText(num2);
    }
}

//5
void MainWindow::on_pushButton_5_clicked()
{
    if (!num1exists)
    {
        num1 = num1 + '5';
        ui->textEdit->setText(num1);
    }
    else
    {
        num2 = num2 + '5';
        ui->textEdit->setText(num2);
    }
}

//6
void MainWindow::on_pushButton_6_clicked()
{
    if (!num1exists)
    {
        num1 = num1 + '6';
        ui->textEdit->setText(num1);
    }
    else
    {
        num2 = num2 + '6';
        ui->textEdit->setText(num2);
    }
}


//7
void MainWindow::on_pushButton_clicked()
{
    if (!num1exists)
    {
        num1 = num1 + '7';
        ui->textEdit->setText(num1);
    }
    else
    {
        num2 = num2 + '7';
        ui->textEdit->setText(num2);
    }
}

//8
void MainWindow::on_pushButton_2_clicked()
{
    if (!num1exists)
    {
        num1 = num1 + '8';
        ui->textEdit->setText(num1);
    }
    else
    {
        num2 = num2 + '8';
        ui->textEdit->setText(num2);
    }
}


//9
void MainWindow::on_pushButton_3_clicked()
{
    if (!num1exists)
    {
        num1 = num1 + '9';
        ui->textEdit->setText(num1);
    }
    else
    {
        num2 = num2 + '9';
        ui->textEdit->setText(num2);
    }
}


//0
void MainWindow::on_pushButton_10_clicked()
{
    if (!num1exists)
    {
        num1 = num1 + '0';
        ui->textEdit->setText(num1);
    }
    else
    {
        num2 = num2 + '0';
        ui->textEdit->setText(num2);
    }
}

//+
void MainWindow::on_pushButton_13_clicked()
{
    num1exists = true;
    operate = 1;
}

//-
void MainWindow::on_pushButton_14_clicked()
{
    num1exists = true;
    operate = 2;
}

//*
void MainWindow::on_pushButton_15_clicked()
{
    num1exists = true;
    operate = 3;
}

// /
void MainWindow::on_pushButton_16_clicked()
{
    num1exists = true;
    operate = 4;
}

//=
void MainWindow::on_pushButton_12_clicked()
{
    double result;
    if (operate == 1)
    {
        result = (num1.toDouble() + num2.toDouble());
        ui->textEdit->setText(QString::number(result));
    }
    if (operate == 2)
    {
        result = (num1.toDouble() - num2.toDouble());
        ui->textEdit->setText(QString::number(result));
    }
    if (operate == 3)
    {
        result = (num1.toDouble() * num2.toDouble());
        ui->textEdit->setText(QString::number(result));
    }
    if (operate == 4)
    {
        result = (num1.toDouble() / num2.toDouble());
        ui->textEdit->setText(QString::number(result));
    }
    num1 = "";
    num2 = "";
    num1exists = false;
    operate = 0;
}



void MainWindow::on_pushButton_11_clicked()
{
    num1 = "";
    num2 = "";
    num1exists = false;
    operate = 0;
    ui->textEdit->setText("");
}

//.
void MainWindow::on_pushButton_17_clicked()
{
    if (!num1exists)
    {
        num1 = num1 + '.';
        ui->textEdit->setText(num1);
    }
    else
    {
        num2 = num2 + '.';
        ui->textEdit->setText(num2);
    }
}
