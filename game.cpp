#include "game.h"
#include "QDebug"
Game::Game(QObject* parent): QObject(parent)
{

}

void Game::doSomething(){
    qDebug() << "test" ;
}
