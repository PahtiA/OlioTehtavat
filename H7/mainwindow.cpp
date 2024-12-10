#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btnCount, &QPushButton::clicked, this, MainWindow::onCountClicked);
    connect(ui->btnReset, &QPushButton::clicked, this, MainWindow::onResetClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
    //connect(object1, SIGNAL(signaali-funktio), object2, SLOT(slot-funktio) );
    connect(ui->btnCount, SIGNAL(QPushButton::clicked), this, SLOT(on_btnReset_clicked) );
}

void MainWindow::on_btnCount_clicked()
{
    qDebug()<<"klikkasit buttonia 1";
}

void MainWindow::on_btnReset_clicked()
{
    qDebug()<<"klikkasit buttonia 2";
}

void MainWindow::onCountClicked() {
    counter++;

    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelInfo->setText("Painiketta painettu " + s + " kertaa");
}

void MainWindow::onResetClicked() {
    counter = 0;


    QString s = QString::number(counter);
    ui->txtResult->setText(s); // Päivitä lineEdit
    ui->labelInfo->setText("Painiketta painettu " + s + " kertaa");
}

