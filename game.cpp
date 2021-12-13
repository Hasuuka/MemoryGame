#include "game.h"
#include "user.h"
#include "QDebug"

Game::Game(QObject* parent): QObject(parent)
{
    m_user = new User();
    m_cards[0]= new Card(circle, false, m_user);
    m_cards[1]= new Card(rectangle, false, m_user);
    m_cards[2]= new Card(circle, false, m_user);
    m_cards[3]= new Card(triangle, false, m_user);
    m_cards[4]= new Card(rectangle, false, m_user);
    m_cards[5]= new Card(triangle, false, m_user);

    connect(this, &Game::inform, this, &Game::doSomething);

    connect(this, &Game::informPicture1, MainWindow, &MainWindow::changePicture1_2 );
    connect(this, &Game::informPicture2, MainWindow, &MainWindow::changePicture2_2 );
    connect(this, &Game::informPicture3, MainWindow, &MainWindow::changePicture3_2 );
    connect(this, &Game::informPicture4, MainWindow, &MainWindow::changePicture4_2 );
    connect(this, &Game::informPicture5, MainWindow, &MainWindow::changePicture5_2 );
    connect(this, &Game::informPicture6, MainWindow, &MainWindow::changePicture6_2 );

}

void Game::doSomething(int index){
    m_cards[index]->setVisible(true);
    int index2 = 0;
    int cardsOpen = m_user->getCardsOpen();
    cardsOpen++;
    m_user->setCardsOpen(cardsOpen);
    if(m_user->getCardsOpen()==2){
        for(int i=0;i < 6;i++){
            if(m_cards[i]->visible()==true&&!(m_cards[i]->visible()==index)){
                index2 = i;
                break;
            }
        }
        if(m_cards[index]->compareCards(m_cards[index2]))
        {
            qDebug()<<"true";
        }
        else{
            qDebug()<<"false";

        }
    }

}


void Game::changeVisibility(int index, int index2){
    switch(index){
    case 0:
        emit informPicture1();
        break;
    case 1:
        emit informPicture2();
        break;
    case 2:
        emit informPicture3();
        break;
    case 3:
        emit informPicture4();
        break;
    case 4:
        emit informPicture5();
        break;
    case 5:
        emit informPicture6();
        break;
    }

    switch(index2){
    case 0:
        emit informPicture1();
        break;
    case 1:
        emit informPicture2();
        break;
    case 2:
        emit informPicture3();
        break;
    case 3:
        emit informPicture4();
        break;
    case 4:
        emit informPicture5();
        break;
    case 5:
        emit informPicture6();
        break;
    }
}
