#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    Game *game = new Game(this);
    newGame = game;
    ui->setupUi(this);
    connect(ui->pushButton1, &QPushButton::clicked, this, &MainWindow::informGame);


}



void MainWindow::informGame(){
    newGame->changeText();
}

MainWindow::~MainWindow()
{
    delete ui;
}






