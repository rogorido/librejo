#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("libros.db");

    if (db.open())
        qDebug() << "Abierta";
}
