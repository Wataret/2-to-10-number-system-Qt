#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_result->setVisible(false);
    ui->label_2->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_result_clicked()
{
    bool flag;
    long int n;
    QString str1;
    str1.append(ui->lineEdit_count->text());
    n=str1.toInt(&flag, 2);
    for (int i = 0; i < str1.length(); i++)
    {
        if (!flag)
        {
            ui->label_result->setVisible(false);
            ui->label_2->setVisible(false);
            ui->label->setText("Должно быть введено число двоичной системы счисления:");

        }
        else
        {
            ui->label->setText("Введите число:");
            ui->label_2->setVisible(true);
            ui->label_result->setVisible(true);
            ui->label_result->setText(QString::number(n, 10));

        }
    }
}
