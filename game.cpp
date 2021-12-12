#include "game.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"

Game::Game(QWidget* parent): QObject(parent)
{

}

void Game::changeText(){
    ui->responseLabel->setText("yo dawg");
}
