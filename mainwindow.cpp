#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    game = new Game(this);

    ui->setupUi(this);
    connect(ui->pushButton1, &QPushButton::clicked, this, &MainWindow::changePicture1_1);
    connect(ui->pushButton2, &QPushButton::clicked, this, &MainWindow::changePicture2_1);

    connect(ui->pushButton3, &QPushButton::clicked, this, &MainWindow::changePicture3_1);
    connect(ui->pushButton4, &QPushButton::clicked, this, &MainWindow::changePicture4_1);
    connect(ui->pushButton5, &QPushButton::clicked, this, &MainWindow::changePicture5_1);
    connect(ui->pushButton6, &QPushButton::clicked, this, &MainWindow::changePicture6_1);


    connect(game, &Game::informPicture1, this, &MainWindow::changePicture1_2 );
    connect(game, &Game::informPicture2, this, &MainWindow::changePicture2_2 );
    connect(game, &Game::informPicture3, this, &MainWindow::changePicture3_2 );
    connect(game, &Game::informPicture4, this, &MainWindow::changePicture4_2 );
    connect(game, &Game::informPicture5, this, &MainWindow::changePicture5_2 );
    connect(game, &Game::informPicture6, this, &MainWindow::changePicture6_2 );

    connect(game, &Game::informButton, this, &MainWindow::disableButton);


}


void MainWindow::changePicture1_1(){                    //Pushbutton1
   ui->picture1->setPixmap(QPixmap(QString::fromUtf8(":/circle.png")));
   emit game->inform(0);

   //emit game->informButton(0);


}
void MainWindow::changePicture1_2(){
   ui->picture1->setPixmap(QPixmap(QString::fromUtf8(":/questionmark.png")));
}


void MainWindow::changePicture2_1(){                //Pushbutton2
   ui->picture2->setPixmap(QPixmap(QString::fromUtf8(":/rectangle.png")));
   emit game->inform(1);
     // emit game->informButton(1);
}
void MainWindow::changePicture2_2(){
   ui->picture2->setPixmap(QPixmap(QString::fromUtf8(":/questionmark.png")));
}


void MainWindow::changePicture3_1(){                    //Pushbutton3
   ui->picture3->setPixmap(QPixmap(QString::fromUtf8(":/circle.png")));
   emit game->inform(2);
      //emit game->informButton(2);

}
void MainWindow::changePicture3_2(){
   ui->picture3->setPixmap(QPixmap(QString::fromUtf8(":/questionmark.png")));
}


void MainWindow::changePicture4_1(){                    //Pushbutton4
   ui->picture4->setPixmap(QPixmap(QString::fromUtf8(":/triangle.png")));
   emit game->inform(3);
      //emit game->informButton(3);
}
void MainWindow::changePicture4_2(){
   ui->picture4->setPixmap(QPixmap(QString::fromUtf8(":/questionmark.png")));
}


void MainWindow::changePicture5_1(){                    //Pushbutton5
   ui->picture5->setPixmap(QPixmap(QString::fromUtf8(":/rectangle.png")));
   emit game->inform(4);
      //emit game->informButton(4);
}
void MainWindow::changePicture5_2(){
   ui->picture5->setPixmap(QPixmap(QString::fromUtf8(":/questionmark.png")));
}


void MainWindow::changePicture6_1(){                    //Pushbutton6
   ui->picture6->setPixmap(QPixmap(QString::fromUtf8(":/triangle.png")));
   emit game->inform(5);
      //emit game->informButton(5);
}
void MainWindow::changePicture6_2(){
   ui->picture6->setPixmap(QPixmap(QString::fromUtf8(":/questionmark.png")));
}

void MainWindow::disableButton(int index){
    switch(index){
    case 0:
        ui->pushButton1->setDisabled(true);
        break;
    case 1:
        ui->pushButton2->setDisabled(true);
        break;
    case 2:
        ui->pushButton3->setDisabled(true);
        break;
    case 3:
        ui->pushButton4->setDisabled(true);
        break;
    case 4:
        ui->pushButton5->setDisabled(true);
        break;
    case 5:
        ui->pushButton6->setDisabled(true);
        break;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}






