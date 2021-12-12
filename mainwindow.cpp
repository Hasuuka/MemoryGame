#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    connect(ui->pushButton1, &QPushButton::clicked, this, &MainWindow::changePicture1_1);
    connect(ui->pushButton2, &QPushButton::clicked, this, &MainWindow::changePicture2_1);
    connect(ui->pushButton3, &QPushButton::clicked, this, &MainWindow::changePicture3_1);
    connect(ui->pushButton4, &QPushButton::clicked, this, &MainWindow::changePicture4_1);
    connect(ui->pushButton5, &QPushButton::clicked, this, &MainWindow::changePicture5_1);
    connect(ui->pushButton6, &QPushButton::clicked, this, &MainWindow::changePicture6_1);

}


void MainWindow::changePicture1_1(){
   ui->picture1->setPixmap(QPixmap(QString::fromUtf8(":/circle.png")));
   connect(ui->pushButton1, &QPushButton::clicked, this, &MainWindow::changePicture1_2);
}
void MainWindow::changePicture1_2(){
   ui->picture1->setPixmap(QPixmap(QString::fromUtf8(":/questionmark.png")));
   connect(ui->pushButton1, &QPushButton::clicked, this, &MainWindow::changePicture1_1);
}


void MainWindow::changePicture2_1(){
   ui->picture2->setPixmap(QPixmap(QString::fromUtf8(":/rectangle.png")));
   connect(ui->pushButton2, &QPushButton::clicked, this, &MainWindow::changePicture2_2);
}
void MainWindow::changePicture2_2(){
   ui->picture2->setPixmap(QPixmap(QString::fromUtf8(":/questionmark.png")));
   connect(ui->pushButton2, &QPushButton::clicked, this, &MainWindow::changePicture2_1);
}


void MainWindow::changePicture3_1(){
   ui->picture3->setPixmap(QPixmap(QString::fromUtf8(":/circle.png")));
   connect(ui->pushButton3, &QPushButton::clicked, this, &MainWindow::changePicture3_2);
}
void MainWindow::changePicture3_2(){
   ui->picture3->setPixmap(QPixmap(QString::fromUtf8(":/questionmark.png")));
   connect(ui->pushButton3, &QPushButton::clicked, this, &MainWindow::changePicture3_1);
}


void MainWindow::changePicture4_1(){
   ui->picture4->setPixmap(QPixmap(QString::fromUtf8(":/triangle.png")));
   connect(ui->pushButton4, &QPushButton::clicked, this, &MainWindow::changePicture4_2);
}
void MainWindow::changePicture4_2(){
   ui->picture4->setPixmap(QPixmap(QString::fromUtf8(":/questionmark.png")));
   connect(ui->pushButton4, &QPushButton::clicked, this, &MainWindow::changePicture4_1);
}


void MainWindow::changePicture5_1(){
   ui->picture5->setPixmap(QPixmap(QString::fromUtf8(":/rectangle.png")));
   connect(ui->pushButton5, &QPushButton::clicked, this, &MainWindow::changePicture5_2);
}
void MainWindow::changePicture5_2(){
   ui->picture5->setPixmap(QPixmap(QString::fromUtf8(":/questionmark.png")));
   connect(ui->pushButton5, &QPushButton::clicked, this, &MainWindow::changePicture5_1);
}


void MainWindow::changePicture6_1(){
   ui->picture6->setPixmap(QPixmap(QString::fromUtf8(":/triangle.png")));
   connect(ui->pushButton6, &QPushButton::clicked, this, &MainWindow::changePicture6_2);
}
void MainWindow::changePicture6_2(){
   ui->picture6->setPixmap(QPixmap(QString::fromUtf8(":/questionmark.png")));
   connect(ui->pushButton6, &QPushButton::clicked, this, &MainWindow::changePicture6_1);
}

MainWindow::~MainWindow()
{
    delete ui;
}






